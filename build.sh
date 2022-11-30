#!/bin/bash

MOUNT_DIR=/opt/ksplit
LOG_FILE=${HOME}/ksplit-setup.log
LLVM_VERSION=10

USER=${SUDO_USER}

if [[ ${USER} == "" ]]; then
	  USER=$(id -u -n)
fi

if [[ ${SUDO_GID} == "" ]]; then
	  GROUP=$(id -g -n)
  else
	    GROUP=$(getent group  | grep ${SUDO_GID} | cut -d':' -f1)
fi

BCFILES_GIT_REPO="https://github.com/ksplit/bc-files.git"
BFLANK_GIT_REPO="https://github.com/ksplit/bflank.git"
IDLC_GIT_REPO="https://github.com/ksplit/idlc.git"
LVDKERNEL_GIT_REPO="https://github.com/ksplit/lvd-linux.git"
PDG_GIT_REPO="https://github.com/ksplit/pdg.git"

record_log() {
	  echo "[$(date)] $1" >> ${LOG_FILE}
  }

## Build
build_svf() {
  record_log "Building SVF"
  pushd ${MOUNT_DIR}/pdg/SVF
  mkdir -p build && cd build;
  cmake .. && make -j $(nproc)
}

build_pdg() {
  record_log "Building PDG"
  build_svf;
  pushd ${MOUNT_DIR}/pdg
  mkdir -p build && cd build;
  cmake .. && make -j $(nproc)
}

build_bareflank(){
  record_log "Building bareflank"
  pushd ${MOUNT_DIR}/bflank/build
  mv ../bflank/config.cmake ..
  cmake ../bflank
  make -j $(nproc)
  popd;
}

build_module_init_tools(){
  if [ x$(command -v lcd-insmod) == x"" ]; then
    record_log "Building module init tools"
    pushd lcd-domains/module-init-tools;
    aclocal -I m4 && automake --add-missing --copy && autoconf
    ./configure --prefix=/ --program-prefix=lcd-
    make
    sudo make install-exec
    popd;
  fi
}

build_lcd_domains() {
  record_log "Building lcd-domains"
  pushd lcd-domains;
  # do NOT use -j as it corrupts the .o files
  make
  popd;
}

build_linux() {
  record_log "Building Linux"
  pushd ${MOUNT_DIR}/lvd-linux;
  cp config_lvd .config
  make -j $(nproc)
  #if [ $(uname -r) != "4.8.4-lvd" ]; then
  #  install_linux;
  #fi
  build_module_init_tools
  build_lcd_domains
  popd;
}

build_idlc() {
  record_log "Building idlc"
  pushd ${MOUNT_DIR}/idlc;
  ./setup
  mkdir -p build && cd build
  cmake ..
  make -j $(nproc)
  ./idlc
  popd
}

build_all() {
  build_pdg;
  build_bareflank;
  build_linux;
  build_idlc;
}

build_all;

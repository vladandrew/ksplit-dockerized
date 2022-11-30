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


# Clone all repos
clone_pdg() {
  if [ ! -d ${MOUNT_DIR}/pdg ]; then
    record_log "Cloning PDG"
    pushd ${MOUNT_DIR}
    git clone ${PDG_GIT_REPO} pdg --recursive --branch dev_ksplit
    popd;
  else
    record_log "PDG dir not empty! skipping..."
  fi
}

clone_bareflank() {
  if [ ! -d ${MOUNT_DIR}/bflank ]; then
    mkdir -p ${MOUNT_DIR}/bflank;
    record_log "Cloning Bareflank"
    pushd ${MOUNT_DIR}/bflank
    git clone ${BFLANK_GIT_REPO} bflank --depth 100 --branch dev_ksplit
    mkdir cache build
    popd;
  else
    record_log "Bareflank dir not empty! skipping..."
  fi
}

clone_linux() {  if [ ! -d ${MOUNT_DIR}/lvd-linux ]; then
    record_log "Cloning LVD linux"
    pushd ${MOUNT_DIR}
    git clone ${LVDKERNEL_GIT_REPO} --branch dev_ksplit --depth 500 --recursive
    popd;
  else
    record_log "lvd-linux dir not empty! skipping..."
  fi
}

clone_bcfiles() {
  if [ ! -d ${MOUNT_DIR}/bc-files ]; then
    record_log "Cloning bc-files"
    pushd ${MOUNT_DIR}
    git clone ${BCFILES_GIT_REPO} --depth 1
    popd;
  else
    record_log "bc-files dir not empty! skipping..."
  fi
}

clone_idlc() {
  if [ ! -d ${MOUNT_DIR}/idlc ]; then
    record_log "Cloning idlc"
    pushd ${MOUNT_DIR}
    git clone ${IDLC_GIT_REPO} --branch dev_ksplit
    popd;
  else
    record_log "idlc dir not empty! skipping..."
  fi
}

clone_repos() {
  clone_pdg;
  clone_bareflank;
  clone_linux;
  clone_bcfiles;
  clone_idlc;
}

clone_repos;

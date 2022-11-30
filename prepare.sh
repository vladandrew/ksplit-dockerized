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

# Install llvm-10 from apt.llvm.org
install_llvm() {
    record_log "Downloading llvm script to ${HOME}/llvm.sh"
    wget https://apt.llvm.org/llvm.sh -O ${HOME}/llvm.sh
    chmod +x ${HOME}/llvm.sh
    sudo ${HOME}/llvm.sh ${LLVM_VERSION}
    sudo ./update-alternatives-clang.sh ${LLVM_VERSION} 200
}

install_dependencies() {
  record_log "Begin setup!"
  record_log "Installing dependencies..."
  sudo apt update
  sudo apt install -y build-essential nasm cmake libelf-dev libncurses5-dev gawk linux-headers-$(uname -r)
  install_llvm
}

prepare_machine() {
  install_dependencies
  #prepare_local_partition
}

prepare_machine;

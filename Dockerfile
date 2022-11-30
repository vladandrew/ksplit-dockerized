#!/bin/bash

FROM debian:10.3

WORKDIR /root

ENV DEBIAN_FRONTEND=noninteractive
RUN apt update && apt install -y wget vim build-essential \
    binutils file git tree psmisc python3-pip moreutils sudo

RUN apt install -y unzip curl autoconf libtool pkg-config 

RUN apt install -y python2 bc zip tar libssl-dev  lsb-release wget software-properties-common gnupg

COPY prepare.sh .
COPY update-alternatives-clang.sh .
RUN apt update
RUN ./prepare.sh

COPY clone.sh .
RUN mkdir -p /opt/ksplit
RUN ./clone.sh
RUN apt install -y cmake

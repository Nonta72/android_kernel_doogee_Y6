#!/bin/bash

#Nonta72, I'm lazy. So, I just use an automated script
#Thanks to @Mysteryagr

mkdir -p out

export USE_CCACHE=1
export ARCH=arm64 ARCH_MTK_PLATFORM=mt6755
export SUBARCH=arm64
export CROSS_COMPILE=/home/nonta72/linaro63/bin/aarch64-linux-gnu-

#Defconfig for Lone_Kernel
make -C $PWD O=$PWD/out ARCH=arm64 lone_defconfig

make -j4 -C $PWD O=$PWD/out ARCH=arm64

#!/bin/bash

#Nonta72, I'm lazy. So, I just use an automated script
#Thanks to @Mysteryagr

mkdir -p out

export USE_CCACHE=1
export ARCH=arm64 ARCH_MTK_PLATFORM=mt6755
export SUBARCH=arm64
export CROSS_COMPILE=/home/nonta72/linaro49/bin/aarch64-linux-gnu-

#Defconfig for K6000Plus(and Y6)
make -C $PWD O=$PWD/out ARCH=arm64 hct6750_66_n_defconfig
#make ARCH=arm64 k6000_plus_defconfig

make -j4 -C $PWD O=$PWD/out ARCH=arm64

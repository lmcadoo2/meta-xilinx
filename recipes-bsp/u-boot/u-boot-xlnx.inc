require recipes-bsp/u-boot/u-boot.inc

LICENSE = "GPLv2+"

XILINX_EXTENSION = "-xilinx"

FILESEXTRAPATHS += "${THISDIR}/u-boot-xlnx:"
SRC_URI = "git://github.com/Xilinx/u-boot-xlnx.git;protocol=git"

include u-boot-extra.inc

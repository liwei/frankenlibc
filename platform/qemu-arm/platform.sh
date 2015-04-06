#!/bin/sh

export CC=${CC-arm-none-eabi-gcc}
export NM=${NM-arm-none-eabi-nm}
export AR=${AR-arm-none-eabi-ar}
export OBJCOPY=${OBJCOPY-arm-none-eabi-objcopy}

# arm-none-eabi-gcc does not turn this off when cpu set
EXTRA_CPPFLAGS="-U__VFP_FP__"

EXTRA_CFLAGS="-mcpu=arm926ej-s"
EXTRA_AFLAGS="-mcpu=arm926ej-s"

# this compiler is very fussy, planning to fix these issues at some point
EXTRA_CWARNFLAGS="-Wno-error"

LINKSCRIPT="${PWD}/platform/qemu-arm/link.ld"
EXTRA_LDSCRIPT="-T ${LINKSCRIPT}"
EXTRA_LDSCRIPT_CC="-Wl,-T,${LINKSCRIPT}"

EXTRAFLAGS="-F CPPFLAGS=${EXTRA_CPPFLAGS} -F ACFLAGS=${EXTRA_AFLAGS} -F CWARNFLAGS=${EXTRA_CWARNFLAGS} ${EXTRAFLAGS}"

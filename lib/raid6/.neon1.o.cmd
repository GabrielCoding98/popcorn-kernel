cmd_lib/raid6/neon1.o := arm-linux-gnueabihf-gcc -Wp,-MD,lib/raid6/.neon1.o.d  -nostdinc -isystem /usr/lib/gcc-cross/arm-linux-gnueabihf/7/include -I./arch/arm/include -I./arch/arm/include/generated  -I./include -I./arch/arm/include/uapi -I./arch/arm/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/kconfig.h -include ./include/linux/compiler_types.h -D__KERNEL__ -mlittle-endian -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -fshort-wchar -Werror-implicit-function-declaration -Wno-format-security -std=gnu89 -fno-PIE -fno-dwarf2-cfi-asm -fno-omit-frame-pointer -mapcs -mno-sched-prolog -fno-ipa-sra -mabi=aapcs-linux -mfpu=vfp -funwind-tables -marm -Wa,-mno-warn-deprecated -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -fno-delete-null-pointer-checks -Wno-frame-address -Wno-format-truncation -Wno-format-overflow -Wno-int-in-bool-context -O2 --param=allow-store-data-races=0 -Wframe-larger-than=1024 -fstack-protector-strong -Wno-unused-but-set-variable -Wno-unused-const-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -fno-var-tracking-assignments -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fno-merge-all-constants -fmerge-constants -fno-stack-check -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -Werror=date-time -Werror=incompatible-pointer-types -Werror=designated-init -ffreestanding -march=armv7-a -mfloat-abi=softfp -mfpu=neon  -DMODULE  -DKBUILD_BASENAME='"neon1"' -DKBUILD_MODNAME='"raid6_pq"' -c -o lib/raid6/.tmp_neon1.o lib/raid6/neon1.c

source_lib/raid6/neon1.o := lib/raid6/neon1.c

deps_lib/raid6/neon1.o := \
  include/linux/kconfig.h \
    $(wildcard include/config/cpu/big/endian.h) \
    $(wildcard include/config/booger.h) \
    $(wildcard include/config/foo.h) \
  include/linux/compiler_types.h \
    $(wildcard include/config/have/arch/compiler/h.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/retpoline.h) \
    $(wildcard include/config/arch/use/builtin/bswap.h) \
  /usr/lib/gcc-cross/arm-linux-gnueabihf/7/include/arm_neon.h \
  /usr/lib/gcc-cross/arm-linux-gnueabihf/7/include/arm_fp16.h \
  /usr/lib/gcc-cross/arm-linux-gnueabihf/7/include/stdint.h \
  /usr/lib/gcc-cross/arm-linux-gnueabihf/7/include/stdint-gcc.h \

lib/raid6/neon1.o: $(deps_lib/raid6/neon1.o)

$(deps_lib/raid6/neon1.o):

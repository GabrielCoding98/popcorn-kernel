cmd_arch/arm/lib/xor-neon.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o arch/arm/lib/xor-neon.ko arch/arm/lib/xor-neon.o arch/arm/lib/xor-neon.mod.o ;  true
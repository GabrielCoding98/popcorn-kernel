cmd_crypto/xts.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o crypto/xts.ko crypto/xts.o crypto/xts.mod.o ;  true

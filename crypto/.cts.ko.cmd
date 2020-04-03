cmd_crypto/cts.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o crypto/cts.ko crypto/cts.o crypto/cts.mod.o ;  true

cmd_crypto/ghash-generic.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o crypto/ghash-generic.ko crypto/ghash-generic.o crypto/ghash-generic.mod.o ;  true
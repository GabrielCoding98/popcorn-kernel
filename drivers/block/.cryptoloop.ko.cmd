cmd_drivers/block/cryptoloop.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/block/cryptoloop.ko drivers/block/cryptoloop.o drivers/block/cryptoloop.mod.o ;  true
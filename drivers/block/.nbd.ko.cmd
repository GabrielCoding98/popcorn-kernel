cmd_drivers/block/nbd.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/block/nbd.ko drivers/block/nbd.o drivers/block/nbd.mod.o ;  true

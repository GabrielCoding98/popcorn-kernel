cmd_drivers/md/dm-region-hash.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/md/dm-region-hash.ko drivers/md/dm-region-hash.o drivers/md/dm-region-hash.mod.o ;  true
cmd_drivers/md/md-mod.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/md/md-mod.ko drivers/md/md-mod.o drivers/md/md-mod.mod.o ;  true
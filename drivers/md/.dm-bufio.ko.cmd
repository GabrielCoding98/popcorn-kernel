cmd_drivers/md/dm-bufio.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/md/dm-bufio.ko drivers/md/dm-bufio.o drivers/md/dm-bufio.mod.o ;  true

cmd_drivers/hid/hid-pl.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/hid/hid-pl.ko drivers/hid/hid-pl.o drivers/hid/hid-pl.mod.o ;  true
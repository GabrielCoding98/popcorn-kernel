cmd_drivers/hid/hid-chicony.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/hid/hid-chicony.ko drivers/hid/hid-chicony.o drivers/hid/hid-chicony.mod.o ;  true
cmd_drivers/hid/hid-axff.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/hid/hid-axff.ko drivers/hid/hid-axff.o drivers/hid/hid-axff.mod.o ;  true
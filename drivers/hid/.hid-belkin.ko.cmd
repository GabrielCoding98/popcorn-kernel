cmd_drivers/hid/hid-belkin.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/hid/hid-belkin.ko drivers/hid/hid-belkin.o drivers/hid/hid-belkin.mod.o ;  true
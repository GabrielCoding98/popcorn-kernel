cmd_drivers/hid/hid-elecom.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/hid/hid-elecom.ko drivers/hid/hid-elecom.o drivers/hid/hid-elecom.mod.o ;  true
cmd_drivers/hid/hid-roccat-kone.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/hid/hid-roccat-kone.ko drivers/hid/hid-roccat-kone.o drivers/hid/hid-roccat-kone.mod.o ;  true
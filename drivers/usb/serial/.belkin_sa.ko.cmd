cmd_drivers/usb/serial/belkin_sa.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/usb/serial/belkin_sa.ko drivers/usb/serial/belkin_sa.o drivers/usb/serial/belkin_sa.mod.o ;  true
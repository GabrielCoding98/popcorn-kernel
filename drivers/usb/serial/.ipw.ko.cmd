cmd_drivers/usb/serial/ipw.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/usb/serial/ipw.ko drivers/usb/serial/ipw.o drivers/usb/serial/ipw.mod.o ;  true
cmd_drivers/usb/serial/cyberjack.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/usb/serial/cyberjack.ko drivers/usb/serial/cyberjack.o drivers/usb/serial/cyberjack.mod.o ;  true
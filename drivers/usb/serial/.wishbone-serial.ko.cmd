cmd_drivers/usb/serial/wishbone-serial.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/usb/serial/wishbone-serial.ko drivers/usb/serial/wishbone-serial.o drivers/usb/serial/wishbone-serial.mod.o ;  true

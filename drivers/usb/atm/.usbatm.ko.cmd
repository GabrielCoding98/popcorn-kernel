cmd_drivers/usb/atm/usbatm.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/usb/atm/usbatm.ko drivers/usb/atm/usbatm.o drivers/usb/atm/usbatm.mod.o ;  true
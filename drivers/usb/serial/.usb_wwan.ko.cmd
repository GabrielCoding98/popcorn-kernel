cmd_drivers/usb/serial/usb_wwan.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/usb/serial/usb_wwan.ko drivers/usb/serial/usb_wwan.o drivers/usb/serial/usb_wwan.mod.o ;  true
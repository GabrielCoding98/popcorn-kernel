cmd_drivers/usb/usbip/usbip-host.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/usb/usbip/usbip-host.ko drivers/usb/usbip/usbip-host.o drivers/usb/usbip/usbip-host.mod.o ;  true

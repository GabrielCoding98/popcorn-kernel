cmd_drivers/usb/usbip/vhci-hcd.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/usb/usbip/vhci-hcd.ko drivers/usb/usbip/vhci-hcd.o drivers/usb/usbip/vhci-hcd.mod.o ;  true
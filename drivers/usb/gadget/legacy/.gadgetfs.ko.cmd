cmd_drivers/usb/gadget/legacy/gadgetfs.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/usb/gadget/legacy/gadgetfs.ko drivers/usb/gadget/legacy/gadgetfs.o drivers/usb/gadget/legacy/gadgetfs.mod.o ;  true
cmd_drivers/usb/gadget/function/usb_f_uvc.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/usb/gadget/function/usb_f_uvc.ko drivers/usb/gadget/function/usb_f_uvc.o drivers/usb/gadget/function/usb_f_uvc.mod.o ;  true

cmd_drivers/usb/gadget/function/usb_f_serial.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/usb/gadget/function/usb_f_serial.ko drivers/usb/gadget/function/usb_f_serial.o drivers/usb/gadget/function/usb_f_serial.mod.o ;  true
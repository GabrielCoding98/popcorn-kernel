cmd_drivers/usb/gadget/function/usb_f_mass_storage.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/usb/gadget/function/usb_f_mass_storage.ko drivers/usb/gadget/function/usb_f_mass_storage.o drivers/usb/gadget/function/usb_f_mass_storage.mod.o ;  true
cmd_drivers/media/usb/gspca/gspca_vicam.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/media/usb/gspca/gspca_vicam.ko drivers/media/usb/gspca/gspca_vicam.o drivers/media/usb/gspca/gspca_vicam.mod.o ;  true
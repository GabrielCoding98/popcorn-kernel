cmd_drivers/media/usb/gspca/gspca_main.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/media/usb/gspca/gspca_main.ko drivers/media/usb/gspca/gspca_main.o drivers/media/usb/gspca/gspca_main.mod.o ;  true

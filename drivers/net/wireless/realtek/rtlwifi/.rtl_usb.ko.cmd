cmd_drivers/net/wireless/realtek/rtlwifi/rtl_usb.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/net/wireless/realtek/rtlwifi/rtl_usb.ko drivers/net/wireless/realtek/rtlwifi/rtl_usb.o drivers/net/wireless/realtek/rtlwifi/rtl_usb.mod.o ;  true
cmd_drivers/net/wireless/ralink/rt2x00/rt2500usb.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/net/wireless/ralink/rt2x00/rt2500usb.ko drivers/net/wireless/ralink/rt2x00/rt2500usb.o drivers/net/wireless/ralink/rt2x00/rt2500usb.mod.o ;  true
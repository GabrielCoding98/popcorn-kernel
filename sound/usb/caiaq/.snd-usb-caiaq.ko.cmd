cmd_sound/usb/caiaq/snd-usb-caiaq.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o sound/usb/caiaq/snd-usb-caiaq.ko sound/usb/caiaq/snd-usb-caiaq.o sound/usb/caiaq/snd-usb-caiaq.mod.o ;  true
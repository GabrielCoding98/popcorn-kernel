cmd_drivers/staging/fbtft/fb_watterott.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/staging/fbtft/fb_watterott.ko drivers/staging/fbtft/fb_watterott.o drivers/staging/fbtft/fb_watterott.mod.o ;  true
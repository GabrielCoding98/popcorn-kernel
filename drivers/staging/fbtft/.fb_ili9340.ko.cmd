cmd_drivers/staging/fbtft/fb_ili9340.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/staging/fbtft/fb_ili9340.ko drivers/staging/fbtft/fb_ili9340.o drivers/staging/fbtft/fb_ili9340.mod.o ;  true
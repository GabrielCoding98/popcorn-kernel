cmd_drivers/staging/fbtft/fb_ili9163.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/staging/fbtft/fb_ili9163.ko drivers/staging/fbtft/fb_ili9163.o drivers/staging/fbtft/fb_ili9163.mod.o ;  true
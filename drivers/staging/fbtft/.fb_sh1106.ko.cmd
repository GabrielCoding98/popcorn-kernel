cmd_drivers/staging/fbtft/fb_sh1106.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/staging/fbtft/fb_sh1106.ko drivers/staging/fbtft/fb_sh1106.o drivers/staging/fbtft/fb_sh1106.mod.o ;  true
cmd_drivers/staging/fbtft/fb_tinylcd.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/staging/fbtft/fb_tinylcd.ko drivers/staging/fbtft/fb_tinylcd.o drivers/staging/fbtft/fb_tinylcd.mod.o ;  true
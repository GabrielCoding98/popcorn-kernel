cmd_drivers/video/fbdev/ssd1307fb.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/video/fbdev/ssd1307fb.ko drivers/video/fbdev/ssd1307fb.o drivers/video/fbdev/ssd1307fb.mod.o ;  true

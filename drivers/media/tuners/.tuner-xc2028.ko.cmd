cmd_drivers/media/tuners/tuner-xc2028.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/media/tuners/tuner-xc2028.ko drivers/media/tuners/tuner-xc2028.o drivers/media/tuners/tuner-xc2028.mod.o ;  true
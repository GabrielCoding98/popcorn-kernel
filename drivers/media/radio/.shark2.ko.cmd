cmd_drivers/media/radio/shark2.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/media/radio/shark2.ko drivers/media/radio/shark2.o drivers/media/radio/shark2.mod.o ;  true
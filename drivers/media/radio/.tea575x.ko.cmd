cmd_drivers/media/radio/tea575x.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/media/radio/tea575x.ko drivers/media/radio/tea575x.o drivers/media/radio/tea575x.mod.o ;  true

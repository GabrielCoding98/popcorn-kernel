cmd_drivers/media/rc/ir-sharp-decoder.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/media/rc/ir-sharp-decoder.ko drivers/media/rc/ir-sharp-decoder.o drivers/media/rc/ir-sharp-decoder.mod.o ;  true
cmd_drivers/iio/adc/mcp3422.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/iio/adc/mcp3422.ko drivers/iio/adc/mcp3422.o drivers/iio/adc/mcp3422.mod.o ;  true

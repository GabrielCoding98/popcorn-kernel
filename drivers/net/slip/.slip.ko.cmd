cmd_drivers/net/slip/slip.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/net/slip/slip.ko drivers/net/slip/slip.o drivers/net/slip/slip.mod.o ;  true
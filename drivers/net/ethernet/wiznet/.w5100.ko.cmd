cmd_drivers/net/ethernet/wiznet/w5100.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/net/ethernet/wiznet/w5100.ko drivers/net/ethernet/wiznet/w5100.o drivers/net/ethernet/wiznet/w5100.mod.o ;  true
cmd_drivers/net/phy/mdio-bitbang.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/net/phy/mdio-bitbang.ko drivers/net/phy/mdio-bitbang.o drivers/net/phy/mdio-bitbang.mod.o ;  true
cmd_drivers/tty/serial/sc16is7xx.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/tty/serial/sc16is7xx.ko drivers/tty/serial/sc16is7xx.o drivers/tty/serial/sc16is7xx.mod.o ;  true

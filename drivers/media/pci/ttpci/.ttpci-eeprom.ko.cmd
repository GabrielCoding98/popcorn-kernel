cmd_drivers/media/pci/ttpci/ttpci-eeprom.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/media/pci/ttpci/ttpci-eeprom.ko drivers/media/pci/ttpci/ttpci-eeprom.o drivers/media/pci/ttpci/ttpci-eeprom.mod.o ;  true
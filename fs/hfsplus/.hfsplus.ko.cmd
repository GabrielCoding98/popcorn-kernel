cmd_fs/hfsplus/hfsplus.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o fs/hfsplus/hfsplus.ko fs/hfsplus/hfsplus.o fs/hfsplus/hfsplus.mod.o ;  true

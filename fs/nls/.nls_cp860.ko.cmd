cmd_fs/nls/nls_cp860.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o fs/nls/nls_cp860.ko fs/nls/nls_cp860.o fs/nls/nls_cp860.mod.o ;  true

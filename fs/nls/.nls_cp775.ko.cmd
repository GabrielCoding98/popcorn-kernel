cmd_fs/nls/nls_cp775.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o fs/nls/nls_cp775.ko fs/nls/nls_cp775.o fs/nls/nls_cp775.mod.o ;  true

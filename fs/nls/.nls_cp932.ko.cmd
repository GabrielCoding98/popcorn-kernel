cmd_fs/nls/nls_cp932.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o fs/nls/nls_cp932.ko fs/nls/nls_cp932.o fs/nls/nls_cp932.mod.o ;  true
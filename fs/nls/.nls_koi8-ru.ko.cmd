cmd_fs/nls/nls_koi8-ru.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o fs/nls/nls_koi8-ru.ko fs/nls/nls_koi8-ru.o fs/nls/nls_koi8-ru.mod.o ;  true
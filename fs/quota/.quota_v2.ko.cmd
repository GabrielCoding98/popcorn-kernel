cmd_fs/quota/quota_v2.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o fs/quota/quota_v2.ko fs/quota/quota_v2.o fs/quota/quota_v2.mod.o ;  true

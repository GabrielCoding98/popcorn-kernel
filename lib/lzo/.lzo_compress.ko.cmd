cmd_lib/lzo/lzo_compress.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o lib/lzo/lzo_compress.ko lib/lzo/lzo_compress.o lib/lzo/lzo_compress.mod.o ;  true

cmd_lib/zstd/zstd_compress.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o lib/zstd/zstd_compress.ko lib/zstd/zstd_compress.o lib/zstd/zstd_compress.mod.o ;  true
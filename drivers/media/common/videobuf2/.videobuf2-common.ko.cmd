cmd_drivers/media/common/videobuf2/videobuf2-common.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/media/common/videobuf2/videobuf2-common.ko drivers/media/common/videobuf2/videobuf2-common.o drivers/media/common/videobuf2/videobuf2-common.mod.o ;  true

cmd_sound/drivers/snd-mtpav.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o sound/drivers/snd-mtpav.ko sound/drivers/snd-mtpav.o sound/drivers/snd-mtpav.mod.o ;  true

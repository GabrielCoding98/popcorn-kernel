cmd_sound/soc/bcm/snd-soc-justboom-dac.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o sound/soc/bcm/snd-soc-justboom-dac.ko sound/soc/bcm/snd-soc-justboom-dac.o sound/soc/bcm/snd-soc-justboom-dac.mod.o ;  true
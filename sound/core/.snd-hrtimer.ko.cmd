cmd_sound/core/snd-hrtimer.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o sound/core/snd-hrtimer.ko sound/core/snd-hrtimer.o sound/core/snd-hrtimer.mod.o ;  true
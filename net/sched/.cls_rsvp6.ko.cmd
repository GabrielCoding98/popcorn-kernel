cmd_net/sched/cls_rsvp6.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/sched/cls_rsvp6.ko net/sched/cls_rsvp6.o net/sched/cls_rsvp6.mod.o ;  true
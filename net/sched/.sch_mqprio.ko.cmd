cmd_net/sched/sch_mqprio.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/sched/sch_mqprio.ko net/sched/sch_mqprio.o net/sched/sch_mqprio.mod.o ;  true
cmd_net/sched/sch_netem.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/sched/sch_netem.ko net/sched/sch_netem.o net/sched/sch_netem.mod.o ;  true
cmd_net/sched/sch_plug.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/sched/sch_plug.ko net/sched/sch_plug.o net/sched/sch_plug.mod.o ;  true

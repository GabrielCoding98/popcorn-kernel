cmd_net/openvswitch/vport-gre.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/openvswitch/vport-gre.ko net/openvswitch/vport-gre.o net/openvswitch/vport-gre.mod.o ;  true
cmd_net/openvswitch/openvswitch.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/openvswitch/openvswitch.ko net/openvswitch/openvswitch.o net/openvswitch/openvswitch.mod.o ;  true
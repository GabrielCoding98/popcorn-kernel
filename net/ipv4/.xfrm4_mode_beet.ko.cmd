cmd_net/ipv4/xfrm4_mode_beet.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/ipv4/xfrm4_mode_beet.ko net/ipv4/xfrm4_mode_beet.o net/ipv4/xfrm4_mode_beet.mod.o ;  true
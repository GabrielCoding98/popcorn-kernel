cmd_net/bridge/netfilter/nf_log_bridge.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/bridge/netfilter/nf_log_bridge.ko net/bridge/netfilter/nf_log_bridge.o net/bridge/netfilter/nf_log_bridge.mod.o ;  true
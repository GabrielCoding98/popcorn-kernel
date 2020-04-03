#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xa738c28a, "module_layout" },
	{ 0x85bf72bd, "register_netdevice" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa77bfd29, "register_inet6addr_validator_notifier" },
	{ 0x18e60984, "__do_once_start" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xc92b3bae, "dev_forward_skb" },
	{ 0x8c43e202, "dev_change_flags" },
	{ 0x84f3c2a5, "dev_mc_unsync" },
	{ 0xc32c71af, "register_inetaddr_validator_notifier" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0xc570da1a, "ip_local_out" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xab63baa5, "unregister_inetaddr_validator_notifier" },
	{ 0x472d058d, "dev_uc_add" },
	{ 0x7d300b2c, "netdev_rx_handler_register" },
	{ 0xbcffa1a6, "dst_release" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x8d334730, "skb_clone" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0x3127906d, "dev_set_allmulti" },
	{ 0x25e172f9, "vlan_vid_del" },
	{ 0x1c6bc30c, "call_netdevice_notifiers" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x640d1f25, "vlan_vid_add" },
	{ 0x47c65bfc, "unregister_inet6addr_validator_notifier" },
	{ 0x99f0359e, "skb_scrub_packet" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x61ac380c, "netif_rx" },
	{ 0x315de896, "__pskb_pull_tail" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0x5f754e5a, "memset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0xc5b301c3, "unregister_pernet_subsys" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x1fe32e72, "__ethtool_get_link_ksettings" },
	{ 0x7c32d0f0, "printk" },
	{ 0x9577d577, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x54e6e263, "nf_unregister_net_hooks" },
	{ 0xbeec26fb, "ns_capable" },
	{ 0x21af32f7, "ida_free" },
	{ 0x68183b3b, "nla_put" },
	{ 0xd8cc71a9, "netdev_upper_dev_unlink" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x26840a1e, "netif_stacked_transfer_operstate" },
	{ 0x55c68dd, "skb_pull" },
	{ 0x456e3acc, "rtnl_link_unregister" },
	{ 0x8b3ad3f2, "__dev_get_by_index" },
	{ 0x6c209eab, "__alloc_percpu_gfp" },
	{ 0xb1dc134e, "ip_route_input_noref" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0x78cb06b6, "ip6_route_output_flags" },
	{ 0x6bc1e893, "nf_register_net_hooks" },
	{ 0x152cd3e, "eth_header_cache_update" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9f16dd18, "eth_header_parse" },
	{ 0x14072471, "netdev_rx_handler_unregister" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0xd10120b, "register_pernet_subsys" },
	{ 0x99bcd6ca, "netdev_upper_dev_link" },
	{ 0xc30abd6, "netdev_err" },
	{ 0x91c05b8a, "netdev_features_change" },
	{ 0x912342a9, "ether_setup" },
	{ 0xa521ff31, "dev_uc_unsync" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x9265c8b, "unregister_netdevice_queue" },
	{ 0xe3ec5362, "ip_route_output_flow" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x202aef0f, "eth_header_cache" },
	{ 0xd8d59a8a, "rtnl_link_register" },
	{ 0x2bcfefff, "dev_uc_del" },
	{ 0x802379fe, "dev_uc_sync" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc0e4977e, "ip6_local_out" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x5f55907f, "dev_queue_xmit" },
	{ 0x536f1a38, "netdev_is_rx_handler_busy" },
	{ 0x445c816c, "ida_destroy" },
	{ 0x4f398724, "dev_mc_sync" },
	{ 0xeb00f3ca, "ida_alloc_range" },
	{ 0x74698b1c, "ip6_route_input_lookup" },
	{ 0x9a717656, "__do_once_done" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipv6";


MODULE_INFO(srcversion, "A80046C1BD53C9027255D39");

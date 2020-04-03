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
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xc92b3bae, "dev_forward_skb" },
	{ 0x84f3c2a5, "dev_mc_unsync" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x4dbe7fc0, "dev_get_nest_level" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x472d058d, "dev_uc_add" },
	{ 0x48f0ac36, "__dev_forward_skb" },
	{ 0x74f7135b, "dev_mc_add_excl" },
	{ 0x7d300b2c, "netdev_rx_handler_register" },
	{ 0x9501a4a8, "dev_uc_add_excl" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x8d334730, "skb_clone" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x3127906d, "dev_set_allmulti" },
	{ 0x25e172f9, "vlan_vid_del" },
	{ 0x1c6bc30c, "call_netdevice_notifiers" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xb145158e, "linkwatch_fire_event" },
	{ 0x640d1f25, "vlan_vid_add" },
	{ 0x657d18c5, "__netpoll_setup" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x61ac380c, "netif_rx" },
	{ 0xfe4904bc, "netpoll_send_skb_on_dev" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5f754e5a, "memset" },
	{ 0xd4e1b9fa, "netif_rx_ni" },
	{ 0x56db610a, "dev_set_mac_address" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x55c57c01, "ip_check_defrag" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x1fe32e72, "__ethtool_get_link_ksettings" },
	{ 0x9577d577, "ethtool_op_get_link" },
	{ 0xdf9dd19f, "__netpoll_free_async" },
	{ 0x4d06cecb, "dev_mc_del" },
	{ 0x68183b3b, "nla_put" },
	{ 0xd8cc71a9, "netdev_upper_dev_unlink" },
	{ 0xbab5623f, "ndo_dflt_fdb_dump" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0x26840a1e, "netif_stacked_transfer_operstate" },
	{ 0x456e3acc, "rtnl_link_unregister" },
	{ 0x8b3ad3f2, "__dev_get_by_index" },
	{ 0x6c209eab, "__alloc_percpu_gfp" },
	{ 0x152cd3e, "eth_header_cache_update" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x14072471, "netdev_rx_handler_unregister" },
	{ 0x9f16dd18, "eth_header_parse" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0x70976b0b, "passthru_features_check" },
	{ 0x99bcd6ca, "netdev_upper_dev_link" },
	{ 0x912342a9, "ether_setup" },
	{ 0xa521ff31, "dev_uc_unsync" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x9265c8b, "unregister_netdevice_queue" },
	{ 0xa5d8c690, "eth_validate_addr" },
	{ 0xa24ccf47, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x202aef0f, "eth_header_cache" },
	{ 0xd8d59a8a, "rtnl_link_register" },
	{ 0x2bcfefff, "dev_uc_del" },
	{ 0x802379fe, "dev_uc_sync" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0xd832951, "netdev_update_features" },
	{ 0xd8e00409, "dev_queue_xmit_accel" },
	{ 0x536f1a38, "netdev_is_rx_handler_busy" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x4f398724, "dev_mc_sync" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0x6ba078f0, "dev_set_mtu" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "50E9FDF4CB038D636AD7938");

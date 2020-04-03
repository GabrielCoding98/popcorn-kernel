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
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xf5430875, "gro_find_receive_by_type" },
	{ 0x8c43e202, "dev_change_flags" },
	{ 0xf6b27604, "vlan_filter_push_vids" },
	{ 0x84f3c2a5, "dev_mc_unsync" },
	{ 0xfbded133, "vlan_filter_drop_vids" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xcb5991a7, "dev_get_flags" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x4dbe7fc0, "dev_get_nest_level" },
	{ 0xe418e0c6, "proc_create_single_data" },
	{ 0x26bbff56, "garp_uninit_applicant" },
	{ 0xfcb34084, "vlan_dev_vlan_id" },
	{ 0x472d058d, "dev_uc_add" },
	{ 0x491483ea, "seq_puts" },
	{ 0xc4785ed8, "garp_request_join" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xd228abaa, "vlan_uses_dev" },
	{ 0x8a7d7e3c, "netif_carrier_on" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xcae566cc, "netif_carrier_off" },
	{ 0xebd6836c, "remove_proc_entry" },
	{ 0x3127906d, "dev_set_allmulti" },
	{ 0x25e172f9, "vlan_vid_del" },
	{ 0x1c6bc30c, "call_netdevice_notifiers" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xb145158e, "linkwatch_fire_event" },
	{ 0xc396d6fe, "dev_add_offload" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x640d1f25, "vlan_vid_add" },
	{ 0x657d18c5, "__netpoll_setup" },
	{ 0xdc4a97a4, "garp_init_applicant" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0xe69a1920, "proc_remove" },
	{ 0xb2777056, "vlan_ioctl_set" },
	{ 0x315de896, "__pskb_pull_tail" },
	{ 0xfe4904bc, "netpoll_send_skb_on_dev" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0xc5b301c3, "unregister_pernet_subsys" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x1fe32e72, "__ethtool_get_link_ksettings" },
	{ 0x7c32d0f0, "printk" },
	{ 0x9577d577, "ethtool_op_get_link" },
	{ 0xbeec26fb, "ns_capable" },
	{ 0xdf9dd19f, "__netpoll_free_async" },
	{ 0x2ac79575, "free_netdev" },
	{ 0x328a05f1, "strncpy" },
	{ 0x271e16fe, "garp_register_application" },
	{ 0x68183b3b, "nla_put" },
	{ 0xd8cc71a9, "netdev_upper_dev_unlink" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xa47c4737, "dev_remove_offload" },
	{ 0x6ef02d63, "skb_push" },
	{ 0xd7222e4a, "proc_mkdir_data" },
	{ 0x26840a1e, "netif_stacked_transfer_operstate" },
	{ 0x72dbe89d, "gro_find_complete_by_type" },
	{ 0xec2404f1, "init_net" },
	{ 0x456e3acc, "rtnl_link_unregister" },
	{ 0x8b3ad3f2, "__dev_get_by_index" },
	{ 0xb53d2eec, "garp_request_leave" },
	{ 0x6c209eab, "__alloc_percpu_gfp" },
	{ 0xe2e018f8, "nla_validate" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9f16dd18, "eth_header_parse" },
	{ 0x4f685e1, "alloc_netdev_mqs" },
	{ 0xd10120b, "register_pernet_subsys" },
	{ 0x99bcd6ca, "netdev_upper_dev_link" },
	{ 0x847b8731, "proc_create_net_data" },
	{ 0x912342a9, "ether_setup" },
	{ 0xa521ff31, "dev_uc_unsync" },
	{ 0x29215055, "__dev_get_by_name" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x29a344df, "garp_unregister_application" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x9265c8b, "unregister_netdevice_queue" },
	{ 0x829dddab, "netdev_warn" },
	{ 0xa5d8c690, "eth_validate_addr" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xa24ccf47, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x58b4645c, "dev_close_many" },
	{ 0xd8d59a8a, "rtnl_link_register" },
	{ 0x2bcfefff, "dev_uc_del" },
	{ 0x802379fe, "dev_uc_sync" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xd832951, "netdev_update_features" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x5f55907f, "dev_queue_xmit" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x4f398724, "dev_mc_sync" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x710bccb9, "dev_get_stats" },
	{ 0x6ba078f0, "dev_set_mtu" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=garp";


MODULE_INFO(srcversion, "A493A705D0E3D7CD40F6F48");

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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xa39b3730, "release_sock" },
	{ 0xa5216657, "neigh_lookup" },
	{ 0xfb8949de, "netdev_info" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x7830b402, "ip_tunnel_get_stats64" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x7f1072b7, "ip_mc_leave_group" },
	{ 0xd1b5c9f9, "udp_tunnel_notify_del_rx_port" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x9acc6729, "ip_tunnel_metadata_cnt" },
	{ 0x5edb6ae1, "arp_tbl" },
	{ 0xbcffa1a6, "dst_release" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x8d334730, "skb_clone" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x7b9c9374, "udp_tunnel_xmit_skb" },
	{ 0x2f2a2ee6, "rtnl_notify" },
	{ 0x3b152bd9, "dst_cache_set_ip6" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x780145bb, "udp_tun_rx_dst" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x426e0d58, "dst_cache_get_ip4" },
	{ 0x899d1565, "dst_cache_get_ip6" },
	{ 0xb07b10e1, "neigh_destroy" },
	{ 0x99f0359e, "skb_scrub_packet" },
	{ 0xce90062e, "refcount_inc_not_zero_checked" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xff71b834, "skb_trim" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x8ecfc019, "udp_sock_create6" },
	{ 0x5518e867, "setup_udp_tunnel_sock" },
	{ 0x61ac380c, "netif_rx" },
	{ 0x315de896, "__pskb_pull_tail" },
	{ 0x76a15271, "__iptunnel_pull_header" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xb189f767, "udp_tunnel_sock_release" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0xd4e1b9fa, "netif_rx_ni" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0xc5b301c3, "unregister_pernet_subsys" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x5445f22e, "arp_create" },
	{ 0x7c32d0f0, "printk" },
	{ 0x9577d577, "ethtool_op_get_link" },
	{ 0x6addc74a, "lock_sock_nested" },
	{ 0xb1b7e0a6, "udp_tunnel_push_rx_port" },
	{ 0xa827cef6, "ip_mc_join_group" },
	{ 0x2ac79575, "free_netdev" },
	{ 0x68183b3b, "nla_put" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x38a9f7c5, "in6addr_loopback" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x6ef02d63, "skb_push" },
	{ 0x95db2362, "gro_cells_receive" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x55c68dd, "skb_pull" },
	{ 0xea7759c4, "ipv6_stub" },
	{ 0x1fe24529, "__skb_get_hash" },
	{ 0x456e3acc, "rtnl_link_unregister" },
	{ 0x8b3ad3f2, "__dev_get_by_index" },
	{ 0x6c209eab, "__alloc_percpu_gfp" },
	{ 0x93e97af2, "peernet2id" },
	{ 0xd18c02fb, "rtnl_configure_link" },
	{ 0x3335ba2a, "eth_gro_receive" },
	{ 0xdd89fb37, "rtnl_set_sk_err" },
	{ 0x9492d119, "eth_gro_complete" },
	{ 0xe9474bde, "dst_cache_init" },
	{ 0x8b329d02, "udp_tunnel_notify_add_rx_port" },
	{ 0x2827ae6f, "__alloc_skb" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0xbfba76ab, "eth_type_trans" },
	{ 0xd10120b, "register_pernet_subsys" },
	{ 0x440200b7, "pskb_expand_head" },
	{ 0xb3314c25, "udp_tunnel_drop_rx_port" },
	{ 0x912342a9, "ether_setup" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xb19dba04, "iptunnel_handle_offloads" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x9265c8b, "unregister_netdevice_queue" },
	{ 0xe3ec5362, "ip_route_output_flow" },
	{ 0x1efbc975, "rtnl_create_link" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x2872c336, "gro_cells_init" },
	{ 0xa5d8c690, "eth_validate_addr" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x44da5d0f, "__csum_ipv6_magic" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x643e0ce5, "call_rcu_sched" },
	{ 0xd8d59a8a, "rtnl_link_register" },
	{ 0xe427baf4, "udp_tunnel6_xmit_skb" },
	{ 0x266a2e51, "dst_cache_set_ip4" },
	{ 0xa0af3abf, "udp_sock_create4" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0x8fdcf915, "param_ops_ushort" },
	{ 0xbe154a3e, "ip6_dst_hoplimit" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0xf4dfc5b1, "eth_mac_addr" },
	{ 0xe3fc549, "__nlmsg_put" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xe3747770, "inet_get_local_port_range" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x2c697d72, "__skb_checksum_complete" },
	{ 0x200b2041, "in6addr_any" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=udp_tunnel,ip6_udp_tunnel";


MODULE_INFO(srcversion, "07E8DCE6E51AF5F76F90571");

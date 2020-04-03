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
	{ 0x7f978e62, "icmpv6_send" },
	{ 0xa4e236e5, "xfrm6_tunnel_deregister" },
	{ 0xc484571a, "register_pernet_device" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xbcffa1a6, "dst_release" },
	{ 0xab88a9bb, "metadata_dst_alloc" },
	{ 0x8d334730, "skb_clone" },
	{ 0x3b152bd9, "dst_cache_set_ip6" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x94537182, "skb_set_owner_w" },
	{ 0xb07b10e1, "neigh_destroy" },
	{ 0x3a639ff7, "__icmp_send" },
	{ 0x91715312, "sprintf" },
	{ 0x5a7cc4b3, "skb_realloc_headroom" },
	{ 0x99f0359e, "skb_scrub_packet" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0xfef4b741, "ip6_redirect" },
	{ 0x315de896, "__pskb_pull_tail" },
	{ 0x76a15271, "__iptunnel_pull_header" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x5f754e5a, "memset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x7c32d0f0, "printk" },
	{ 0xc2744d2, "unregister_pernet_device" },
	{ 0x452ba683, "ipv6_ext_hdr" },
	{ 0xbeec26fb, "ns_capable" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x2ac79575, "free_netdev" },
	{ 0x80fd477, "register_netdev" },
	{ 0x68183b3b, "nla_put" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x39c61eef, "dst_cache_get" },
	{ 0x6ef02d63, "skb_push" },
	{ 0x95db2362, "gro_cells_receive" },
	{ 0x3fa44dc1, "dev_get_by_index_rcu" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x55c68dd, "skb_pull" },
	{ 0xec2404f1, "init_net" },
	{ 0x456e3acc, "rtnl_link_unregister" },
	{ 0x6c209eab, "__alloc_percpu_gfp" },
	{ 0x3b1fd29c, "ipv6_dev_get_saddr" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0xb1dc134e, "ip_route_input_noref" },
	{ 0x1eb26bad, "ipv6_chk_addr_and_flags" },
	{ 0xe9474bde, "dst_cache_init" },
	{ 0x78cb06b6, "ip6_route_output_flags" },
	{ 0x16589dfe, "make_kuid" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x4f685e1, "alloc_netdev_mqs" },
	{ 0x4ec9b719, "__get_hash_from_flowi6" },
	{ 0xbfba76ab, "eth_type_trans" },
	{ 0x7e3cdb4f, "ip6_update_pmtu" },
	{ 0x850b2923, "netdev_state_change" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xb19dba04, "iptunnel_handle_offloads" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x9265c8b, "unregister_netdevice_queue" },
	{ 0xe3ec5362, "ip_route_output_flow" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x2872c336, "gro_cells_init" },
	{ 0xe198f1d8, "__xfrm_policy_check" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0xb0c20f8f, "rt6_lookup" },
	{ 0x9d669763, "memcpy" },
	{ 0x6befa1c7, "ip6tun_encaps" },
	{ 0xd8d59a8a, "rtnl_link_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xc0e4977e, "ip6_local_out" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0xbe154a3e, "ip6_dst_hoplimit" },
	{ 0x6ec8f652, "xfrm6_tunnel_register" },
	{ 0xbbc03509, "xfrm_lookup" },
	{ 0x91b4b6d0, "ipv6_push_frag_opts" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tunnel6,ipv6";


MODULE_INFO(srcversion, "089B6082AD48BC0F77C8EF8");

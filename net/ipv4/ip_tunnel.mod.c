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
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0x29916aea, "iptun_encaps" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xbcffa1a6, "dst_release" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x426e0d58, "dst_cache_get_ip4" },
	{ 0xb07b10e1, "neigh_destroy" },
	{ 0x3a639ff7, "__icmp_send" },
	{ 0x99f0359e, "skb_scrub_packet" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5f754e5a, "memset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x7c32d0f0, "printk" },
	{ 0xbeec26fb, "ns_capable" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x2ac79575, "free_netdev" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xd31dbebf, "iptunnel_xmit" },
	{ 0x95db2362, "gro_cells_receive" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xec2404f1, "init_net" },
	{ 0x8b3ad3f2, "__dev_get_by_index" },
	{ 0x6c209eab, "__alloc_percpu_gfp" },
	{ 0xe9474bde, "dst_cache_init" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x4f685e1, "alloc_netdev_mqs" },
	{ 0xbfba76ab, "eth_type_trans" },
	{ 0x440200b7, "pskb_expand_head" },
	{ 0x850b2923, "netdev_state_change" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x9265c8b, "unregister_netdevice_queue" },
	{ 0xe3ec5362, "ip_route_output_flow" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x2872c336, "gro_cells_init" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0x9d669763, "memcpy" },
	{ 0x266a2e51, "dst_cache_set_ip4" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x6ba078f0, "dev_set_mtu" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "B1301B2ECE74926D925E974");

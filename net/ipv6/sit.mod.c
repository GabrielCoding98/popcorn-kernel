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
	{ 0x7d54146, "param_ops_bool" },
	{ 0x798ba50, "ip_tunnel_get_link_net" },
	{ 0x29b2899b, "ip_tunnel_get_iflink" },
	{ 0x7830b402, "ip_tunnel_get_stats64" },
	{ 0xd8d59a8a, "rtnl_link_register" },
	{ 0x1d70dfa8, "xfrm4_tunnel_register" },
	{ 0xc484571a, "register_pernet_device" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xc2744d2, "unregister_pernet_device" },
	{ 0x56e4790f, "xfrm4_tunnel_deregister" },
	{ 0x456e3acc, "rtnl_link_unregister" },
	{ 0x7f978e62, "icmpv6_send" },
	{ 0xb07b10e1, "neigh_destroy" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x315de896, "__pskb_pull_tail" },
	{ 0xd31dbebf, "iptunnel_xmit" },
	{ 0x29916aea, "iptun_encaps" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0x94537182, "skb_set_owner_w" },
	{ 0x5a7cc4b3, "skb_realloc_headroom" },
	{ 0xc0fc3168, "ipv6_chk_prefix" },
	{ 0x7c32d0f0, "printk" },
	{ 0x50604e96, "ipv6_chk_custom_prefix" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x61ac380c, "netif_rx" },
	{ 0x71c90087, "memcmp" },
	{ 0x9b5e925b, "ip_tunnel_xmit" },
	{ 0xb19dba04, "iptunnel_handle_offloads" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xc6cbbc89, "capable" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0xbeec26fb, "ns_capable" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x643e0ce5, "call_rcu_sched" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x80fd477, "register_netdev" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0xec2404f1, "init_net" },
	{ 0x8891730c, "ip_tunnel_encap_setup" },
	{ 0x2ac79575, "free_netdev" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x4f685e1, "alloc_netdev_mqs" },
	{ 0x85bf72bd, "register_netdevice" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xe198f1d8, "__xfrm_policy_check" },
	{ 0xb9ff31fb, "ip_tunnel_rcv" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0x76a15271, "__iptunnel_pull_header" },
	{ 0x65f4ed06, "ipv4_redirect" },
	{ 0x9c4911c4, "ip6_err_gen_icmpv6_unreach" },
	{ 0x57daa409, "ipv4_update_pmtu" },
	{ 0xe9474bde, "dst_cache_init" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x6c209eab, "__alloc_percpu_gfp" },
	{ 0xe914e41e, "strcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x9d669763, "memcpy" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x850b2923, "netdev_state_change" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x8b3ad3f2, "__dev_get_by_index" },
	{ 0xbcffa1a6, "dst_release" },
	{ 0xe3ec5362, "ip_route_output_flow" },
	{ 0x16589dfe, "make_kuid" },
	{ 0x5f754e5a, "memset" },
	{ 0x9265c8b, "unregister_netdevice_queue" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x68183b3b, "nla_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel,tunnel4,ipv6";


MODULE_INFO(srcversion, "95B604ECCC38898AF0A0432");

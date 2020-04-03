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
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc5b301c3, "unregister_pernet_subsys" },
	{ 0xd8d59a8a, "rtnl_link_register" },
	{ 0xd10120b, "register_pernet_subsys" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xf92e4913, "skb_copy_bits" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x23d42fa0, "inet_select_addr" },
	{ 0xe3ec5362, "ip_route_output_flow" },
	{ 0x55c68dd, "skb_pull" },
	{ 0xef70b5f6, "dev_queue_xmit_nit" },
	{ 0x6ef02d63, "skb_push" },
	{ 0x85bf72bd, "register_netdevice" },
	{ 0x42d9d86a, "netdev_master_upper_dev_get" },
	{ 0x724eabfd, "netdev_master_upper_dev_link" },
	{ 0x9265c8b, "unregister_netdevice_queue" },
	{ 0xdbcc9292, "netdev_lower_get_next" },
	{ 0xd8cc71a9, "netdev_upper_dev_unlink" },
	{ 0xc30abd6, "netdev_err" },
	{ 0x8c43e202, "dev_change_flags" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x912342a9, "ether_setup" },
	{ 0x5ea94c2c, "ip6_dst_alloc" },
	{ 0x3bc12d0a, "fib6_new_table" },
	{ 0x237a8a77, "rt_dst_alloc" },
	{ 0x9e13fc50, "fib_new_table" },
	{ 0x6c209eab, "__alloc_percpu_gfp" },
	{ 0x13d386, "nd_tbl" },
	{ 0x9d669763, "memcpy" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0x94537182, "skb_set_owner_w" },
	{ 0x5a7cc4b3, "skb_realloc_headroom" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x5f55907f, "dev_queue_xmit" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xfb11d131, "__neigh_create" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x5edb6ae1, "arp_tbl" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0xbcffa1a6, "dst_release" },
	{ 0x7e732c7a, "nf_hook_slow" },
	{ 0x315de896, "__pskb_pull_tail" },
	{ 0x422678a0, "nf_hooks_needed" },
	{ 0x78cb06b6, "ip6_route_output_flags" },
	{ 0x5f754e5a, "memset" },
	{ 0x61ac380c, "netif_rx" },
	{ 0xbfba76ab, "eth_type_trans" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xfbfc931d, "ip6_pol_route" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x201dd9da, "fib_nl_delrule" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0x6096cade, "fib_nl_newrule" },
	{ 0xe3fc549, "__nlmsg_put" },
	{ 0x2827ae6f, "__alloc_skb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x68183b3b, "nla_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipv6";


MODULE_INFO(srcversion, "27EC85F539A1CBB00E39CD7");

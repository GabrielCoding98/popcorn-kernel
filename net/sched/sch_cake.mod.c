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
	{ 0x11dfa6f0, "unregister_qdisc" },
	{ 0x1b505930, "register_qdisc" },
	{ 0x315de896, "__pskb_pull_tail" },
	{ 0xaf149172, "__skb_gso_segment" },
	{ 0x67dffe4e, "netif_skb_features" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0x440200b7, "pskb_expand_head" },
	{ 0x6b9e5ca7, "tcf_classify" },
	{ 0x71c90087, "memcmp" },
	{ 0x88288e85, "kvmalloc_node" },
	{ 0xfb147ea4, "tcf_block_get" },
	{ 0xd197c95, "qdisc_watchdog_init" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x11d3c350, "gnet_stats_copy_queue" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xf92e4913, "skb_copy_bits" },
	{ 0x5a79a097, "nf_ct_get_tuple_skb" },
	{ 0xebfae617, "flow_hash_from_keys" },
	{ 0xa979d8df, "__skb_flow_dissect" },
	{ 0xc2fb064b, "flow_keys_dissector" },
	{ 0x5f754e5a, "memset" },
	{ 0x617a6735, "qdisc_watchdog_schedule_ns" },
	{ 0xecf1c9d7, "qdisc_tree_reduce_backlog" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x90e775fc, "tcf_block_put" },
	{ 0xdb2b2f25, "qdisc_watchdog_cancel" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0x60bffe6d, "div64_u64" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xff71b834, "skb_trim" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xee76d1f5, "nla_put_64bit" },
	{ 0x68183b3b, "nla_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "2C6378687AF5D3358DD75F5");
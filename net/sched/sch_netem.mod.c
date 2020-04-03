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
	{ 0xd197c95, "qdisc_watchdog_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xa965ca81, "reciprocal_value" },
	{ 0x43dae11a, "nla_parse" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x5f754e5a, "memset" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0x65bb120f, "skb_checksum_help" },
	{ 0xaf149172, "__skb_gso_segment" },
	{ 0x67dffe4e, "netif_skb_features" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0x638ca6b2, "skb_copy" },
	{ 0x8d334730, "skb_clone" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x60bffe6d, "div64_u64" },
	{ 0xdf2c2742, "rb_last" },
	{ 0xe346b2b1, "skb_orphan_partial" },
	{ 0x617a6735, "qdisc_watchdog_schedule_ns" },
	{ 0x8a852571, "__qdisc_calculate_pkt_len" },
	{ 0x47f4067e, "kfree_skb_list" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xecf1c9d7, "qdisc_tree_reduce_backlog" },
	{ 0xe956d20b, "qdisc_reset" },
	{ 0x25400d49, "rtnl_kfree_skbs" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xca9360b5, "rb_next" },
	{ 0xece784c2, "rb_first" },
	{ 0xf381adf4, "qdisc_destroy" },
	{ 0xdb2b2f25, "qdisc_watchdog_cancel" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x88288e85, "kvmalloc_node" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xee76d1f5, "nla_put_64bit" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xff71b834, "skb_trim" },
	{ 0x68183b3b, "nla_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "9CA6258B389FA7AB94C2F2E");

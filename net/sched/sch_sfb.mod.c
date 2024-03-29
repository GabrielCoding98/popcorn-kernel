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
	{ 0x8a852571, "__qdisc_calculate_pkt_len" },
	{ 0x5d08422e, "skb_get_hash_perturb" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x70002fe8, "siphash_1u32" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0x6b9e5ca7, "tcf_classify" },
	{ 0xfb147ea4, "tcf_block_get" },
	{ 0xe956d20b, "qdisc_reset" },
	{ 0x90e775fc, "tcf_block_put" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x5f754e5a, "memset" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf381adf4, "qdisc_destroy" },
	{ 0xecf1c9d7, "qdisc_tree_reduce_backlog" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x1fc21110, "qdisc_hash_add" },
	{ 0x1f6c5e1, "noop_qdisc" },
	{ 0xbac34c43, "fifo_create_dflt" },
	{ 0xd76a3f1a, "pfifo_qdisc_ops" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xff71b834, "skb_trim" },
	{ 0x68183b3b, "nla_put" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xeb1176ef, "gnet_stats_copy_app" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "433A9D0C584317E147D67B5");

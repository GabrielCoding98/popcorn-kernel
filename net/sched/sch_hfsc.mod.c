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
	{ 0xb9a21d8e, "gen_new_estimator" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x2acfa402, "gen_replace_estimator" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x91a7b1da, "qdisc_class_hash_remove" },
	{ 0x8a852571, "__qdisc_calculate_pkt_len" },
	{ 0x6b9e5ca7, "tcf_classify" },
	{ 0xdf2c2742, "rb_last" },
	{ 0x617a6735, "qdisc_watchdog_schedule_ns" },
	{ 0xca9360b5, "rb_next" },
	{ 0xece784c2, "rb_first" },
	{ 0xecf1c9d7, "qdisc_tree_reduce_backlog" },
	{ 0xeb1176ef, "gnet_stats_copy_app" },
	{ 0x11d3c350, "gnet_stats_copy_queue" },
	{ 0x9849cf5, "gnet_stats_copy_rate_est" },
	{ 0xc749a4cd, "gnet_stats_copy_basic" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xd3a529ff, "qdisc_warn_nonwc" },
	{ 0x1f6c5e1, "noop_qdisc" },
	{ 0xa88a8eef, "qdisc_class_hash_grow" },
	{ 0xc4212ab9, "qdisc_class_hash_insert" },
	{ 0x1fc21110, "qdisc_hash_add" },
	{ 0x2b19cb25, "qdisc_create_dflt" },
	{ 0xd76a3f1a, "pfifo_qdisc_ops" },
	{ 0xfb147ea4, "tcf_block_get" },
	{ 0x117093be, "qdisc_class_hash_init" },
	{ 0xd197c95, "qdisc_watchdog_init" },
	{ 0xe956d20b, "qdisc_reset" },
	{ 0xdb2b2f25, "qdisc_watchdog_cancel" },
	{ 0xf53d4c26, "qdisc_class_hash_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0xded39a6b, "gen_kill_estimator" },
	{ 0xf381adf4, "qdisc_destroy" },
	{ 0x90e775fc, "tcf_block_put" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xff71b834, "skb_trim" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x68183b3b, "nla_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "3A1DB94CAADEA8BF3B1AF2C");

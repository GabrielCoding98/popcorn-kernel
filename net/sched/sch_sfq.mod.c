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
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x88288e85, "kvmalloc_node" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xa965ca81, "reciprocal_value" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xfb147ea4, "tcf_block_get" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x25400d49, "rtnl_kfree_skbs" },
	{ 0xeb1176ef, "gnet_stats_copy_app" },
	{ 0x11d3c350, "gnet_stats_copy_queue" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x6b9e5ca7, "tcf_classify" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xecf1c9d7, "qdisc_tree_reduce_backlog" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0x5d08422e, "skb_get_hash_perturb" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x37a0cba, "kfree" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x90e775fc, "tcf_block_put" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xff71b834, "skb_trim" },
	{ 0x68183b3b, "nla_put" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "D9315A7D2F723F1811BA6EE");
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
	{ 0xf5037a81, "kmem_cache_destroy" },
	{ 0x1b505930, "register_qdisc" },
	{ 0xaddc9a8a, "kmem_cache_create" },
	{ 0xd197c95, "qdisc_watchdog_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xecf1c9d7, "qdisc_tree_reduce_backlog" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x617a6735, "qdisc_watchdog_schedule_ns" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xdb2b2f25, "qdisc_watchdog_cancel" },
	{ 0x25400d49, "rtnl_kfree_skbs" },
	{ 0x1fe24529, "__skb_get_hash" },
	{ 0xaae6676e, "kmem_cache_alloc" },
	{ 0x9f1691c2, "kmem_cache_free" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xece784c2, "rb_first" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x88288e85, "kvmalloc_node" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x68183b3b, "nla_put" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xeb1176ef, "gnet_stats_copy_app" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "0FB4530FC7A79BC18829A7E");

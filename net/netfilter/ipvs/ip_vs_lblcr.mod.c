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
	{ 0x61c76b3a, "proc_dointvec_jiffies" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x324d33af, "unregister_ip_vs_scheduler" },
	{ 0xc5b301c3, "unregister_pernet_subsys" },
	{ 0x56e0917b, "register_ip_vs_scheduler" },
	{ 0xd10120b, "register_pernet_subsys" },
	{ 0xa00c7a0b, "ip_vs_scheduler_err" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xa8b136b2, "register_net_sysctl" },
	{ 0x98cc48c1, "init_user_ns" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xec2404f1, "init_net" },
	{ 0xb96a6616, "unregister_net_sysctl_table" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x643e0ce5, "call_rcu_sched" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_vs";


MODULE_INFO(srcversion, "7B995D74F413CB6B3686AEE");

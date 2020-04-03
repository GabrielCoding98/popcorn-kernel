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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x2e863ede, "pskb_trim_rcsum_slow" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x8d334730, "skb_clone" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xce90062e, "refcount_inc_not_zero_checked" },
	{ 0x315de896, "__pskb_pull_tail" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x6ef02d63, "skb_push" },
	{ 0x7386b24e, "dev_remove_pack" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x55c68dd, "skb_pull" },
	{ 0xec2404f1, "init_net" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xaef5f8c0, "dev_add_pack" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0x5f55907f, "dev_queue_xmit" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "BBA416A4F6B57733ABBCD07");

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
	{ 0x246ff350, "tcf_unregister_action" },
	{ 0xe33c9b5b, "tcf_register_action" },
	{ 0x315de896, "__pskb_pull_tail" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xff71b834, "skb_trim" },
	{ 0xee76d1f5, "nla_put_64bit" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x68183b3b, "nla_put" },
	{ 0x6afa5413, "tcf_idr_search" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x3710758d, "tcf_idr_create" },
	{ 0xbea93518, "tcf_idr_insert" },
	{ 0x929e49e7, "tcf_idr_cleanup" },
	{ 0xc3a85ee2, "__tcf_idr_release" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x70375fa4, "tcf_idr_check_alloc" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x34b5c167, "tcf_generic_walker" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x7918045b, "tcf_idrinfo_destroy" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "5391FEC1C237D839F2ACDC5");
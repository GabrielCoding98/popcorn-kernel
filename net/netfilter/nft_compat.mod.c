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
	{ 0xdb11a8f1, "nfnetlink_subsys_unregister" },
	{ 0xb0631932, "nft_unregister_expr" },
	{ 0x38cce196, "nfnetlink_subsys_register" },
	{ 0xfb51ac3f, "nft_register_expr" },
	{ 0xf9dcd1d2, "nla_reserve" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x9e6e325e, "netlink_unicast" },
	{ 0x7c32d0f0, "printk" },
	{ 0x402b8281, "__request_module" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0xff71b834, "skb_trim" },
	{ 0x68183b3b, "nla_put" },
	{ 0x97255bdf, "strlen" },
	{ 0xe3fc549, "__nlmsg_put" },
	{ 0x2827ae6f, "__alloc_skb" },
	{ 0xddf68fc6, "xt_find_revision" },
	{ 0xca0304ef, "try_module_get" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xb1b5a47a, "xt_check_match" },
	{ 0xe683b46f, "xt_request_find_match" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xd4e665a7, "xt_request_find_target" },
	{ 0xe8ef2980, "xt_check_target" },
	{ 0x9d669763, "memcpy" },
	{ 0x5f754e5a, "memset" },
	{ 0x43dae11a, "nla_parse" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x37a0cba, "kfree" },
	{ 0x77c59098, "module_put" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfnetlink,nf_tables,x_tables";


MODULE_INFO(srcversion, "5245A8232912ADA437B1D16");

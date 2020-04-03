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
	{ 0x974143ad, "xt_unregister_matches" },
	{ 0xc4bdfbd7, "xt_register_matches" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbcffa1a6, "dst_release" },
	{ 0xcd42f123, "nf_ipv6_ops" },
	{ 0x5f754e5a, "memset" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xbf78cc05, "inet_dev_addr_type" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x7c32d0f0, "printk" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables";


MODULE_INFO(srcversion, "BAF41E5C2472AF6E6031776");

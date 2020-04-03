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
	{ 0x15cf6f2b, "nft_fib_policy" },
	{ 0x1c0192d2, "nft_fib_validate" },
	{ 0x3d17bb1b, "nft_fib_dump" },
	{ 0x96ae3c02, "nft_fib_init" },
	{ 0xb0631932, "nft_unregister_expr" },
	{ 0xfb51ac3f, "nft_register_expr" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x74331d7a, "nft_fib6_eval" },
	{ 0xdc40a932, "nft_fib4_eval" },
	{ 0xc01103d1, "nft_fib4_eval_type" },
	{ 0x7140a721, "nft_fib6_eval_type" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nft_fib,nf_tables,nft_fib_ipv6,nft_fib_ipv4";


MODULE_INFO(srcversion, "3EE3F4A3A0E827E64A64F91");

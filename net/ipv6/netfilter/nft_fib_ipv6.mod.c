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
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xbcffa1a6, "dst_release" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xfb51ac3f, "nft_register_expr" },
	{ 0x5f754e5a, "memset" },
	{ 0x328a05f1, "strncpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x1c0192d2, "nft_fib_validate" },
	{ 0x1d830821, "nft_fib_store_result" },
	{ 0xb0631932, "nft_unregister_expr" },
	{ 0xcd42f123, "nf_ipv6_ops" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x5f07a328, "ip6_route_lookup" },
	{ 0x96ae3c02, "nft_fib_init" },
	{ 0x15cf6f2b, "nft_fib_policy" },
	{ 0x3d17bb1b, "nft_fib_dump" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf92e4913, "skb_copy_bits" },
	{ 0xd542439, "__ipv6_addr_type" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_tables,nft_fib,ipv6";


MODULE_INFO(srcversion, "FDEE9D8E85695335635824F");

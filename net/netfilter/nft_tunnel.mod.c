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
	{ 0xfd99e7d6, "nft_unregister_obj" },
	{ 0xb0631932, "nft_unregister_expr" },
	{ 0xa04d94a, "nft_register_obj" },
	{ 0xfb51ac3f, "nft_register_expr" },
	{ 0x9d669763, "memcpy" },
	{ 0xab88a9bb, "metadata_dst_alloc" },
	{ 0x5f754e5a, "memset" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x97c8f5e9, "nft_validate_register_store" },
	{ 0x1e6b75a3, "nft_parse_register" },
	{ 0x26844a56, "nft_dump_register" },
	{ 0x8e7e320, "metadata_dst_free" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x68183b3b, "nla_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xbcffa1a6, "dst_release" },
	{ 0x16305289, "warn_slowpath_null" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_tables";


MODULE_INFO(srcversion, "891698372D19864BB50B5E7");

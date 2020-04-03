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
	{ 0x1e6b75a3, "nft_parse_register" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa104dcb7, "nft_chain_validate_dependency" },
	{ 0x2f89e6c2, "nft_chain_validate_hooks" },
	{ 0x68183b3b, "nla_put" },
	{ 0x85430a76, "nft_validate_register_load" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd95e52f2, "nf_ct_netns_get" },
	{ 0x26844a56, "nft_dump_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_tables,nf_conntrack";


MODULE_INFO(srcversion, "943ACD3348A7D4213E1063D");
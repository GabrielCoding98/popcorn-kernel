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
	{ 0xe1f29c5a, "nf_flow_offload_ipv6_hook" },
	{ 0xe9ccaa8d, "nf_flow_table_free" },
	{ 0x3aa7082d, "nf_flow_table_init" },
	{ 0x68eeddc6, "nft_unregister_flowtable_type" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xe375fcfc, "nft_register_flowtable_type" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_flow_table,nf_tables";


MODULE_INFO(srcversion, "00878B34D79B57C52FCADE9");

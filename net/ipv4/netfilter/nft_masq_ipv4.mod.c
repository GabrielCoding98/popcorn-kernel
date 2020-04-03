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
	{ 0x19d2824b, "nft_masq_policy" },
	{ 0x8ea41ad1, "nft_masq_validate" },
	{ 0xc3341056, "nft_masq_dump" },
	{ 0x581d08e9, "nft_masq_init" },
	{ 0x3f5c468e, "nf_nat_masquerade_ipv4_unregister_notifier" },
	{ 0xb0631932, "nft_unregister_expr" },
	{ 0xa1be6f21, "nf_nat_masquerade_ipv4_register_notifier" },
	{ 0xfb51ac3f, "nft_register_expr" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6f028d6b, "nf_nat_masquerade_ipv4" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2d179c51, "nf_ct_netns_put" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nft_masq,nf_nat_ipv4,nf_tables,nf_conntrack";


MODULE_INFO(srcversion, "F2FBC525FD1082DD04A1745");
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
	{ 0x7ea0ac52, "nft_reject_policy" },
	{ 0x1b0d9cc8, "nft_reject_validate" },
	{ 0xb0631932, "nft_unregister_expr" },
	{ 0xfb51ac3f, "nft_register_expr" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x68183b3b, "nla_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe6869b6c, "nf_send_reset6" },
	{ 0xc2a35920, "nf_send_reset" },
	{ 0x7ff82eb1, "nf_send_unreach" },
	{ 0xe2c84666, "nft_reject_icmp_code" },
	{ 0x462465c4, "nf_send_unreach6" },
	{ 0x1de558c1, "nft_reject_icmpv6_code" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nft_reject,nf_tables,nf_reject_ipv6,nf_reject_ipv4";


MODULE_INFO(srcversion, "A4DC2FCCC6E72DF6A22B239");

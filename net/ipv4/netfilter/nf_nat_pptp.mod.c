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
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0x7eaa05bf, "nf_nat_pptp_hook_expectfn" },
	{ 0x593d5264, "nf_nat_pptp_hook_exp_gre" },
	{ 0x302fee07, "nf_nat_pptp_hook_inbound" },
	{ 0x387f9f06, "nf_nat_pptp_hook_outbound" },
	{ 0x636b12c8, "nf_nat_need_gre" },
	{ 0x9eeccd63, "__nf_nat_mangle_tcp_packet" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x92f432bc, "nf_nat_setup_info" },
	{ 0x39ef16b, "nf_ct_expect_put" },
	{ 0xcdfecd55, "nf_ct_unexpect_related" },
	{ 0x6aa1162e, "nf_ct_expect_find_get" },
	{ 0xabb7bcef, "nf_ct_nat_ext_add" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack_pptp,nf_nat_proto_gre,nf_nat,nf_conntrack";


MODULE_INFO(srcversion, "B028A7F19D962D57538A49F");

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
	{ 0xe67a5e11, "nf_ct_helper_expectfn_register" },
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0x6d37e23c, "nf_ct_helper_expectfn_unregister" },
	{ 0xd61920c, "nf_nat_sip_hooks" },
	{ 0xfa583d58, "ct_sip_parse_numerical_param" },
	{ 0x4cca8b0d, "ct_sip_parse_address_param" },
	{ 0x22bff1ce, "skb_make_writable" },
	{ 0xa8e0661d, "ct_sip_parse_request" },
	{ 0x2aa0e4fc, "strncasecmp" },
	{ 0x51688802, "ct_sip_parse_header_uri" },
	{ 0xd42c5c94, "nf_ct_seqadj_set" },
	{ 0xedbfaa0b, "nf_ct_helper_log" },
	{ 0xcdfecd55, "nf_ct_unexpect_related" },
	{ 0xd1a5e5cc, "nf_ct_expect_related_report" },
	{ 0x91715312, "sprintf" },
	{ 0x86b351e1, "ct_sip_get_header" },
	{ 0x71af1ad2, "ct_sip_get_sdp_header" },
	{ 0x9eeccd63, "__nf_nat_mangle_tcp_packet" },
	{ 0x5984e730, "nf_nat_mangle_udp_packet" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x4ea258d2, "nf_conntrack_expect_lock" },
	{ 0x92f432bc, "nf_nat_setup_info" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_conntrack_sip,nf_nat";


MODULE_INFO(srcversion, "5570C246B00253B68DD5B23");
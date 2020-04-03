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
	{ 0x6d37e23c, "nf_ct_helper_expectfn_unregister" },
	{ 0xe67a5e11, "nf_ct_helper_expectfn_register" },
	{ 0x77e2c2bc, "nat_q931_hook" },
	{ 0xff46a63e, "nat_callforwarding_hook" },
	{ 0x724ee165, "nat_h245_hook" },
	{ 0xd38b2ae6, "nat_t120_hook" },
	{ 0x4cba8cd7, "nat_rtp_rtcp_hook" },
	{ 0xc4f40c94, "set_ras_addr_hook" },
	{ 0xff18dc10, "set_sig_addr_hook" },
	{ 0x2b794790, "set_h225_addr_hook" },
	{ 0x458ff3a9, "set_h245_addr_hook" },
	{ 0x81bc78a6, "nf_nat_follow_master" },
	{ 0xcdfecd55, "nf_ct_unexpect_related" },
	{ 0xbea0c879, "get_h225_addr" },
	{ 0xd1a5e5cc, "nf_ct_expect_related_report" },
	{ 0x7c32d0f0, "printk" },
	{ 0xf92e4913, "skb_copy_bits" },
	{ 0x9eeccd63, "__nf_nat_mangle_tcp_packet" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x5984e730, "nf_nat_mangle_udp_packet" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x92f432bc, "nf_nat_setup_info" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_conntrack_h323,nf_nat";


MODULE_INFO(srcversion, "0BB3919E42B7A81C30B5040");

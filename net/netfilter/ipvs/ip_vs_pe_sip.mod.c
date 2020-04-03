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
	{ 0xcbcf498a, "unregister_ip_vs_pe" },
	{ 0xa687f230, "register_ip_vs_pe" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x315de896, "__pskb_pull_tail" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x86b351e1, "ct_sip_get_header" },
	{ 0xf92e4913, "skb_copy_bits" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x71c90087, "memcmp" },
	{ 0x9d669763, "memcpy" },
	{ 0x5f2abef7, "ip_vs_new_conn_out" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_vs,nf_conntrack_sip";


MODULE_INFO(srcversion, "0EA7479CB137BD173BC4A38");
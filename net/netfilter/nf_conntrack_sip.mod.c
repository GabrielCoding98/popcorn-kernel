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
	{ 0xcdfecd55, "nf_ct_unexpect_related" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0xa1cbfe9d, "__nf_ct_refresh_acct" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xfc3ca65b, "nf_ct_helper_init" },
	{ 0x62b93280, "nf_ct_expect_init" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xef26ea9, "nf_conntrack_helpers_register" },
	{ 0x315de896, "__pskb_pull_tail" },
	{ 0x5f754e5a, "memset" },
	{ 0x11089ac7, "_ctype" },
	{ 0x7c32d0f0, "printk" },
	{ 0x39ef16b, "nf_ct_expect_put" },
	{ 0x7d697e6a, "nf_ct_expect_alloc" },
	{ 0x84b183ae, "strncmp" },
	{ 0xd1a5e5cc, "nf_ct_expect_related_report" },
	{ 0x4ecda5cd, "nf_conntrack_helpers_unregister" },
	{ 0x25908acc, "nf_ct_remove_expect" },
	{ 0x1a4d0e9c, "__nf_ct_expect_find" },
	{ 0x4ea258d2, "nf_conntrack_expect_lock" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2aa0e4fc, "strncasecmp" },
	{ 0xac5fcec0, "in4_pton" },
	{ 0xedbfaa0b, "nf_ct_helper_log" },
	{ 0x3e872658, "param_array_ops" },
	{ 0x609bcd98, "in6_pton" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x1e0a0c24, "mod_timer_pending" },
	{ 0x8fdcf915, "param_ops_ushort" },
	{ 0x73a7a766, "param_ops_uint" },
	{ 0xf92e4913, "skb_copy_bits" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack";


MODULE_INFO(srcversion, "EC1592C2885A1AF7FFB99C4");
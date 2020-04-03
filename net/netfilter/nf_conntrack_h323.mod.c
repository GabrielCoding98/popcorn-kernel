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
	{ 0x93854acc, "nf_ct_remove_expectations" },
	{ 0xcdfecd55, "nf_ct_unexpect_related" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x43f31dcf, "nf_conntrack_helper_register" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xa1cbfe9d, "__nf_ct_refresh_acct" },
	{ 0x89a5102f, "nf_conntrack_helper_unregister" },
	{ 0xbcffa1a6, "dst_release" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x62b93280, "nf_ct_expect_init" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x55df9d73, "nf_ip_route" },
	{ 0xef26ea9, "nf_conntrack_helpers_register" },
	{ 0x5f754e5a, "memset" },
	{ 0x71c90087, "memcmp" },
	{ 0x39ef16b, "nf_ct_expect_put" },
	{ 0x7d697e6a, "nf_ct_expect_alloc" },
	{ 0xd1a5e5cc, "nf_ct_expect_related_report" },
	{ 0x4ecda5cd, "nf_conntrack_helpers_unregister" },
	{ 0x1a4d0e9c, "__nf_ct_expect_find" },
	{ 0x4ea258d2, "nf_conntrack_expect_lock" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0xedbfaa0b, "nf_ct_helper_log" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x1e0a0c24, "mod_timer_pending" },
	{ 0x73a7a766, "param_ops_uint" },
	{ 0xf92e4913, "skb_copy_bits" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack";


MODULE_INFO(srcversion, "972ABE8AF7AA404647CF777");
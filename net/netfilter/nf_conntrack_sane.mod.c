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
	{ 0x3e872658, "param_array_ops" },
	{ 0x8fdcf915, "param_ops_ushort" },
	{ 0x7c32d0f0, "printk" },
	{ 0xef26ea9, "nf_conntrack_helpers_register" },
	{ 0xfc3ca65b, "nf_ct_helper_init" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x4ecda5cd, "nf_conntrack_helpers_unregister" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x39ef16b, "nf_ct_expect_put" },
	{ 0xedbfaa0b, "nf_ct_helper_log" },
	{ 0xd1a5e5cc, "nf_ct_expect_related_report" },
	{ 0x62b93280, "nf_ct_expect_init" },
	{ 0x7d697e6a, "nf_ct_expect_alloc" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xf92e4913, "skb_copy_bits" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack";


MODULE_INFO(srcversion, "39F951A5FFD39E033CD9C46");

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
	{ 0x8e3afba1, "seq_read" },
	{ 0x6b248f3e, "seq_lseek" },
	{ 0xf499fdb2, "rcu_barrier_bh" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc5b301c3, "unregister_pernet_subsys" },
	{ 0x15e0a7a1, "xt_unregister_target" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x5d4fe550, "xt_register_target" },
	{ 0xd10120b, "register_pernet_subsys" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x67cebeb, "proc_mkdir" },
	{ 0x214fcd01, "nf_register_net_hook" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x7bec6a38, "seq_open" },
	{ 0x918ad050, "nf_unregister_net_hook" },
	{ 0xf92e4913, "skb_copy_bits" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x7c32d0f0, "printk" },
	{ 0xaa47d5fe, "proc_create_data" },
	{ 0x91715312, "sprintf" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xe914e41e, "strcpy" },
	{ 0xd95e52f2, "nf_ct_netns_get" },
	{ 0x71c90087, "memcmp" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x5a503b0b, "seq_putc" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0x2078bd0d, "seq_release" },
	{ 0x4e70062, "PDE_DATA" },
	{ 0x9d669763, "memcpy" },
	{ 0xce90062e, "refcount_inc_not_zero_checked" },
	{ 0x37a0cba, "kfree" },
	{ 0x9fcc0a84, "dev_get_by_name" },
	{ 0x2d179c51, "nf_ct_netns_put" },
	{ 0x7e927f92, "call_rcu_bh" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xe69a1920, "proc_remove" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe853171f, "refcount_dec_and_lock" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x21e424b9, "dev_mc_add" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x4d06cecb, "dev_mc_del" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,nf_conntrack";


MODULE_INFO(srcversion, "82B101949D5EC48B3672982");

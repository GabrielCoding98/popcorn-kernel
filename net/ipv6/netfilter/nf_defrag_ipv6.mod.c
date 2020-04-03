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
	{ 0x7f978e62, "icmpv6_send" },
	{ 0x9450a307, "inet_frag_kill" },
	{ 0x2e863ede, "pskb_trim_rcsum_slow" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb96a6616, "unregister_net_sysctl_table" },
	{ 0xa8f6c843, "ip_frag_ecn_table" },
	{ 0xbcffa1a6, "dst_release" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x97361ec, "inet_frag_find" },
	{ 0xe52efa41, "inet_frag_reasm_prepare" },
	{ 0x315de896, "__pskb_pull_tail" },
	{ 0xc5b301c3, "unregister_pernet_subsys" },
	{ 0x7c32d0f0, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x71c90087, "memcmp" },
	{ 0x54e6e263, "nf_unregister_net_hooks" },
	{ 0x452ba683, "ipv6_ext_hdr" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2f50cbf5, "proc_doulongvec_minmax" },
	{ 0x9d345ffe, "inet_frags_fini" },
	{ 0xd5d7cc83, "inet_frags_exit_net" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x3fa44dc1, "dev_get_by_index_rcu" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xec2404f1, "init_net" },
	{ 0x6bc1e893, "nf_register_net_hooks" },
	{ 0x5feca6c0, "inet_frag_reasm_finish" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0xaab3a70, "inet_frag_destroy" },
	{ 0xd10120b, "register_pernet_subsys" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x50f3d972, "rhashtable_init" },
	{ 0x37a0cba, "kfree" },
	{ 0xb0e9b3f, "inet_frag_pull_head" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf313fca5, "inet_frags_init" },
	{ 0x92ce3310, "inet_frag_queue_insert" },
	{ 0x99bb8806, "memmove" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xa8b136b2, "register_net_sysctl" },
	{ 0x61c76b3a, "proc_dointvec_jiffies" },
	{ 0xf92e4913, "skb_copy_bits" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "A4EAFBB74F71BDD02CD86A8");

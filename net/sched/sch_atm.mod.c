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
	{ 0x11dfa6f0, "unregister_qdisc" },
	{ 0x1b505930, "register_qdisc" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x2b19cb25, "qdisc_create_dflt" },
	{ 0xd76a3f1a, "pfifo_qdisc_ops" },
	{ 0xfb147ea4, "tcf_block_get" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x82a5d3cd, "sockfd_lookup" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xff71b834, "skb_trim" },
	{ 0x68183b3b, "nla_put" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x11d3c350, "gnet_stats_copy_queue" },
	{ 0xc749a4cd, "gnet_stats_copy_basic" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8a852571, "__qdisc_calculate_pkt_len" },
	{ 0x6b9e5ca7, "tcf_classify" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x7481b148, "refcount_add_checked" },
	{ 0x9d669763, "memcpy" },
	{ 0x6ef02d63, "skb_push" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0x5a7cc4b3, "skb_realloc_headroom" },
	{ 0x55c68dd, "skb_pull" },
	{ 0x1f6c5e1, "noop_qdisc" },
	{ 0xe956d20b, "qdisc_reset" },
	{ 0x7c32d0f0, "printk" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x37a0cba, "kfree" },
	{ 0x90745321, "fput" },
	{ 0x90e775fc, "tcf_block_put" },
	{ 0xf381adf4, "qdisc_destroy" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8E7DCBAD43FCCB2090F1E58");

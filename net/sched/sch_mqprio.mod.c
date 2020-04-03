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
	{ 0xbf241452, "netdev_set_tc_queue" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x9d669763, "memcpy" },
	{ 0x2b19cb25, "qdisc_create_dflt" },
	{ 0x96438f0, "default_qdisc_ops" },
	{ 0x2c925d66, "pfifo_fast_ops" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x3f7031d8, "dev_deactivate" },
	{ 0x3f55b876, "dev_activate" },
	{ 0x75d55122, "netdev_txq_to_tc" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x11d3c350, "gnet_stats_copy_queue" },
	{ 0xc749a4cd, "gnet_stats_copy_basic" },
	{ 0xbdbc3f6b, "netdev_set_num_tc" },
	{ 0x37a0cba, "kfree" },
	{ 0x1fc21110, "qdisc_hash_add" },
	{ 0xf381adf4, "qdisc_destroy" },
	{ 0xf8702e6e, "dev_graft_qdisc" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xff71b834, "skb_trim" },
	{ 0x68183b3b, "nla_put" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x10c3f57e, "__gnet_stats_copy_queue" },
	{ 0x7ff3b187, "__gnet_stats_copy_basic" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "CA66CD7E6BCDCACABD2A297");

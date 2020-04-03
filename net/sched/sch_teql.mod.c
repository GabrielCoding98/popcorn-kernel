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
	{ 0xb7700415, "param_ops_int" },
	{ 0x11dfa6f0, "unregister_qdisc" },
	{ 0x2ac79575, "free_netdev" },
	{ 0x8c42b265, "unregister_netdev" },
	{ 0x1b505930, "register_qdisc" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x80fd477, "register_netdev" },
	{ 0x4f685e1, "alloc_netdev_mqs" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xee2d0819, "__neigh_event_send" },
	{ 0x9d669763, "memcpy" },
	{ 0xb07b10e1, "neigh_destroy" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xfb11d131, "__neigh_create" },
	{ 0xa5216657, "neigh_lookup" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0xacb31ecf, "_raw_spin_trylock" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x1f6c5e1, "noop_qdisc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xe956d20b, "qdisc_reset" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x89f25045, "skb_queue_purge" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x8a7f62f2, "netif_tx_wake_queue" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "BE7E24DAE7A145F1F627986");

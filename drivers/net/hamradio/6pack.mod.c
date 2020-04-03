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
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0x1fc6f2c7, "tty_register_ldisc" },
	{ 0x61ac380c, "netif_rx" },
	{ 0x9d669763, "memcpy" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0xe69bfc72, "__netdev_alloc_skb" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x5752c42d, "tty_unthrottle" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x58200626, "ax25_ip_xmit" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x7c32d0f0, "printk" },
	{ 0x2ac79575, "free_netdev" },
	{ 0x80fd477, "register_netdev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x4f685e1, "alloc_netdev_mqs" },
	{ 0xc6cbbc89, "capable" },
	{ 0xf0ef52e8, "down" },
	{ 0x8c42b265, "unregister_netdev" },
	{ 0x37a0cba, "kfree" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x4d634803, "_raw_write_lock_irq" },
	{ 0x5f754e5a, "memset" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x1a35606, "tty_mode_ioctl" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x97255bdf, "strlen" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xd54cb7d2, "netif_schedule_queue" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x8a7f62f2, "netif_tx_wake_queue" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x581cde4e, "up" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x3b697738, "_raw_read_lock" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x88d555ed, "ax25_header_ops" },
	{ 0xaeb7451e, "ax25_defaddr" },
	{ 0xac93ae05, "ax25_bcast" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ax25";


MODULE_INFO(srcversion, "6E46EFB82D96D33B31F6FBD");
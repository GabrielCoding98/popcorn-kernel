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
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x1fc6f2c7, "tty_register_ldisc" },
	{ 0x2ac79575, "free_netdev" },
	{ 0x85bf72bd, "register_netdevice" },
	{ 0x215a8ec8, "slhc_init" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x24d273d1, "add_timer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x4f685e1, "alloc_netdev_mqs" },
	{ 0x91715312, "sprintf" },
	{ 0xf754d24b, "dev_close" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xc6cbbc89, "capable" },
	{ 0xe5bc9a53, "slhc_free" },
	{ 0x6c8f2de, "slhc_compress" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x9135dc84, "tty_chars_in_buffer" },
	{ 0xaba90337, "dev_trans_start" },
	{ 0x8a7f62f2, "netif_tx_wake_queue" },
	{ 0x2aa4824c, "tty_hangup" },
	{ 0x8c42b265, "unregister_netdev" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x92b57248, "flush_work" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x1a35606, "tty_mode_ioctl" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x97255bdf, "strlen" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7c32d0f0, "printk" },
	{ 0x85fbc931, "slhc_uncompress" },
	{ 0xd4e1b9fa, "netif_rx_ni" },
	{ 0x9d669763, "memcpy" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0xe69bfc72, "__netdev_alloc_skb" },
	{ 0xf102033e, "slhc_remember" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=slhc";


MODULE_INFO(srcversion, "EE95C52A616EF655E652F6B");

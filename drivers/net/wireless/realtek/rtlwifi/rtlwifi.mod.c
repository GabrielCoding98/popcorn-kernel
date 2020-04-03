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
	{ 0x2d3385d3, "system_wq" },
	{ 0x4a7ded88, "ieee80211_rx_irqsafe" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xe782b280, "cfg80211_unlink_bss" },
	{ 0x4c7a68b0, "debugfs_create_dir" },
	{ 0x226c9b6d, "single_open" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x491483ea, "seq_puts" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xcfa20ed8, "ieee80211_beacon_get_tim" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0x83fa3eef, "ieee80211_resume_disconnect" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa7ffef14, "__dev_kfree_skb_any" },
	{ 0x1ccc7c29, "rate_control_send_low" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x7f8f21e8, "freq_reg_info" },
	{ 0xa176f7d9, "debugfs_create_file" },
	{ 0xdd953e2e, "wiphy_rfkill_start_polling" },
	{ 0x98ce88a8, "debugfs_remove_recursive" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x8e3afba1, "seq_read" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x82da2b54, "skb_unlink" },
	{ 0xe69bfc72, "__netdev_alloc_skb" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xdc9819b, "cfg80211_get_bss" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x34908c14, "print_hex_dump_bytes" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x71c90087, "memcmp" },
	{ 0x4579a1f, "ieee80211_rate_control_register" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x216bda5e, "wiphy_apply_custom_regulatory" },
	{ 0x4c8673f5, "__dev_kfree_skb_irq" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x2c63826b, "simple_open" },
	{ 0x2fab74ee, "wiphy_rfkill_stop_polling" },
	{ 0x440531f7, "wiphy_to_ieee80211_hw" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x78c85e38, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0xaf27abd, "cfg80211_put_bss" },
	{ 0x12a38747, "usleep_range" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xda8c7c39, "wiphy_rfkill_set_hw_state" },
	{ 0x2aa6628, "ieee80211_tx_status_irqsafe" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0xf4dd5647, "ieee80211_find_sta" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x16317e74, "ieee80211_get_hdrlen_from_skb" },
	{ 0xd22c5c96, "ieee80211_rate_control_unregister" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x6b248f3e, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x7e4dd03b, "ieee80211_start_tx_ba_session" },
	{ 0xecb30410, "request_firmware" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xe6c12171, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0x2078bd0d, "seq_release" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0xf41872ce, "release_firmware" },
	{ 0x3f546e9d, "ieee80211_connection_loss" },
	{ 0x17047d20, "ieee80211_start_tx_ba_cb_irqsafe" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,cfg80211";


MODULE_INFO(srcversion, "612D2602B61B785DA5ABC3E");

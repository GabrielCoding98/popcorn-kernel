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
	{ 0xfb8949de, "netdev_info" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x43bbdb4a, "ieee80211_get_num_supported_channels" },
	{ 0x9b388444, "get_zeroed_page" },
	{ 0x9cb5d9a4, "wiphy_free" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x3601d60a, "cfg80211_connect_done" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x53f3a891, "generic_file_llseek" },
	{ 0x4c7a68b0, "debugfs_create_dir" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xc068440e, "__kfifo_alloc" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x5e5db0b1, "cfg80211_inform_bss_data" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x8a7d7e3c, "netif_carrier_on" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xcae566cc, "netif_carrier_off" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xe8663ae6, "ieee80211_channel_to_frequency" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa7ffef14, "__dev_kfree_skb_any" },
	{ 0x97106714, "memdup_user_nul" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xa176f7d9, "debugfs_create_file" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x880737be, "kthread_create_on_node" },
	{ 0xfd35a350, "netdev_alert" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x61ac380c, "netif_rx" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0xd4e1b9fa, "netif_rx_ni" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0x8a7f62f2, "netif_tx_wake_queue" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xdc9819b, "cfg80211_get_bss" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xdccedf20, "kthread_stop" },
	{ 0x71c90087, "memcmp" },
	{ 0x2ac79575, "free_netdev" },
	{ 0x81edcd5, "wiphy_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x80fd477, "register_netdev" },
	{ 0xcaa31bfb, "ieee80211_get_channel" },
	{ 0x25897c6, "debugfs_remove" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x6ef02d63, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x8cabecbb, "cfg80211_michael_mic_failure" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x55c68dd, "skb_pull" },
	{ 0x2c63826b, "simple_open" },
	{ 0xd2bacca5, "request_firmware_nowait" },
	{ 0x98e9ac18, "cfg80211_ibss_joined" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe6938daa, "ieee80211_bss_get_ie" },
	{ 0x4f92fbf6, "netif_device_attach" },
	{ 0xc2ecc0ce, "netif_device_detach" },
	{ 0xaf27abd, "cfg80211_put_bss" },
	{ 0x18193597, "wiphy_register" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x9121be2, "wiphy_new_nm" },
	{ 0x4f685e1, "alloc_netdev_mqs" },
	{ 0xbfba76ab, "eth_type_trans" },
	{ 0x1c2a847c, "wake_up_process" },
	{ 0x440200b7, "pskb_expand_head" },
	{ 0xc30abd6, "netdev_err" },
	{ 0x912342a9, "ether_setup" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x418d6c5d, "cfg80211_disconnected" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xa5d8c690, "eth_validate_addr" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x9294652f, "regulatory_hint" },
	{ 0x9d669763, "memcpy" },
	{ 0xecb30410, "request_firmware" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8c42b265, "unregister_netdev" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0xc6f1a572, "cfg80211_scan_done" },
	{ 0xf41872ce, "release_firmware" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cfg80211";


MODULE_INFO(srcversion, "69B8634E0333389940ABD89");

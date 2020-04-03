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
	{ 0x85bf72bd, "register_netdevice" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x1d85ba13, "skb_queue_head" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x7e0ec2f1, "cfg80211_cqm_rssi_notify" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x9b388444, "get_zeroed_page" },
	{ 0x9cb5d9a4, "wiphy_free" },
	{ 0x3601d60a, "cfg80211_connect_done" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x3247c87b, "cfg80211_find_vendor_ie" },
	{ 0x4c7a68b0, "debugfs_create_dir" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x1879fcbd, "bridge_tunnel_header" },
	{ 0xf3b46749, "cfg80211_radar_event" },
	{ 0x97255bdf, "strlen" },
	{ 0x124e1e49, "irq_of_parse_and_map" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x5e5db0b1, "cfg80211_inform_bss_data" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xf80791c7, "cfg80211_report_wowlan_wakeup" },
	{ 0xaf0fe58e, "cfg80211_chandef_create" },
	{ 0x8a7d7e3c, "netif_carrier_on" },
	{ 0x8d334730, "skb_clone" },
	{ 0x638ca6b2, "skb_copy" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xcae566cc, "netif_carrier_off" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x40e3d731, "cfg80211_rx_mgmt" },
	{ 0xe8663ae6, "ieee80211_channel_to_frequency" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa7ffef14, "__dev_kfree_skb_any" },
	{ 0x97106714, "memdup_user_nul" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xa176f7d9, "debugfs_create_file" },
	{ 0x4d4be347, "idr_for_each" },
	{ 0x91715312, "sprintf" },
	{ 0x5a7cc4b3, "skb_realloc_headroom" },
	{ 0x98ce88a8, "debugfs_remove_recursive" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x82da2b54, "skb_unlink" },
	{ 0xff71b834, "skb_trim" },
	{ 0x8b032221, "cfg80211_mgmt_tx_status" },
	{ 0x754f348a, "complete_all" },
	{ 0xe69bfc72, "__netdev_alloc_skb" },
	{ 0x61ac380c, "netif_rx" },
	{ 0x470e591b, "of_property_read_variable_u8_array" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0x43745509, "param_ops_charp" },
	{ 0x69b18f43, "rfc1042_header" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0xd4e1b9fa, "netif_rx_ni" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x752d5f5b, "kstrtobool" },
	{ 0x20c7f5cc, "idr_destroy" },
	{ 0x8a7f62f2, "netif_tx_wake_queue" },
	{ 0x7f3da685, "netif_tx_stop_all_queues" },
	{ 0x11089ac7, "_ctype" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xdc9819b, "cfg80211_get_bss" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe2b4ae43, "dev_coredumpv" },
	{ 0x7c32d0f0, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x71c90087, "memcmp" },
	{ 0xdd7a7b2b, "cfg80211_sched_scan_stopped_rtnl" },
	{ 0x2ac79575, "free_netdev" },
	{ 0x81edcd5, "wiphy_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xf1fafe32, "cfg80211_del_sta_sinfo" },
	{ 0xcaa31bfb, "ieee80211_get_channel" },
	{ 0x84b183ae, "strncmp" },
	{ 0x25897c6, "debugfs_remove" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x6ef02d63, "skb_push" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x8cabecbb, "cfg80211_michael_mic_failure" },
	{ 0x216bda5e, "wiphy_apply_custom_regulatory" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x5f3fd789, "idr_alloc" },
	{ 0x55c68dd, "skb_pull" },
	{ 0x2c63826b, "simple_open" },
	{ 0xd2bacca5, "request_firmware_nowait" },
	{ 0x98e9ac18, "cfg80211_ibss_joined" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x61275678, "idr_remove" },
	{ 0xe6938daa, "ieee80211_bss_get_ie" },
	{ 0x606ed824, "cfg80211_tdls_oper_request" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0xdaf574d2, "skb_queue_tail" },
	{ 0x4f92fbf6, "netif_device_attach" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x45ddbfb2, "cfg80211_ch_switch_notify" },
	{ 0xc2ecc0ce, "netif_device_detach" },
	{ 0xaf27abd, "cfg80211_put_bss" },
	{ 0x12a38747, "usleep_range" },
	{ 0x18193597, "wiphy_register" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2dccfeef, "cfg80211_classify8021d" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0x7292029d, "cfg80211_ready_on_channel" },
	{ 0x9121be2, "wiphy_new_nm" },
	{ 0x4f685e1, "alloc_netdev_mqs" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0xbfba76ab, "eth_type_trans" },
	{ 0x912342a9, "ether_setup" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x418d6c5d, "cfg80211_disconnected" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x87ac11d6, "kstrtobool_from_user" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x9265c8b, "unregister_netdevice_queue" },
	{ 0xc6de46cc, "cfg80211_new_sta" },
	{ 0xeda437a4, "cfg80211_chandef_valid" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xb9f3ed41, "cfg80211_find_ie_match" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xa5d8c690, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x9294652f, "regulatory_hint" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0x9d669763, "memcpy" },
	{ 0x3eb87ecc, "ieee80211_amsdu_to_8023s" },
	{ 0xf9e73082, "scnprintf" },
	{ 0xecb30410, "request_firmware" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x49970de8, "finish_wait" },
	{ 0x84014ab0, "skb_dequeue" },
	{ 0xc8728d35, "cfg80211_cac_event" },
	{ 0xdbdf6cc9, "cfg80211_remain_on_channel_expired" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0x99bb8806, "memmove" },
	{ 0x8fdcf915, "param_ops_ushort" },
	{ 0x12212969, "cfg80211_sched_scan_stopped" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc6f1a572, "cfg80211_scan_done" },
	{ 0xa99632a0, "cfg80211_chandef_dfs_required" },
	{ 0x96f49763, "of_property_read_variable_u32_array" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0x73a7a766, "param_ops_uint" },
	{ 0xce1cc28f, "devm_request_threaded_irq" },
	{ 0xf41872ce, "release_firmware" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe914e41e, "strcpy" },
	{ 0x7d1d210, "skb_complete_wifi_ack" },
	{ 0x613aa4f0, "cfg80211_sched_scan_results" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cfg80211";


MODULE_INFO(srcversion, "FE9BCB8954B53E5446D143D");
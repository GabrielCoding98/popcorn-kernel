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
	{ 0x72f91250, "sdio_writeb" },
	{ 0x3aafcf0f, "sdio_readb" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd6217d91, "brcmu_d11_attach" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x9cb5d9a4, "wiphy_free" },
	{ 0x7410aba2, "strreplace" },
	{ 0x3601d60a, "cfg80211_connect_done" },
	{ 0xc2451da0, "mem_map" },
	{ 0x349cba85, "strchr" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0x18e6f7e2, "device_release_driver" },
	{ 0x124e1e49, "irq_of_parse_and_map" },
	{ 0xea124bd1, "gcd" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x5e5db0b1, "cfg80211_inform_bss_data" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x1906648e, "brcmu_boardrev_str" },
	{ 0x3f498953, "send_sig" },
	{ 0xf5596d89, "cfg80211_get_p2p_attr" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x63394e74, "sdio_enable_func" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xf80791c7, "cfg80211_report_wowlan_wakeup" },
	{ 0x60ddd8ea, "sdio_claim_irq" },
	{ 0x445933c4, "sdio_retune_release" },
	{ 0x6e47cd81, "brcmu_pkt_buf_get_skb" },
	{ 0x8a7d7e3c, "netif_carrier_on" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0xcae566cc, "netif_carrier_off" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0x32d35025, "seq_write" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x40e3d731, "cfg80211_rx_mgmt" },
	{ 0xe8663ae6, "ieee80211_channel_to_frequency" },
	{ 0xfffa3100, "sg_next" },
	{ 0x4c2ae700, "strnstr" },
	{ 0x1cef7f79, "driver_for_each_device" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa7ffef14, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3447c539, "brcmu_pktq_pdeq_tail" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0xa4568e85, "of_device_is_compatible" },
	{ 0xac28796a, "__platform_driver_probe" },
	{ 0x999e8297, "vfree" },
	{ 0x7e7028af, "pm_runtime_allow" },
	{ 0xe2c00c42, "brcmu_pktq_penq" },
	{ 0xe11cf5a0, "cfg80211_unregister_wdev" },
	{ 0x7d3c7b2c, "brcmu_pktq_mdeq" },
	{ 0x4c4e24cb, "pm_runtime_forbid" },
	{ 0x91715312, "sprintf" },
	{ 0x880737be, "kthread_create_on_node" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x82da2b54, "skb_unlink" },
	{ 0xff71b834, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x8b032221, "cfg80211_mgmt_tx_status" },
	{ 0x8ae137ee, "param_ops_string" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xe69bfc72, "__netdev_alloc_skb" },
	{ 0x61ac380c, "netif_rx" },
	{ 0x315de896, "__pskb_pull_tail" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x2795d02a, "mmc_wait_for_req" },
	{ 0x383f0d29, "debugfs_create_u32" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xe5b1d659, "sdio_writel" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xd54c4094, "cfg80211_vendor_cmd_reply" },
	{ 0x63c4e545, "brcmu_pktq_pdeq_match" },
	{ 0x5f754e5a, "memset" },
	{ 0xd4e1b9fa, "netif_rx_ni" },
	{ 0x8a7f62f2, "netif_tx_wake_queue" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x7009370e, "usb_deregister" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe2b4ae43, "dev_coredumpv" },
	{ 0x7c32d0f0, "printk" },
	{ 0xdccedf20, "kthread_stop" },
	{ 0x71c90087, "memcmp" },
	{ 0xf36b611a, "of_find_property" },
	{ 0x71f07272, "wiphy_read_of_freq_limits" },
	{ 0x1caf4c2b, "wait_for_completion_interruptible" },
	{ 0x2ac79575, "free_netdev" },
	{ 0x81edcd5, "wiphy_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x328a05f1, "strncpy" },
	{ 0x80fd477, "register_netdev" },
	{ 0x68183b3b, "nla_put" },
	{ 0x6d04df9e, "mmc_set_data_timeout" },
	{ 0x25adad9, "sdio_readl" },
	{ 0xf1fafe32, "cfg80211_del_sta_sinfo" },
	{ 0xcaa31bfb, "ieee80211_get_channel" },
	{ 0x84b183ae, "strncmp" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x5ce92363, "brcmu_pktq_peek_tail" },
	{ 0x8e67e8c3, "brcmu_pktq_flush" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x567b9568, "sdio_retune_crc_enable" },
	{ 0x6ef02d63, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x8cabecbb, "cfg80211_michael_mic_failure" },
	{ 0x216bda5e, "wiphy_apply_custom_regulatory" },
	{ 0x9e4c5dd2, "irq_get_irq_data" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x55c68dd, "skb_pull" },
	{ 0xd2bacca5, "request_firmware_nowait" },
	{ 0x98e9ac18, "cfg80211_ibss_joined" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc8d67c1f, "brcmu_dbg_hex_dump" },
	{ 0x373966f6, "sdio_readsb" },
	{ 0x9f8430ce, "sdio_unregister_driver" },
	{ 0x1700a495, "sg_alloc_table" },
	{ 0x1a6cf8f4, "sdio_f0_writeb" },
	{ 0xc05a6c1, "cfg80211_check_combinations" },
	{ 0xdaf574d2, "skb_queue_tail" },
	{ 0x9f984513, "strrchr" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x97f34c9f, "cfg80211_roamed" },
	{ 0xaf27abd, "cfg80211_put_bss" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0x12a38747, "usleep_range" },
	{ 0x41c59f1, "__cfg80211_alloc_reply_skb" },
	{ 0x18193597, "wiphy_register" },
	{ 0x5106d8c9, "cfg80211_crit_proto_stopped" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x9b884ed0, "debugfs_create_devm_seqfile" },
	{ 0xef838b74, "sdio_release_irq" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2dccfeef, "cfg80211_classify8021d" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0x7292029d, "cfg80211_ready_on_channel" },
	{ 0x9121be2, "wiphy_new_nm" },
	{ 0x4f685e1, "alloc_netdev_mqs" },
	{ 0xbfba76ab, "eth_type_trans" },
	{ 0xd8076311, "sdio_f0_readb" },
	{ 0x1c2a847c, "wake_up_process" },
	{ 0x440200b7, "pskb_expand_head" },
	{ 0x912342a9, "ether_setup" },
	{ 0x418d6c5d, "cfg80211_disconnected" },
	{ 0xa17c0ccf, "brcmu_dotrev_str" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x9265c8b, "unregister_netdevice_queue" },
	{ 0xc6de46cc, "cfg80211_new_sta" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xf9ba89a9, "sdio_memcpy_toio" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xa8df257b, "brcmu_pktq_penq_head" },
	{ 0xdda74978, "brcmu_pktq_init" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0xecb30410, "request_firmware" },
	{ 0x49970de8, "finish_wait" },
	{ 0xdbdf6cc9, "cfg80211_remain_on_channel_expired" },
	{ 0x8c42b265, "unregister_netdev" },
	{ 0xba5f3cda, "sg_free_table" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xe6c12171, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x44ca1fb9, "sdio_register_driver" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0xafb0e368, "sdio_memcpy_fromio" },
	{ 0x12212969, "cfg80211_sched_scan_stopped" },
	{ 0x5ec0d393, "sdio_claim_host" },
	{ 0x9f2f2b7d, "platform_driver_unregister" },
	{ 0xf3e6ffe2, "firmware_request_nowarn" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc6f1a572, "cfg80211_scan_done" },
	{ 0xc43b5cb4, "sdio_retune_crc_disable" },
	{ 0x96f49763, "of_property_read_variable_u32_array" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xf0b08ccf, "brcmu_pkt_buf_free_skb" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0xc21c68b2, "sdio_set_block_size" },
	{ 0xf41872ce, "release_firmware" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xad6eb39b, "sdio_disable_func" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe2f4a4a9, "sdio_release_host" },
	{ 0x8dd02ac1, "sdio_retune_hold_now" },
	{ 0x613aa4f0, "cfg80211_sched_scan_results" },
	{ 0xa78e7b01, "brcmu_pktq_mlen" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=brcmutil,cfg80211";

MODULE_ALIAS("sdio:c*v02D0dA887*");
MODULE_ALIAS("sdio:c*v02D0d4324*");
MODULE_ALIAS("sdio:c*v02D0d4329*");
MODULE_ALIAS("sdio:c*v02D0d4330*");
MODULE_ALIAS("sdio:c*v02D0d4334*");
MODULE_ALIAS("sdio:c*v02D0dA94C*");
MODULE_ALIAS("sdio:c*v02D0dA94D*");
MODULE_ALIAS("sdio:c*v02D0dA962*");
MODULE_ALIAS("sdio:c*v02D0dA9A4*");
MODULE_ALIAS("sdio:c*v02D0d4335*");
MODULE_ALIAS("sdio:c*v02D0d4339*");
MODULE_ALIAS("sdio:c*v02D0dA9A6*");
MODULE_ALIAS("sdio:c*v02D0d4345*");
MODULE_ALIAS("sdio:c*v02D0dA9BF*");
MODULE_ALIAS("sdio:c*v02D0d4354*");
MODULE_ALIAS("sdio:c*v02D0d4356*");
MODULE_ALIAS("sdio:c*v02D0d4373*");
MODULE_ALIAS("usb:v0A5CpBD1Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5CpBD17d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5CpBD1Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5CpBD27d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4pBD29d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v043Ep3101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5Cp0BDCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p0BDCd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "16742487D4020EE4348726F");

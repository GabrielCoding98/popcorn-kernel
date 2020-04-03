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
	{ 0xa8a24ea9, "ieee80211_rx_napi" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd33ab616, "ath9k_hw_set_txq_props" },
	{ 0x29344e4, "ieee80211_csa_finish" },
	{ 0xce157df0, "ath9k_hw_init" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x830fe8d0, "ath9k_cmn_get_channel" },
	{ 0x8dac2d63, "ath9k_hw_deinit" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x18e6f7e2, "device_release_driver" },
	{ 0x9f325a07, "ath9k_hw_set_gpio" },
	{ 0x42fdf598, "ath9k_cmn_init_crypto" },
	{ 0x9317a143, "ieee80211_queue_work" },
	{ 0x15e2b904, "ath9k_cmn_process_rate" },
	{ 0xc2bcbbfc, "ieee80211_csa_is_complete" },
	{ 0xfe90c4a6, "_find_first_zero_bit_le" },
	{ 0x602014f6, "ath9k_hw_btcoex_enable" },
	{ 0xbb3d8c0e, "ath9k_hw_wait" },
	{ 0xb48aec7c, "ath9k_cmn_get_hw_crypto_keytype" },
	{ 0x14536105, "ath9k_hw_stopdmarecv" },
	{ 0x5c0e9f9b, "ath_key_delete" },
	{ 0x127e807c, "ath9k_cmn_update_txpow" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xcfa20ed8, "ieee80211_beacon_get_tim" },
	{ 0x4bc6ec82, "ath9k_hw_gpio_get" },
	{ 0x40266f55, "ath_regd_init" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xb066e7c3, "ieee80211_unregister_hw" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa7ffef14, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc4a1f3f9, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0x54cdb62f, "ath9k_hw_setrxfilter" },
	{ 0x9259d43f, "ath9k_hw_get_txq_props" },
	{ 0xfd904cca, "ath9k_hw_releasetxqueue" },
	{ 0xbc67800a, "ath9k_hw_reset_tsf" },
	{ 0xdd953e2e, "wiphy_rfkill_start_polling" },
	{ 0xca3ba753, "ath9k_cmn_reload_chainmask" },
	{ 0x91715312, "sprintf" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xceba98d5, "ath9k_cmn_init_channels_rates" },
	{ 0xff71b834, "skb_trim" },
	{ 0xa728d3bd, "ieee80211_stop_queues" },
	{ 0xbdd38aa9, "usb_unanchor_urb" },
	{ 0xbcd63380, "of_led_classdev_register" },
	{ 0x754f348a, "complete_all" },
	{ 0xe69bfc72, "__netdev_alloc_skb" },
	{ 0x6f4158e1, "ieee80211_tx_status" },
	{ 0x1715ee62, "ath_printk" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x167e248f, "ath9k_hw_setopmode" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0x35ec84, "ath9k_hw_disable" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x531d1ba4, "ath9k_hw_resettxqueue" },
	{ 0xdc4c86ae, "ath9k_hw_gettsf64" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x7009370e, "usb_deregister" },
	{ 0x9b82f731, "ieee80211_alloc_hw_nm" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xbe2a5223, "ath9k_hw_set_sta_beacon_timers" },
	{ 0xfb7331e1, "ath9k_hw_set_tsfadjust" },
	{ 0xd420b4c7, "ath9k_cmn_beacon_config_ap" },
	{ 0x380f1ede, "ieee80211_wake_queues" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x84a7fb5a, "ath9k_hw_btcoex_disable" },
	{ 0x5319c506, "ath9k_hw_getrxfilter" },
	{ 0x8c884e0, "ath9k_hw_ani_monitor" },
	{ 0xdf43078f, "ath_is_mybeacon" },
	{ 0x4760d907, "ath9k_cmn_beacon_config_adhoc" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0x31bad33f, "ath9k_cmn_process_rssi" },
	{ 0x84b183ae, "strncmp" },
	{ 0x4571aea8, "ath_is_world_regd" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x6ef02d63, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x55c68dd, "skb_pull" },
	{ 0x2fab74ee, "wiphy_rfkill_stop_polling" },
	{ 0xd2bacca5, "request_firmware_nowait" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x33e6d41f, "ath9k_hw_write_associd" },
	{ 0x4e1f44a7, "ieee80211_queue_delayed_work" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x8871da60, "ath_reg_notifier_apply" },
	{ 0x440531f7, "wiphy_to_ieee80211_hw" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x9c7b6dac, "ath9k_hw_init_btcoex_hw" },
	{ 0x78c85e38, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0xdaf574d2, "skb_queue_tail" },
	{ 0x7685db0f, "ath9k_hw_beaconq_setup" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0x554f317c, "ath9k_hw_name" },
	{ 0xb6a22a33, "ath9k_hw_init_global_settings" },
	{ 0x2827ae6f, "__alloc_skb" },
	{ 0xbac1993e, "usb_get_dev" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0x17e8d8b8, "ath9k_hw_settsf64" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xda8c7c39, "wiphy_rfkill_set_hw_state" },
	{ 0xf3f1124e, "usb_bulk_msg" },
	{ 0x1e3c5edc, "usb_put_dev" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0x3e0a120, "ath9k_hw_beaconinit" },
	{ 0xf4dd5647, "ieee80211_find_sta" },
	{ 0x810d003c, "ieee80211_get_buffered_bc" },
	{ 0x32d4ccec, "usb_interrupt_msg" },
	{ 0x44797b8, "ath9k_hw_gpio_free" },
	{ 0x2ad02a09, "ath9k_hw_btcoex_bt_stomp" },
	{ 0xf2abc37b, "ath9k_hw_setrxabort" },
	{ 0x7220a6af, "ath9k_cmn_beacon_config_sta" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x8cf36e65, "ath_hw_setbssidmask" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xfbd84893, "ath9k_cmn_rx_skb_postprocess" },
	{ 0x5921292a, "ath9k_hw_phy_disable" },
	{ 0x964b76d6, "__ieee80211_get_radio_led_name" },
	{ 0x16317e74, "ieee80211_get_hdrlen_from_skb" },
	{ 0x41d22dfb, "ath9k_hw_setpower" },
	{ 0xb6b87306, "__ieee80211_create_tpt_led_trigger" },
	{ 0xaeb5647e, "ieee80211_register_hw" },
	{ 0xf999f91b, "led_classdev_unregister" },
	{ 0x98b07142, "ath9k_hw_btcoex_set_weight" },
	{ 0x37a0cba, "kfree" },
	{ 0x9294652f, "regulatory_hint" },
	{ 0x9d669763, "memcpy" },
	{ 0x9db1de71, "ath9k_hw_setmcastfilter" },
	{ 0x7e4dd03b, "ieee80211_start_tx_ba_session" },
	{ 0xcfc90dfd, "ath9k_hw_gpio_request_out" },
	{ 0x690f81e8, "ath9k_hw_startpcureceive" },
	{ 0x62b18f0a, "ath9k_hw_setuptxqueue" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0xecb30410, "request_firmware" },
	{ 0xf08d562f, "ath9k_hw_reset" },
	{ 0xde5033e, "ieee80211_free_hw" },
	{ 0x1e165db4, "ath9k_cmn_rx_accept" },
	{ 0x84014ab0, "skb_dequeue" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x4a02305a, "usb_ifnum_to_if" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xe6c12171, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x99bb8806, "memmove" },
	{ 0xca4abbcc, "ath9k_hw_btcoex_init_3wire" },
	{ 0x7a87fe77, "ath_key_config" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0x73a7a766, "param_ops_uint" },
	{ 0x9e0b3c82, "ath9k_hw_reset_calvalid" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0xf41872ce, "release_firmware" },
	{ 0x17047d20, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0xd3c2ecf6, "usb_anchor_urb" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,ath9k_hw,ath9k_common,ath,cfg80211";

MODULE_ALIAS("usb:v0CF3p9271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9030d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p9271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3327d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3328d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3346d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3348d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3349d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3350d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp4605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v040Dp3801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8403d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p209Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1EDAp2315d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApA704d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p017Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp3904d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0930p0A08d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p20FFd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "010103E069861375FE18BCA");

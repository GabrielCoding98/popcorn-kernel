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
	{ 0xecd43556, "mt76x2_init_device" },
	{ 0x6af53f57, "mt76x2_queue_rx_skb" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb713e761, "mt76u_mcu_msg_alloc" },
	{ 0x19713aeb, "mt76x2_phy_set_txpower" },
	{ 0x7fcad851, "mt76x2_phy_set_txpower_regs" },
	{ 0x469dd5a8, "mt76x2_read_rx_gain" },
	{ 0xc6bca90e, "mt76u_mcu_init_rx" },
	{ 0x4feb3248, "__mt76_poll" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x5c02bf76, "mt76x2_mac_load_tx_status" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xb7f2ec27, "mt76x2_get_power_info" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x4831021e, "mt76x2_phy_set_band" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0x37493226, "mt76u_buf_free" },
	{ 0x78b781b2, "mt76u_vendor_request" },
	{ 0xb066e7c3, "ieee80211_unregister_hw" },
	{ 0x3ba19474, "mt76x2_phy_get_min_avg_rssi" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x514efff5, "mt76u_alloc_queues" },
	{ 0x8627b17b, "mt76_txq_schedule_all" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xa597ebc2, "mt76x2_sta_remove" },
	{ 0x662938e4, "mt76u_submit_rx_buffers" },
	{ 0xa728d3bd, "ieee80211_stop_queues" },
	{ 0xd4085496, "mt76x2_txq_init" },
	{ 0xdbc3104b, "mt76x2_send_tx_status" },
	{ 0x2f775be9, "mt76x2_eeprom_parse_hw_cap" },
	{ 0xdb517309, "mt76x2_tx_complete" },
	{ 0x9085ef56, "mt76x2_configure_filter" },
	{ 0x9c29b9e1, "mt76u_stop_queues" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0xeb3c2044, "mt76u_mcu_fw_reset" },
	{ 0xde9cd73d, "mt76u_init" },
	{ 0xeb92215, "mt76u_mcu_complete_urb" },
	{ 0x6562e534, "mt76x2_init_txpower" },
	{ 0x7b065e12, "mt76x2_phy_set_bw" },
	{ 0x7009370e, "usb_deregister" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x380f1ede, "ieee80211_wake_queues" },
	{ 0xad799d53, "__mt76_poll_msec" },
	{ 0x987ac1d7, "mt76x2_tx" },
	{ 0x78cdbf00, "mt76_set_channel" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x6ef02d63, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x9f832e3b, "mt76x2_set_key" },
	{ 0x301932a3, "mt76x2_ext_pa_enabled" },
	{ 0x410af5a6, "mt76u_skb_dma_info" },
	{ 0xfa739074, "mt76_register_device" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x6d78ba77, "mt76x2_rates" },
	{ 0x6912d280, "mt76x2_insert_hdr_pad" },
	{ 0x55c68dd, "skb_pull" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x4e1f44a7, "ieee80211_queue_delayed_work" },
	{ 0x2e6c3a32, "mt76u_queues_deinit" },
	{ 0x10e8548b, "mt76x2_conf_tx" },
	{ 0x4136f274, "mt76x2_init_debugfs" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x32c6a1e9, "mt76x2_sta_add" },
	{ 0x9c913f38, "mt76x2_mac_write_txwi" },
	{ 0xbac1993e, "usb_get_dev" },
	{ 0x12a38747, "usleep_range" },
	{ 0x8fe048c7, "mt76u_submit_buf" },
	{ 0xf505a080, "mt76x2_configure_tx_delay" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x81fafab5, "usb_reset_device" },
	{ 0x1e3c5edc, "usb_put_dev" },
	{ 0xc8fef690, "mt76x2_mac_stop" },
	{ 0x8c2eecf3, "mt76x2_remove_interface" },
	{ 0x440200b7, "pskb_expand_head" },
	{ 0x20acc8, "mt76_alloc_device" },
	{ 0xa595c8db, "mt76u_stop_stat_wk" },
	{ 0x16317e74, "ieee80211_get_hdrlen_from_skb" },
	{ 0x8e39d2f9, "mt76x2_apply_gain_adj" },
	{ 0x1d2f1d2e, "mt76_wake_tx_queue" },
	{ 0x42581a79, "mt76x2_reset_wlan" },
	{ 0x364761c1, "mt76_write_mac_initvals" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0xecb30410, "request_firmware" },
	{ 0xa90d3ca, "mt76u_mcu_send_msg" },
	{ 0xde5033e, "ieee80211_free_hw" },
	{ 0x417b8859, "mt76x2_sta_rate_tbl_update" },
	{ 0x217fe021, "mt76u_mcu_fw_send_data" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x99bb8806, "memmove" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x25619c2e, "mt76x2_ampdu_action" },
	{ 0xf41872ce, "release_firmware" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mt76x2-common,mt76-usb,mt76,mac80211,cfg80211";

MODULE_ALIAS("usb:v0B05p1833d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17EBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p180Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7612d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8503d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pB711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9053d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep02E6d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "BCBB07352E0D8C7724EE162");

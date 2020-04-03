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
	{ 0x9dfda8d4, "rtl_cam_delete_one_entry" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xcd55ad3a, "rtl_fw_cb" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xdeddacb1, "rtl_cam_get_free_entry" },
	{ 0x71047ac9, "rtl92c_phy_set_rfpath_switch" },
	{ 0x31022a50, "rtl_usb_disconnect" },
	{ 0xa5b08328, "_rtl92c_phy_fw_rf_serial_read" },
	{ 0xb7700415, "param_ops_int" },
	{ 0xce35464c, "rtl92c_phy_set_txpower_level" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x1e67e884, "rtl92c_set_fw_rsvdpagepkt" },
	{ 0x9c67f2bc, "rtl92c_dm_check_txpower_tracking" },
	{ 0x29939e6c, "rtl_ps_disable_nic" },
	{ 0xdeb96485, "rtl92c_dm_watchdog" },
	{ 0x8ed04f65, "_rtl92c_phy_init_bb_rf_register_definition" },
	{ 0x94df02fa, "_rtl92c_phy_rf_serial_write" },
	{ 0x44f1350f, "rtl_get_tcb_desc" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xa842d18, "_rtl92c_phy_rf_serial_read" },
	{ 0xd9e47db0, "rtl92c_phy_set_bw_mode" },
	{ 0x455f47ad, "rtl92c_phy_lc_calibrate" },
	{ 0x2327d91c, "_rtl92c_phy_calculate_bit_shift" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xdacbe34a, "rtl_cam_add_one_entry" },
	{ 0x999e8297, "vfree" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x30227dc, "rtl_phy_scan_operation_backup" },
	{ 0x1cb0598, "rtl92c_dm_init_edca_turbo" },
	{ 0xa0b5779c, "rtl92c_phy_iq_calibrate" },
	{ 0xd95da741, "rtl92c_dm_init" },
	{ 0xbf762325, "rtl_usb_probe" },
	{ 0xccfae988, "_rtl_dbg_trace" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xa66b308d, "rtl92c_phy_set_bb_reg" },
	{ 0x5f754e5a, "memset" },
	{ 0x3fd756a1, "rtl_ps_enable_nic" },
	{ 0xa091e4b9, "rtl_get_hwinfo" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x7009370e, "usb_deregister" },
	{ 0x7c32d0f0, "printk" },
	{ 0x495d7280, "rtl92c_dm_rf_saving" },
	{ 0x559464bb, "rtl92c_set_fw_pwrmode_cmd" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x1179cab3, "dm_writepowerindex" },
	{ 0x6ef02d63, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x4caf4829, "_rtl92c_phy_fw_rf_serial_write" },
	{ 0x5f47ebb9, "_rtl_dbg_print_data" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x55c68dd, "skb_pull" },
	{ 0x31abe567, "_rtl92c_phy_set_rf_sleep" },
	{ 0xd2bacca5, "request_firmware_nowait" },
	{ 0x682b8b77, "rtlwifi_rate_mapping" },
	{ 0x7db21133, "rtl92c_set_fw_joinbss_report_cmd" },
	{ 0xb5c86c83, "rtl92c_download_fw" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x335dacd2, "rtl_rfreg_delay" },
	{ 0xf9c9568f, "rtl92c_phy_set_io_cmd" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf4dd5647, "ieee80211_find_sta" },
	{ 0xaf08adec, "_rtl_dbg_print" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x13e7c7ff, "rtl_cam_mark_invalid" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xe667ef01, "rtl92c_phy_rf_config" },
	{ 0x37a0cba, "kfree" },
	{ 0x510f6b01, "rtl_cam_del_entry" },
	{ 0x67644848, "rtl_cam_empty_entry" },
	{ 0x530d5dcb, "rtl92ce_phy_set_rf_on" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0x272a48ec, "rtl92c_phy_query_bb_reg" },
	{ 0x3d59e249, "_rtl92c_store_pwrIndex_diffrate_offset" },
	{ 0x84014ab0, "skb_dequeue" },
	{ 0xe4dfc6db, "rtl_cam_reset_all_entry" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0xa6acb3ac, "rtl_process_phyinfo" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x43403cdf, "dm_restorepowerindex" },
	{ 0x27ab2bc4, "efuse_read_1byte" },
	{ 0xbe555a5f, "_rtl92c_phy_bb8192c_config_parafile" },
	{ 0x491c3951, "rtl92c_fill_h2c_cmd" },
	{ 0x13aa7afd, "rtl92c_phy_sw_chnl" },
	{ 0x1b945315, "rtl_addr_delay" },
	{ 0xfc0ff41d, "param_ops_ullong" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,rtlwifi,rtl8192c-common,rtl_usb";

MODULE_ALIAS("usb:v0BDAp8191d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp018Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8170d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8176d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8177d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp818Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp819Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8754d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8178d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp11F2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE033d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8188d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8189d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9043d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17BAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp5088d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0052d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p005Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0070d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0077d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9071d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4856p0091d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v103Cp1629d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3357d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3308d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p4902d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB2Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB2Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pED17d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p648Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3358d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3359d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4855p0090d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4855p0091d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9846p9041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp317Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFFAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFFBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFFCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p1201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp2102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp2103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p341Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8178d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846pF001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17ABd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8186d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0061d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3307d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3309d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p330Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p330Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB2Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p624Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7822d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "FBA296B9A6B53204ADB174F");

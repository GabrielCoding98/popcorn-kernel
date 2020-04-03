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
	{ 0x7d54146, "param_ops_bool" },
	{ 0x7009370e, "usb_deregister" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0xada294a0, "usb_enable_autosuspend" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xd164c95d, "btintel_set_diag" },
	{ 0x7e61b16e, "btintel_hw_error" },
	{ 0x3071db2d, "btintel_set_bdaddr" },
	{ 0xe48c06c, "btintel_set_diag_mfg" },
	{ 0x48f396dc, "btbcm_setup_apple" },
	{ 0x4a02305a, "usb_ifnum_to_if" },
	{ 0x6436342d, "btbcm_set_bdaddr" },
	{ 0xb6d80989, "btbcm_setup_patchram" },
	{ 0xd916b2c8, "of_property_read_variable_u16_array" },
	{ 0x9f1ccf92, "hci_register_dev" },
	{ 0xd4c365b5, "usb_match_id" },
	{ 0x65354236, "usb_driver_claim_interface" },
	{ 0xf1f56230, "btrtl_shutdown_realtek" },
	{ 0x6cf2bf15, "btrtl_setup_realtek" },
	{ 0xce1cc28f, "devm_request_threaded_irq" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x49086c51, "of_irq_get_byname" },
	{ 0x5920f98d, "of_match_device" },
	{ 0x79d2bb57, "hci_alloc_dev" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5f754e5a, "memset" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x4071b517, "out_of_line_wait_on_bit_timeout" },
	{ 0x44bae227, "bit_wait_timeout" },
	{ 0xdd052a00, "btintel_set_event_mask" },
	{ 0x16df87bb, "btintel_load_ddc_config" },
	{ 0x17ea13b2, "btintel_send_intel_reset" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x81f081ee, "btintel_download_firmware" },
	{ 0x3d8a7f00, "btintel_read_boot_params" },
	{ 0xd434c423, "btintel_version_info" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x40b1b220, "hci_recv_diag" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xb6412d2c, "usb_set_interface" },
	{ 0x7a9a1802, "usb_autopm_put_interface" },
	{ 0xb53dfafc, "usb_autopm_get_interface" },
	{ 0x95e190b8, "btintel_exit_mfg" },
	{ 0xf41872ce, "release_firmware" },
	{ 0x8abdf804, "btintel_check_bdaddr" },
	{ 0xe9db6f27, "btintel_set_event_mask_mfg" },
	{ 0x71c90087, "memcmp" },
	{ 0xb0a6fee8, "__hci_cmd_sync_ev" },
	{ 0xf04eae21, "btintel_enter_mfg" },
	{ 0xecb30410, "request_firmware" },
	{ 0xb81960ca, "snprintf" },
	{ 0xd7442057, "bt_info" },
	{ 0xe42c9d5f, "btintel_read_version" },
	{ 0xf3f1124e, "usb_bulk_msg" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf01577a8, "__hci_cmd_sync" },
	{ 0xbc034315, "usb_driver_release_interface" },
	{ 0x3170fae0, "hci_free_dev" },
	{ 0x8da2fb8a, "hci_unregister_dev" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfaba248a, "usb_scuttle_anchored_urbs" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x9d87bf00, "usb_get_from_anchor" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x37a0cba, "kfree" },
	{ 0x83bf7eb3, "hci_recv_frame" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0x2827ae6f, "__alloc_skb" },
	{ 0x9d669763, "memcpy" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x47022514, "bt_err" },
	{ 0xbdd38aa9, "usb_unanchor_urb" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xd3c2ecf6, "usb_anchor_urb" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=btintel,btbcm,bluetooth,btrtl";

MODULE_ALIAS("of:N*T*Cusb1286,204e");
MODULE_ALIAS("of:N*T*Cusb1286,204eC*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp01ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp04ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip01in*");
MODULE_ALIAS("usb:v05ACp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0E8Dp763Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5Cp21E1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8215d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8218d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp3800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BFp030Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDBp1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C10p0000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v413Cp8197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19FFp0239d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v105Bp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0BB4p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0489p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v04CAp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0A5Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0B05p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v050Dp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v13D3p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v8087p0A5Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F1248BD0A9030CBDB832F7F");

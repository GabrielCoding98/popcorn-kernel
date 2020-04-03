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
	{ 0x7009370e, "usb_deregister" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0x514fa521, "sdev_prefix_printk" },
	{ 0x195ff614, "usb_unlink_urb" },
	{ 0x1bc3edc2, "usb_stor_sense_invalidCDB" },
	{ 0x48f2426a, "scsi_cmd_get_serial" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9d669763, "memcpy" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xbdd38aa9, "usb_unanchor_urb" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0xd3c2ecf6, "usb_anchor_urb" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3d4b2d8, "usb_lock_device_for_reset" },
	{ 0x927ac20a, "scsi_remove_host" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xbd101f33, "blk_queue_max_hw_sectors" },
	{ 0xf4cf4cba, "blk_queue_update_dma_alignment" },
	{ 0x4012a125, "scsi_scan_host" },
	{ 0xb56f9bfa, "scsi_add_host_with_dma" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x4b79a308, "scsi_host_put" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5f754e5a, "memset" },
	{ 0xf534c95f, "scsi_host_alloc" },
	{ 0xe5bec9f7, "usb_stor_adjust_quirks" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0x9f975e5d, "usb_get_urb" },
	{ 0x1275fcee, "scsi_change_queue_depth" },
	{ 0x9a4b0ec4, "scsi_is_host_device" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0xa454a909, "scsi_print_command" },
	{ 0x5026b905, "scmd_printk" },
	{ 0xa111e4dd, "scsi_block_requests" },
	{ 0x3c72724e, "usb_wait_anchor_empty_timeout" },
	{ 0x92b57248, "flush_work" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x812d3483, "dev_printk" },
	{ 0x805c1c81, "scsi_unblock_requests" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xcaf7c837, "scsi_report_bus_reset" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x564298d3, "usb_alloc_streams" },
	{ 0x81fafab5, "usb_reset_device" },
	{ 0xb6412d2c, "usb_set_interface" },
	{ 0x15af7f4, "system_state" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1325957e, "usb_free_streams" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0984p0301d0128dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2p331Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13FDp3940d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp0539d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp0567d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp0578d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2109p0711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2537p1068d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v357Dp7788d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4971p1012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4971p8017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4971p8024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc06ip50in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc06ip62in*");

MODULE_INFO(srcversion, "DF7455224D32CCD700B565D");

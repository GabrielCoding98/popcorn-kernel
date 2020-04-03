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
	{ 0x3e872658, "param_array_ops" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0x43745509, "param_ops_charp" },
	{ 0x73a7a766, "param_ops_uint" },
	{ 0x7009370e, "usb_deregister" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0xd2bacca5, "request_firmware_nowait" },
	{ 0x1c2a847c, "wake_up_process" },
	{ 0xf2639edc, "usbatm_usb_probe" },
	{ 0x81fafab5, "usb_reset_device" },
	{ 0xf3f1124e, "usb_bulk_msg" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x84b183ae, "strncmp" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0xaf5025be, "kernel_param_unlock" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xc530dd27, "kernel_param_lock" },
	{ 0x6d87b69, "crc32_be" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xecb30410, "request_firmware" },
	{ 0xb6412d2c, "usb_set_interface" },
	{ 0x880737be, "kthread_create_on_node" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xa7b1f769, "sysfs_create_group" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x24868151, "freezing_slow_path" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x5f754e5a, "memset" },
	{ 0x90f3558c, "atm_dev_signal_change" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x65354236, "usb_driver_claim_interface" },
	{ 0x4a02305a, "usb_ifnum_to_if" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xf41872ce, "release_firmware" },
	{ 0x92b57248, "flush_work" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0xdccedf20, "kthread_stop" },
	{ 0x5f791ed1, "sysfs_remove_group" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x91715312, "sprintf" },
	{ 0xb81960ca, "snprintf" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0x1a83cf9e, "usb_string" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x2178c2c8, "usbatm_usb_disconnect" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbatm,atm";

MODULE_ALIAS("usb:v1110p9001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p900Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9032d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9031d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2111d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2131d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2130d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2121d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2120d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05CCp3351d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05CCp3350d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05CCp3352d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05CCp3353d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05CCp3362d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05CCp3363d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00F2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00F1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00FAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00F9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00F6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00F5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00F8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00F7d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "9CDFA3C970E1744F37EC8EE");

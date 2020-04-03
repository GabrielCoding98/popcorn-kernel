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
	{ 0x92b57248, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x402b8281, "__request_module" },
	{ 0x37788505, "device_remove_file" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x4be5c646, "dvb_dmx_init" },
	{ 0x6e63a909, "dvb_unregister_adapter" },
	{ 0x97255bdf, "strlen" },
	{ 0x8e34d884, "v4l2_i2c_new_subdev" },
	{ 0xdbf0296, "tveeprom_hauppauge_analog" },
	{ 0x56eda186, "dvb_register_frontend" },
	{ 0x913052e9, "v4l2_device_unregister" },
	{ 0x84239571, "i2c_transfer" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x727f0c6, "dvb_unregister_frontend" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x12bae986, "__video_register_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xdaff62f9, "cx2341x_fill_defaults" },
	{ 0x195ff614, "usb_unlink_urb" },
	{ 0x5f791ed1, "sysfs_remove_group" },
	{ 0xc889377e, "cx2341x_log_status" },
	{ 0x16cd7e29, "dvb_net_release" },
	{ 0x880737be, "kthread_create_on_node" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xfefa79ff, "i2c_add_adapter" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xa359ecb9, "dvb_frontend_detach" },
	{ 0x7005a755, "v4l2_device_register" },
	{ 0x8d3a49fd, "cx2341x_ctrl_get_menu" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xee2afff0, "v4l2_device_disconnect" },
	{ 0x5f754e5a, "memset" },
	{ 0xafa08984, "v4l2_s_ctrl" },
	{ 0xc411e5a5, "param_ops_short" },
	{ 0x3521c7a0, "device_register" },
	{ 0x3d4b2d8, "usb_lock_device_for_reset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xb9c8f3f1, "cx2341x_update" },
	{ 0x24868151, "freezing_slow_path" },
	{ 0x7009370e, "usb_deregister" },
	{ 0xd3e56d1, "dvb_dmxdev_release" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xdccedf20, "kthread_stop" },
	{ 0xa7b1f769, "sysfs_create_group" },
	{ 0x71c90087, "memcmp" },
	{ 0x32f05388, "video_unregister_device" },
	{ 0x6d6880, "dvb_dmx_swfilter" },
	{ 0x9cc3f147, "class_unregister" },
	{ 0x1e3a1833, "dvb_net_init" },
	{ 0xb6412d2c, "usb_set_interface" },
	{ 0xa0b430b8, "v4l2_fh_init" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x328a05f1, "strncpy" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xab373618, "device_move" },
	{ 0x24d273d1, "add_timer" },
	{ 0x58c9433d, "__class_register" },
	{ 0x7b334d3c, "dvb_dmx_release" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x91c30868, "usb_urb_ep_type_check" },
	{ 0x4de2e10c, "device_create_file" },
	{ 0x3d39806a, "i2c_del_adapter" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0x5a163a5, "put_device" },
	{ 0xf0ede9c1, "video_devdata" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x81fafab5, "usb_reset_device" },
	{ 0xf3f1124e, "usb_bulk_msg" },
	{ 0x1000e51, "schedule" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0x2bbe5326, "usb_clear_halt" },
	{ 0xeb854f47, "cx2341x_ctrl_query" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x1c2a847c, "wake_up_process" },
	{ 0x7ced4282, "dvb_register_adapter" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x47d7efde, "get_device" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x3e872658, "param_array_ops" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0xecb30410, "request_firmware" },
	{ 0x49970de8, "finish_wait" },
	{ 0x7db6f1d9, "v4l2_fh_add" },
	{ 0x16eee64a, "device_unregister" },
	{ 0x99c7805c, "v4l2_fh_del" },
	{ 0xa20fee2, "cx2341x_ext_ctrls" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xe6c12171, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0x184c48a6, "dev_set_name" },
	{ 0x64f88cff, "i2c_new_device" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0xf41872ce, "release_firmware" },
	{ 0x46c5b78e, "video_ioctl2" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
	{ 0xf505c45c, "dvb_dmxdev_init" },
	{ 0xa0fa5a1b, "v4l2_fh_exit" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-core,v4l2-common,tveeprom,videodev,cx2341x";

MODULE_ALIAS("usb:v2040p2900d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p2950d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p2400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1164p0622d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1164p0602d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11BAp1003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11BAp1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0039d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "925FBDA7FC3769C8C8F535F");

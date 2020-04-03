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
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x7c3cf3c0, "v4l2_event_unsubscribe" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xcf44e6ed, "v4l2_ctrl_cluster" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb58ea1cc, "v4l2_ctrl_log_status" },
	{ 0x913052e9, "v4l2_device_unregister" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0xa3248a2b, "v4l2_ctrl_new_std" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x12bae986, "__video_register_device" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x7ee42e7c, "v4l2_ctrl_activate" },
	{ 0xfefa79ff, "i2c_add_adapter" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x7005a755, "v4l2_device_register" },
	{ 0xd034392d, "v4l2_match_dv_timings" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xffb487d1, "v4l2_ctrl_new_std_menu" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xee2afff0, "v4l2_device_disconnect" },
	{ 0x5f754e5a, "memset" },
	{ 0x7009370e, "usb_deregister" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x32f05388, "video_unregister_device" },
	{ 0xa0b430b8, "v4l2_fh_init" },
	{ 0xead2e9ef, "v4l2_ctrl_subscribe_event" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x328a05f1, "strncpy" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xe3457203, "v4l2_fh_release" },
	{ 0xc0ed0fc, "usb_free_coherent" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x3d39806a, "i2c_del_adapter" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0xbac1993e, "usb_get_dev" },
	{ 0xf0ede9c1, "video_devdata" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf3f1124e, "usb_bulk_msg" },
	{ 0x1e3c5edc, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2c5f71e, "v4l2_ctrl_handler_setup" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x3e872658, "param_array_ops" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0x49970de8, "finish_wait" },
	{ 0x7db6f1d9, "v4l2_fh_add" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0x21cca90f, "usb_alloc_coherent" },
	{ 0x73a7a766, "param_ops_uint" },
	{ 0x64f88cff, "i2c_new_device" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0x46c5b78e, "video_ioctl2" },
	{ 0xb8a1612a, "v4l2_ctrl_poll" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,v4l2-dv-timings";

MODULE_ALIAS("usb:v2040p4900d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p4901d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p4902d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p4982d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p4903d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "7D6E86DCE8C5A8E1F1B72CC");

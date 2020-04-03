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
	{ 0xb7700415, "param_ops_int" },
	{ 0x73a7a766, "param_ops_uint" },
	{ 0x8fdcf915, "param_ops_ushort" },
	{ 0x7009370e, "usb_deregister" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0x12bae986, "__video_register_device" },
	{ 0xb345af9b, "si470x_set_freq" },
	{ 0x23da0b34, "video_device_release_empty" },
	{ 0x9d669763, "memcpy" },
	{ 0x5a1a02b7, "si470x_viddev_template" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xa3248a2b, "v4l2_ctrl_new_std" },
	{ 0xf586fa18, "si470x_ctrl_ops" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0x7005a755, "v4l2_device_register" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xeb06bceb, "v4l2_fh_open" },
	{ 0xe3457203, "v4l2_fh_release" },
	{ 0xb81960ca, "snprintf" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xf0ede9c1, "video_devdata" },
	{ 0x37a0cba, "kfree" },
	{ 0x913052e9, "v4l2_device_unregister" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0xbdb42f86, "v4l2_device_put" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x32f05388, "video_unregister_device" },
	{ 0xee2afff0, "v4l2_device_disconnect" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xac0c1b01, "si470x_stop" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0xe6c12171, "complete" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x2c5f71e, "v4l2_ctrl_handler_setup" },
	{ 0xfbfb3d13, "si470x_start" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,radio-si470x-common";

MODULE_ALIAS("usb:v10C4p818Ad*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v06E1pA155d*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v1B80pD700d*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v10C5p819Ad*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v12CFp7111d*dc*dsc*dp*ic03isc00ip00in*");

MODULE_INFO(srcversion, "E4AD8E01054BDEA33EB080A");

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
	{ 0x7c3cf3c0, "v4l2_event_unsubscribe" },
	{ 0xead2e9ef, "v4l2_ctrl_subscribe_event" },
	{ 0xb58ea1cc, "v4l2_ctrl_log_status" },
	{ 0xe3457203, "v4l2_fh_release" },
	{ 0xeb06bceb, "v4l2_fh_open" },
	{ 0x46c5b78e, "video_ioctl2" },
	{ 0xb8a1612a, "v4l2_ctrl_poll" },
	{ 0x7009370e, "usb_deregister" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0x12bae986, "__video_register_device" },
	{ 0x23da0b34, "video_device_release_empty" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xa3248a2b, "v4l2_ctrl_new_std" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0x7005a755, "v4l2_device_register" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xb81960ca, "snprintf" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf0ede9c1, "video_devdata" },
	{ 0x37a0cba, "kfree" },
	{ 0x913052e9, "v4l2_device_unregister" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0xbdb42f86, "v4l2_device_put" },
	{ 0xee2afff0, "v4l2_device_disconnect" },
	{ 0x32f05388, "video_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x9d669763, "memcpy" },
	{ 0xf3f1124e, "usb_bulk_msg" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev";

MODULE_ALIAS("usb:v07CApB800d*dc*dsc*dp*ic03isc00ip00in*");

MODULE_INFO(srcversion, "7BE568BC04D92AFD7B1344C");

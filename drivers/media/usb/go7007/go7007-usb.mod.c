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
	{ 0x7009370e, "usb_deregister" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0x5f754e5a, "memset" },
	{ 0xabff2f9, "go7007_read_interrupt" },
	{ 0xc4fc8a7c, "go7007_update_board" },
	{ 0xe54db0b9, "go7007_read_addr" },
	{ 0xaedc75de, "i2c_smbus_xfer" },
	{ 0xfefa79ff, "i2c_add_adapter" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x9d669763, "memcpy" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x89ad1c19, "go7007_register_encoder" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x1bf86933, "go7007_boot_encoder" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
	{ 0x328a05f1, "strncpy" },
	{ 0xb81960ca, "snprintf" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x3f57a284, "go7007_alloc" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xf9a482f9, "msleep" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf3f1124e, "usb_bulk_msg" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8c42704, "go7007_parse_video_stream" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0xbdb42f86, "v4l2_device_put" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x32f05388, "video_unregister_device" },
	{ 0xee2afff0, "v4l2_device_disconnect" },
	{ 0x8a64a0ce, "go7007_snd_remove" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=go7007,videodev";

MODULE_ALIAS("usb:v0EB1p7007d0200dc*dsc*dp*icFFisc00ipFFin*");
MODULE_ALIAS("usb:v0EB1p7007d0202dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB1p7007d0204dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB1p7007d0205dc*dsc*dp*icFFisc00ipFFin*");
MODULE_ALIAS("usb:v0EB1p7007d0208dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB1p7007d0209dc*dsc*dp*icFFisc00ipFFin*");
MODULE_ALIAS("usb:v0EB1p7007d0210dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093BpA102d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093BpA104d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10FDpDE00d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1943p2250d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E1p0709d0204dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "A5D7DBAA5E0E6CDD0317215");

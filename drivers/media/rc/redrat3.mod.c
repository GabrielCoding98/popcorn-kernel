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
	{ 0x73a7a766, "param_ops_uint" },
	{ 0x7009370e, "usb_deregister" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0xf3f1124e, "usb_bulk_msg" },
	{ 0x235c2927, "rc_free_device" },
	{ 0xfb0ec729, "rc_register_device" },
	{ 0xb81960ca, "snprintf" },
	{ 0xc96d3cbd, "rc_allocate_device" },
	{ 0xbcd63380, "of_led_classdev_register" },
	{ 0x21cca90f, "usb_alloc_coherent" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x7c32d0f0, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xe5a35223, "ir_raw_event_handle" },
	{ 0x78000d2e, "ir_raw_event_store_with_filter" },
	{ 0xbc7a2017, "ir_raw_event_store" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x9d669763, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x195ff614, "usb_unlink_urb" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0xc0ed0fc, "usb_free_coherent" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0xf999f91b, "led_classdev_unregister" },
	{ 0x54f6445d, "rc_unregister_device" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0x7520d19a, "led_classdev_suspend" },
	{ 0x1c8bcace, "led_classdev_resume" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v112Ap0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v112Ap0005d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "CBCFD622F5D78EEEC18A28A");

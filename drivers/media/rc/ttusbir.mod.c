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
	{ 0x235c2927, "rc_free_device" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xfb0ec729, "rc_register_device" },
	{ 0xb81960ca, "snprintf" },
	{ 0xbcd63380, "of_led_classdev_register" },
	{ 0x21cca90f, "usb_alloc_coherent" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
	{ 0xb6412d2c, "usb_set_interface" },
	{ 0xc96d3cbd, "rc_allocate_device" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x195ff614, "usb_unlink_urb" },
	{ 0xe5a35223, "ir_raw_event_handle" },
	{ 0x78000d2e, "ir_raw_event_store_with_filter" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x37a0cba, "kfree" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0xc0ed0fc, "usb_free_coherent" },
	{ 0xf999f91b, "led_classdev_unregister" },
	{ 0x54f6445d, "rc_unregister_device" },
	{ 0x7520d19a, "led_classdev_suspend" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0x1c8bcace, "led_classdev_resume" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0B48p2003d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "4E00B6AAC01A9F2AB2B7E9D");

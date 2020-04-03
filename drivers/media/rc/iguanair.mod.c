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
	{ 0x4e3704ba, "_dev_info" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xfb0ec729, "rc_register_device" },
	{ 0xb81960ca, "snprintf" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
	{ 0x21cca90f, "usb_alloc_coherent" },
	{ 0x235c2927, "rc_free_device" },
	{ 0xc96d3cbd, "rc_allocate_device" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbc7a2017, "ir_raw_event_store" },
	{ 0xe5a35223, "ir_raw_event_handle" },
	{ 0x195ff614, "usb_unlink_urb" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0x78000d2e, "ir_raw_event_store_with_filter" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe6c12171, "complete" },
	{ 0x37a0cba, "kfree" },
	{ 0xc0ed0fc, "usb_free_coherent" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0x54f6445d, "rc_unregister_device" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xe707d823, "__aeabi_uidiv" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v1781p0938d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "38C0C3657AF3B175D2A19BE");

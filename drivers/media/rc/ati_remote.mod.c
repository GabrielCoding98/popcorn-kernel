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
	{ 0x931bbbfe, "param_ops_ulong" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0x7009370e, "usb_deregister" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0x7c32d0f0, "printk" },
	{ 0x489d494f, "input_free_device" },
	{ 0x7ad52565, "input_register_device" },
	{ 0x6df65bc1, "input_allocate_device" },
	{ 0x235c2927, "rc_free_device" },
	{ 0xfb0ec729, "rc_register_device" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xb81960ca, "snprintf" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
	{ 0x21cca90f, "usb_alloc_coherent" },
	{ 0xc96d3cbd, "rc_allocate_device" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9d669763, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x37a0cba, "kfree" },
	{ 0x54f6445d, "rc_unregister_device" },
	{ 0xd0fbda78, "input_unregister_device" },
	{ 0xc1ea1c86, "input_event" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x959f109b, "rc_g_keycode_from_table" },
	{ 0x5e89edd7, "rc_keyup" },
	{ 0x60e5101b, "rc_keydown_notimeout" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc0ed0fc, "usb_free_coherent" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0BC7p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC7p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC7p0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC7p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC7p0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC7p0008d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "428CC54C5B0A0B01A52A2D7");

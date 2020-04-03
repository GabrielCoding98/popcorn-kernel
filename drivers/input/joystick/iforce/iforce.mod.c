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
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x352c05d9, "release_resource" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0xd1f07697, "input_ff_create" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x195ff614, "usb_unlink_urb" },
	{ 0xf06957f, "allocate_resource" },
	{ 0xaad6ca78, "input_set_abs_params" },
	{ 0xc1ea1c86, "input_event" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7009370e, "usb_deregister" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7ad52565, "input_register_device" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x489d494f, "input_free_device" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xd0fbda78, "input_unregister_device" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
	{ 0x6df65bc1, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v044FpA01Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046DpC281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046DpC291d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05EFp020Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05EFp8884d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05EFp8888d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v061CpC0A4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v061CpC084d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8p0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pA302d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "4577B8D193245A119347A5A");

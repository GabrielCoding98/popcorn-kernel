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
	{ 0x988694e4, "noop_llseek" },
	{ 0x7009370e, "usb_deregister" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xb681d96f, "usb_register_dev" },
	{ 0x1a83cf9e, "usb_string" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x75aea49c, "usb_find_common_endpoints_reverse" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xbac1993e, "usb_get_dev" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf63991ee, "usb_poison_urb" },
	{ 0x8773584, "usb_deregister_dev" },
	{ 0x1e3c5edc, "usb_put_dev" },
	{ 0x37a0cba, "kfree" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x5f754e5a, "memset" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x9d669763, "memcpy" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x7c32d0f0, "printk" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0xb2558eaa, "usb_find_interface" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0A07p0064d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A07p0078d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A07p0082d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A07p00C8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A07p00D0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A07p00DAd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8E5D7C1A94E2851FFB8F44D");
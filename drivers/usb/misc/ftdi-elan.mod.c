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
	{ 0x2d3385d3, "system_wq" },
	{ 0x402b8281, "__request_module" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xf7f21a6e, "no_llseek" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd0d9eeb6, "down_interruptible" },
	{ 0x8773584, "usb_deregister_dev" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x7009370e, "usb_deregister" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xb681d96f, "usb_register_dev" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf0ef52e8, "down" },
	{ 0x793b43cb, "platform_device_unregister" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xc0ed0fc, "usb_free_coherent" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0xd5ca0472, "platform_device_register" },
	{ 0xbac1993e, "usb_get_dev" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf3f1124e, "usb_bulk_msg" },
	{ 0x1e3c5edc, "usb_put_dev" },
	{ 0xedc5eced, "usb_find_common_endpoints" },
	{ 0xb2558eaa, "usb_find_interface" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x581cde4e, "up" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe6c12171, "complete" },
	{ 0x21cca90f, "usb_alloc_coherent" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0403pD6EAd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8BC7154EE5F0759A0B8D621");

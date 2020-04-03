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
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x949d7ffa, "backlight_device_register" },
	{ 0xb81960ca, "snprintf" },
	{ 0x21cca90f, "usb_alloc_coherent" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xedc5eced, "usb_find_common_endpoints" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x7c32d0f0, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0xc0ed0fc, "usb_free_coherent" },
	{ 0x5ab9e4af, "backlight_device_unregister" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v05ACp9218d*dc*dsc*dp*ic03isc*ip00in*");
MODULE_ALIAS("usb:v05ACp9219d*dc*dsc*dp*ic03isc*ip00in*");
MODULE_ALIAS("usb:v05ACp921Cd*dc*dsc*dp*ic03isc*ip00in*");
MODULE_ALIAS("usb:v05ACp921Dd*dc*dsc*dp*ic03isc*ip00in*");
MODULE_ALIAS("usb:v05ACp9222d*dc*dsc*dp*ic03isc*ip00in*");
MODULE_ALIAS("usb:v05ACp9226d*dc*dsc*dp*ic03isc*ip00in*");
MODULE_ALIAS("usb:v05ACp9236d*dc*dsc*dp*ic03isc*ip00in*");

MODULE_INFO(srcversion, "67C3EBC1D3BF04674F62BF8");

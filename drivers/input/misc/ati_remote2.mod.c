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
	{ 0xd0fbda78, "input_unregister_device" },
	{ 0x2c256e1f, "input_scancode_to_scalar" },
	{ 0x5f791ed1, "sysfs_remove_group" },
	{ 0x489d494f, "input_free_device" },
	{ 0x7ad52565, "input_register_device" },
	{ 0x6df65bc1, "input_allocate_device" },
	{ 0xa7b1f769, "sysfs_create_group" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xb81960ca, "snprintf" },
	{ 0xbc034315, "usb_driver_release_interface" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
	{ 0x21cca90f, "usb_alloc_coherent" },
	{ 0x65354236, "usb_driver_claim_interface" },
	{ 0x37a0cba, "kfree" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0xc1ea1c86, "input_event" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc0ed0fc, "usb_free_coherent" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0x7a9a1802, "usb_autopm_put_interface" },
	{ 0xb53dfafc, "usb_autopm_get_interface" },
	{ 0x4a02305a, "usb_ifnum_to_if" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x91715312, "sprintf" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0471p0602d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "5751EE3E074A5C166DC4506");

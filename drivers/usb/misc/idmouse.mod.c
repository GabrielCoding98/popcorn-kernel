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
	{ 0x7905d834, "default_llseek" },
	{ 0x7009370e, "usb_deregister" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xb681d96f, "usb_register_dev" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0xedc5eced, "usb_find_common_endpoints" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x8773584, "usb_deregister_dev" },
	{ 0x37a0cba, "kfree" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf3f1124e, "usb_bulk_msg" },
	{ 0x7a9a1802, "usb_autopm_put_interface" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0xb53dfafc, "usb_autopm_get_interface" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xb2558eaa, "usb_find_interface" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0681p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p0010d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "225562C37DF1789E24C4328");

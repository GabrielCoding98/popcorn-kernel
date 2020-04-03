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
	{ 0xddc8ea26, "usb_wwan_write" },
	{ 0xb037e1b1, "usb_wwan_port_remove" },
	{ 0x4fb59a47, "usb_wwan_port_probe" },
	{ 0xa30da245, "usb_serial_deregister_drivers" },
	{ 0x84609308, "usb_serial_register_drivers" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0xf696af4c, "usb_wwan_open" },
	{ 0x2bbe5326, "usb_clear_halt" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe729216, "usb_wwan_close" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usb_wwan,usbserial";

MODULE_ALIAS("usb:v0BC3p0001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "1DBA5A677F5F40EC7F93699");

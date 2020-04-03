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
	{ 0xa30da245, "usb_serial_deregister_drivers" },
	{ 0x84609308, "usb_serial_register_drivers" },
	{ 0x69310ee8, "usb_serial_generic_open" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0xedc955e4, "usb_serial_generic_close" },
	{ 0x4c6e61e2, "tty_encode_baud_rate" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0xfd583f37, "__tty_insert_flip_char" },
	{ 0x2bb457a1, "tty_flip_buffer_push" },
	{ 0x915f8bbd, "tty_insert_flip_string_fixed_flag" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v050Dp0103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Cp8007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0565p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0921p1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0921p1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1203d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "1BE7B2F34C2FD94BEA0A78D");

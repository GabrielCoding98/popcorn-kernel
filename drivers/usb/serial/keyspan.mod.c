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
	{ 0x69fc24b0, "ezusb_fx1_ihex_firmware_download" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
	{ 0x60afae3b, "usb_serial_port_softint" },
	{ 0xfd583f37, "__tty_insert_flip_char" },
	{ 0x2bb457a1, "tty_flip_buffer_push" },
	{ 0x915f8bbd, "tty_insert_flip_string_fixed_flag" },
	{ 0x97d1f56f, "tty_port_tty_hangup" },
	{ 0x37a0cba, "kfree" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0x2bbe5326, "usb_clear_halt" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0x195ff614, "usb_unlink_urb" },
	{ 0x9d669763, "memcpy" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x4c6e61e2, "tty_encode_baud_rate" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0x5f754e5a, "memset" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial,ezusb";

MODULE_ALIAS("usb:v06CDp0105d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp010Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0118d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp011Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0114d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0113d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp011Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0112d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0107d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0108d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp010Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0119d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0121d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp011Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp010Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0115d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0135d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp010Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp012Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0131d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "FCFEF0DE33888C14148E37D");

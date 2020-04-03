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
	{ 0x5a102492, "usbnet_suspend" },
	{ 0x77881920, "usbnet_disconnect" },
	{ 0x70b0e1bc, "usbnet_probe" },
	{ 0x7275a863, "usbnet_get_stats64" },
	{ 0xf70ed1a6, "usbnet_tx_timeout" },
	{ 0xa6d94d80, "usbnet_change_mtu" },
	{ 0xa5d8c690, "eth_validate_addr" },
	{ 0x59b19ece, "usbnet_start_xmit" },
	{ 0x20897998, "usbnet_stop" },
	{ 0xe2da03da, "usbnet_open" },
	{ 0xdaa28a7d, "usbnet_set_link_ksettings" },
	{ 0xaea7f82a, "usbnet_get_link_ksettings" },
	{ 0x8fb2f887, "usbnet_get_link" },
	{ 0xfae40a45, "usbnet_nway_reset" },
	{ 0xc86858c3, "usbnet_set_msglevel" },
	{ 0xca2d3647, "usbnet_get_msglevel" },
	{ 0x7009370e, "usb_deregister" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0x18719b8d, "usbnet_resume" },
	{ 0x837e5317, "usbnet_get_endpoints" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x54d9ba37, "usbnet_write_cmd_async" },
	{ 0x122170da, "crc32_le" },
	{ 0xde0c7db5, "usbnet_get_drvinfo" },
	{ 0x9d669763, "memcpy" },
	{ 0xa048fe15, "generic_mii_ioctl" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2eb5b630, "usbnet_read_cmd" },
	{ 0x10521572, "usbnet_write_cmd" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xce453b61, "usbnet_link_change" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xff71b834, "skb_trim" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v9710p7832d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9710p7830d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9710p7730d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0021d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "EDAE9BC907BEEB8FAAFA43B");

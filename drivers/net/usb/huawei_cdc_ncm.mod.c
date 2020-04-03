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
	{ 0x77881920, "usbnet_disconnect" },
	{ 0x70b0e1bc, "usbnet_probe" },
	{ 0x4c048c58, "cdc_ncm_tx_fixup" },
	{ 0x586366ad, "cdc_ncm_rx_fixup" },
	{ 0x7009370e, "usb_deregister" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0x88f91abc, "usb_cdc_wdm_register" },
	{ 0x6934526f, "cdc_ncm_bind_common" },
	{ 0x5a102492, "usbnet_suspend" },
	{ 0x18719b8d, "usbnet_resume" },
	{ 0xf7bba33d, "cdc_ncm_unbind" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x7a9a1802, "usb_autopm_put_interface" },
	{ 0xb53dfafc, "usb_autopm_get_interface" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cdc_ncm,cdc-wdm";

MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc02ip16in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc02ip46in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc02ip76in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc03ip16in*");

MODULE_INFO(srcversion, "8A1FBE646C007A3B5BD4B14");

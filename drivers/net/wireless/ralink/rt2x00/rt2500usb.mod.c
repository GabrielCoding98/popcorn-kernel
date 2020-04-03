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
	{ 0x7d54146, "param_ops_bool" },
	{ 0x1c5c866f, "rt2x00usb_resume" },
	{ 0xcf05f5ef, "rt2x00usb_suspend" },
	{ 0xa74f684a, "rt2x00usb_disconnect" },
	{ 0x168f6cc5, "rt2x00mac_tx_frames_pending" },
	{ 0xb28b4ea8, "rt2x00mac_get_ringparam" },
	{ 0x4937cb3b, "rt2x00mac_get_antenna" },
	{ 0xcd4186eb, "rt2x00mac_set_antenna" },
	{ 0xc886b63a, "rt2x00mac_flush" },
	{ 0x10c33a07, "rt2x00mac_rfkill_poll" },
	{ 0x56fffe34, "rt2x00mac_conf_tx" },
	{ 0xcb31fa5, "rt2x00mac_get_stats" },
	{ 0x23f90937, "rt2x00mac_sw_scan_complete" },
	{ 0x583cfeb3, "rt2x00mac_sw_scan_start" },
	{ 0x6ea11690, "rt2x00mac_set_key" },
	{ 0x450c2921, "rt2x00mac_set_tim" },
	{ 0xfa31d721, "rt2x00mac_configure_filter" },
	{ 0xb63a5a5a, "rt2x00mac_bss_info_changed" },
	{ 0x2490d7b, "rt2x00mac_config" },
	{ 0xf4e1c446, "rt2x00mac_remove_interface" },
	{ 0x76dc945e, "rt2x00mac_add_interface" },
	{ 0xa0af8260, "rt2x00mac_stop" },
	{ 0xc6761eb9, "rt2x00mac_start" },
	{ 0xf6721037, "rt2x00mac_tx" },
	{ 0x7479da40, "rt2x00usb_flush_queue" },
	{ 0x907d207c, "rt2x00usb_kick_queue" },
	{ 0x6ac8ef0c, "rt2x00usb_watchdog" },
	{ 0xdfed83f0, "rt2x00usb_clear_entry" },
	{ 0xb902c12a, "rt2x00usb_uninitialize" },
	{ 0xd7c4e80d, "rt2x00usb_initialize" },
	{ 0x7009370e, "usb_deregister" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x7067904b, "rt2x00lib_set_mac_address" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4a23ced2, "rt2x00usb_vendor_request" },
	{ 0x8f10c6dd, "rt2x00usb_disable_radio" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xd1093109, "rt2x00usb_vendor_req_buff_lock" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0x6ef02d63, "skb_push" },
	{ 0xff71b834, "skb_trim" },
	{ 0x9d669763, "memcpy" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd10b0fcc, "rt2x00usb_vendor_request_buff" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x90061c17, "rt2x00usb_probe" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00usb,rt2x00lib";

MODULE_ALIAS("usb:v0B05p1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1707d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p001Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p005Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0066d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0067d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p008Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0097d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6861d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6865d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6869d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2570d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v079Bp004Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p3C06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707pEE13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v114Bp0110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0769p11F3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F88p3012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5A57p0260d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E9CB96CDF70A6DFF03D504B");

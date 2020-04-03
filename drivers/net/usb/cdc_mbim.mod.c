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
	{ 0x7275a863, "usbnet_get_stats64" },
	{ 0xf70ed1a6, "usbnet_tx_timeout" },
	{ 0x700d0535, "cdc_ncm_change_mtu" },
	{ 0xa5d8c690, "eth_validate_addr" },
	{ 0xf4dfc5b1, "eth_mac_addr" },
	{ 0x59b19ece, "usbnet_start_xmit" },
	{ 0x20897998, "usbnet_stop" },
	{ 0xe2da03da, "usbnet_open" },
	{ 0x7009370e, "usb_deregister" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0xd4c365b5, "usb_match_id" },
	{ 0xb6412d2c, "usb_set_interface" },
	{ 0x88f91abc, "usb_cdc_wdm_register" },
	{ 0x6934526f, "cdc_ncm_bind_common" },
	{ 0xa69b38c, "cdc_ncm_select_altsetting" },
	{ 0x5a102492, "usbnet_suspend" },
	{ 0x18719b8d, "usbnet_resume" },
	{ 0xf7bba33d, "cdc_ncm_unbind" },
	{ 0x7a9a1802, "usb_autopm_put_interface" },
	{ 0xb53dfafc, "usb_autopm_get_interface" },
	{ 0xef0bdea5, "in6_dev_finish_destroy" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xe34cf2f1, "__vlan_find_dev_deep_rcu" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xba323184, "usbnet_skb_return" },
	{ 0x9d669763, "memcpy" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0xe69bfc72, "__netdev_alloc_skb" },
	{ 0x27260559, "cdc_ncm_rx_verify_ndp16" },
	{ 0xea7759c4, "ipv6_stub" },
	{ 0x2f601994, "cdc_ncm_rx_verify_nth16" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc30abd6, "netdev_err" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x7b501541, "cdc_ncm_fill_tx_frame" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x55c68dd, "skb_pull" },
	{ 0xa7ffef14, "__dev_kfree_skb_any" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cdc_ncm,cdc-wdm";

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v03F0pA31Dd*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v1BC7p1041d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Eip00in*");

MODULE_INFO(srcversion, "25D7BD2E7451CFFD3B1BCD8");

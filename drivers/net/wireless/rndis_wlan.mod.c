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
	{ 0x8ae137ee, "param_ops_string" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x18719b8d, "usbnet_resume" },
	{ 0x5a102492, "usbnet_suspend" },
	{ 0x77881920, "usbnet_disconnect" },
	{ 0x70b0e1bc, "usbnet_probe" },
	{ 0xf0fde276, "rndis_tx_fixup" },
	{ 0x438381b3, "rndis_rx_fixup" },
	{ 0x59101007, "rndis_status" },
	{ 0x7275a863, "usbnet_get_stats64" },
	{ 0xf70ed1a6, "usbnet_tx_timeout" },
	{ 0xa5d8c690, "eth_validate_addr" },
	{ 0xf4dfc5b1, "eth_mac_addr" },
	{ 0x59b19ece, "usbnet_start_xmit" },
	{ 0x20897998, "usbnet_stop" },
	{ 0xe2da03da, "usbnet_open" },
	{ 0x7009370e, "usb_deregister" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0x91715312, "sprintf" },
	{ 0x97255bdf, "strlen" },
	{ 0xb859f38b, "krealloc" },
	{ 0x18193597, "wiphy_register" },
	{ 0xa3bbe5ca, "generic_rndis_bind" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x9121be2, "wiphy_new_nm" },
	{ 0xc30abd6, "netdev_err" },
	{ 0xebd1d4c2, "usbnet_purge_paused_rxq" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0xe8663ae6, "ieee80211_channel_to_frequency" },
	{ 0x7e0ec2f1, "cfg80211_cqm_rssi_notify" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xcae566cc, "netif_carrier_off" },
	{ 0x418d6c5d, "cfg80211_disconnected" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x97f34c9f, "cfg80211_roamed" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x98e9ac18, "cfg80211_ibss_joined" },
	{ 0x3601d60a, "cfg80211_connect_done" },
	{ 0x8a7d7e3c, "netif_carrier_on" },
	{ 0x27d2b9e7, "usbnet_resume_rx" },
	{ 0x9cb5d9a4, "wiphy_free" },
	{ 0x81edcd5, "wiphy_unregister" },
	{ 0x9727eebd, "rndis_unbind" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf9a482f9, "msleep" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xc6f1a572, "cfg80211_scan_done" },
	{ 0xaf27abd, "cfg80211_put_bss" },
	{ 0x5e5db0b1, "cfg80211_inform_bss_data" },
	{ 0xcaa31bfb, "ieee80211_get_channel" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x5f754e5a, "memset" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x829dddab, "netdev_warn" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x37a0cba, "kfree" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x674ec6f8, "rndis_command" },
	{ 0x9d669763, "memcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x11089ac7, "_ctype" },
	{ 0x8cabecbb, "cfg80211_michael_mic_failure" },
	{ 0x89108a8b, "cfg80211_pmksa_candidate_notify" },
	{ 0xa0432265, "usbnet_pause_rx" },
	{ 0xfb8949de, "netdev_info" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rndis_host,cfg80211";

MODULE_ALIAS("usb:v0411p00BCd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0BAFp011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v050Dp011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v1799p011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p0014d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p0026d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0B05p1717d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0A5CpD11Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v1690p0715d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p000Ed*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0BAFp0111d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0411p004Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc01ip01in*");

MODULE_INFO(srcversion, "1CD8E809F189FBACEBEBCC9");

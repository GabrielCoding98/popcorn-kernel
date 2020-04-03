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
	{ 0xfb8949de, "netdev_info" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x2ab01fe7, "ethtool_op_get_ts_info" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x12c9d152, "usb_altnum_to_altsetting" },
	{ 0x18719b8d, "usbnet_resume" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x6e1698a, "hrtimer_active" },
	{ 0x70b0e1bc, "usbnet_probe" },
	{ 0xce453b61, "usbnet_link_change" },
	{ 0x4998222d, "hrtimer_cancel" },
	{ 0x77881920, "usbnet_disconnect" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa7ffef14, "__dev_kfree_skb_any" },
	{ 0x20897998, "usbnet_stop" },
	{ 0xb412c64d, "usbnet_update_max_qlen" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0x91715312, "sprintf" },
	{ 0xe69bfc72, "__netdev_alloc_skb" },
	{ 0xd54cb7d2, "netif_schedule_queue" },
	{ 0xfae40a45, "usbnet_nway_reset" },
	{ 0x4a16dd15, "hrtimer_start_range_ns" },
	{ 0xdaa28a7d, "usbnet_set_link_ksettings" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x752d5f5b, "kstrtobool" },
	{ 0x7275a863, "usbnet_get_stats64" },
	{ 0x7009370e, "usb_deregister" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xb6412d2c, "usb_set_interface" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xaea7f82a, "usbnet_get_link_ksettings" },
	{ 0x65354236, "usb_driver_claim_interface" },
	{ 0xde0c7db5, "usbnet_get_drvinfo" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x59b19ece, "usbnet_start_xmit" },
	{ 0x5a102492, "usbnet_suspend" },
	{ 0x8fb2f887, "usbnet_get_link" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x2eb5b630, "usbnet_read_cmd" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x2827ae6f, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xf70ed1a6, "usbnet_tx_timeout" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xaadf5bc8, "cdc_parse_cdc_header" },
	{ 0x93176ed5, "usbnet_get_ethernet_addr" },
	{ 0xba323184, "usbnet_skb_return" },
	{ 0xbc034315, "usb_driver_release_interface" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0xe2da03da, "usbnet_open" },
	{ 0xca2d3647, "usbnet_get_msglevel" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x8cd8fe47, "usbnet_unlink_rx_urbs" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xa5d8c690, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x5b586cbc, "hrtimer_init" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x4a02305a, "usb_ifnum_to_if" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0xf4dfc5b1, "eth_mac_addr" },
	{ 0xf33ec9ad, "usbnet_manage_power" },
	{ 0x10521572, "usbnet_write_cmd" },
	{ 0xc86858c3, "usbnet_set_msglevel" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1BC7p0036d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BBd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BCd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1519p0443d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1546p1010d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");

MODULE_INFO(srcversion, "3AF2C31DEFBD416D77660A7");

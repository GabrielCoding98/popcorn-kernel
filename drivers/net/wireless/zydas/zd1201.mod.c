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
	{ 0xb7700415, "param_ops_int" },
	{ 0xa5d8c690, "eth_validate_addr" },
	{ 0x7009370e, "usb_deregister" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x80fd477, "register_netdev" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xf41872ce, "release_firmware" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0xecb30410, "request_firmware" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x98fc2eaf, "alloc_etherdev_mqs" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x4f92fbf6, "netif_device_attach" },
	{ 0xc2ecc0ce, "netif_device_detach" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x195ff614, "usb_unlink_urb" },
	{ 0x8a7d7e3c, "netif_carrier_on" },
	{ 0xd724aff0, "wireless_send_event" },
	{ 0xcae566cc, "netif_carrier_off" },
	{ 0x61ac380c, "netif_rx" },
	{ 0xbfba76ab, "eth_type_trans" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0xe69bfc72, "__netdev_alloc_skb" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x8a7f62f2, "netif_tx_wake_queue" },
	{ 0x97255bdf, "strlen" },
	{ 0x2ac79575, "free_netdev" },
	{ 0x8c42b265, "unregister_netdev" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9d669763, "memcpy" },
	{ 0x5f754e5a, "memset" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cfg80211";

MODULE_ALIAS("usb:v0586p3400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp1201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp6051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6823d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8005d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F64EF260136060C30789D00");

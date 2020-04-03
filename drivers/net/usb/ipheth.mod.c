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
	{ 0x7009370e, "usb_deregister" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0xb6412d2c, "usb_set_interface" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x8a7d7e3c, "netif_carrier_on" },
	{ 0x7f3da685, "netif_tx_stop_all_queues" },
	{ 0xcae566cc, "netif_carrier_off" },
	{ 0x80fd477, "register_netdev" },
	{ 0x21cca90f, "usb_alloc_coherent" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12c9d152, "usb_altnum_to_altsetting" },
	{ 0x98fc2eaf, "alloc_etherdev_mqs" },
	{ 0x61ac380c, "netif_rx" },
	{ 0xbfba76ab, "eth_type_trans" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0xe69bfc72, "__netdev_alloc_skb" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xa7ffef14, "__dev_kfree_skb_any" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x9d669763, "memcpy" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0x195ff614, "usb_unlink_urb" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x8a7f62f2, "netif_tx_wake_queue" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x2ac79575, "free_netdev" },
	{ 0x37a0cba, "kfree" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0x8c42b265, "unregister_netdev" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0xc0ed0fc, "usb_free_coherent" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v05ACp1290d*dc*dsc*dp*icFFiscFDip01in*");
MODULE_ALIAS("usb:v05ACp1292d*dc*dsc*dp*icFFiscFDip01in*");
MODULE_ALIAS("usb:v05ACp1294d*dc*dsc*dp*icFFiscFDip01in*");
MODULE_ALIAS("usb:v05ACp1297d*dc*dsc*dp*icFFiscFDip01in*");
MODULE_ALIAS("usb:v05ACp129Ad*dc*dsc*dp*icFFiscFDip01in*");
MODULE_ALIAS("usb:v05ACp12A2d*dc*dsc*dp*icFFiscFDip01in*");
MODULE_ALIAS("usb:v05ACp12A6d*dc*dsc*dp*icFFiscFDip01in*");
MODULE_ALIAS("usb:v05ACp12ABd*dc*dsc*dp*icFFiscFDip01in*");
MODULE_ALIAS("usb:v05ACp129Cd*dc*dsc*dp*icFFiscFDip01in*");
MODULE_ALIAS("usb:v05ACp12A0d*dc*dsc*dp*icFFiscFDip01in*");
MODULE_ALIAS("usb:v05ACp12A8d*dc*dsc*dp*icFFiscFDip01in*");

MODULE_INFO(srcversion, "F233980A00FD8E2E5FF378E");

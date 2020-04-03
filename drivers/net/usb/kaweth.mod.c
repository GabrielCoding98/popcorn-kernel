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
	{ 0xa5d8c690, "eth_validate_addr" },
	{ 0xf4dfc5b1, "eth_mac_addr" },
	{ 0x7009370e, "usb_deregister" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0xb53dfafc, "usb_autopm_get_interface" },
	{ 0xa7ffef14, "__dev_kfree_skb_any" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x440200b7, "pskb_expand_head" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x80fd477, "register_netdev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x21cca90f, "usb_alloc_coherent" },
	{ 0x71c90087, "memcmp" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x1968ceaa, "usb_reset_configuration" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x98fc2eaf, "alloc_etherdev_mqs" },
	{ 0xf41872ce, "release_firmware" },
	{ 0xecb30410, "request_firmware" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x37a0cba, "kfree" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8a7d7e3c, "netif_carrier_on" },
	{ 0x7a9a1802, "usb_autopm_put_interface" },
	{ 0x4c8673f5, "__dev_kfree_skb_irq" },
	{ 0x8a7f62f2, "netif_tx_wake_queue" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x195ff614, "usb_unlink_urb" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x2ac79575, "free_netdev" },
	{ 0xc0ed0fc, "usb_free_coherent" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0x8c42b265, "unregister_netdev" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0x61ac380c, "netif_rx" },
	{ 0xbfba76ab, "eth_type_trans" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0x9d669763, "memcpy" },
	{ 0xe69bfc72, "__netdev_alloc_skb" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v03E8p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0901d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0506p03E8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0506p11F8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p4000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0565p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0565p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0565p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05E9p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05E9p0009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp2202d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E1p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E1p0009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p4000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C9pB010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v085Ap0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v085Ap0009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v087Dp5704d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0951p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v095Ap3003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10BDp1427d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1342p0204d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D2p0400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1485p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1485p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1645p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1645p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1645p8005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p0323d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p4000d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "AC21FD2CBA8DFF856913D39");

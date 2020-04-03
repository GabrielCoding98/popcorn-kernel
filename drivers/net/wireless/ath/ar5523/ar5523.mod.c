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
	{ 0x99bb8806, "memmove" },
	{ 0x4a7ded88, "ieee80211_rx_irqsafe" },
	{ 0x16317e74, "ieee80211_get_hdrlen_from_skb" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0x4c8673f5, "__dev_kfree_skb_irq" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xaeb5647e, "ieee80211_register_hw" },
	{ 0x21cca90f, "usb_alloc_coherent" },
	{ 0xf41872ce, "release_firmware" },
	{ 0x37a0cba, "kfree" },
	{ 0xf3f1124e, "usb_bulk_msg" },
	{ 0x5f754e5a, "memset" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xecb30410, "request_firmware" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x9b82f731, "ieee80211_alloc_hw_nm" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xa728d3bd, "ieee80211_stop_queues" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xf4dd5647, "ieee80211_find_sta" },
	{ 0x4e1f44a7, "ieee80211_queue_delayed_work" },
	{ 0x9317a143, "ieee80211_queue_work" },
	{ 0xe6c12171, "complete" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9d669763, "memcpy" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0x2aa6628, "ieee80211_tx_status_irqsafe" },
	{ 0x55c68dd, "skb_pull" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xe1b501a, "ieee80211_free_txskb" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x6ef02d63, "skb_push" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x380f1ede, "ieee80211_wake_queues" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0x2827ae6f, "__alloc_skb" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0xde5033e, "ieee80211_free_hw" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xb066e7c3, "ieee80211_unregister_hw" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0xc0ed0fc, "usb_free_coherent" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,cfg80211";

MODULE_ALIAS("usb:v168Cp0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v168Cp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7802d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3A01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3A02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3A03d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3A04d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3A05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A07d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A08d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1690p0712d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1690p0713d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1690p0710d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1690p0711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v129Bp160Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v129Bp160Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v16ABp7801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v16ABp7802d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v16ABp7811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v16ABp7812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7802d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7803d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4250d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4251d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p5F00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p5F01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep3006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep3007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep3205d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep3206d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep3006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep3007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0826d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0827d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0828d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0829d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1385p4250d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1385p4251d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1385p5F00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1385p5F01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1385p5F02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1385p5F03d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "621985A1368A9E8600DB42D");

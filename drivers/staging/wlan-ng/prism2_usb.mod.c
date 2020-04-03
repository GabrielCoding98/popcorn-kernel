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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xa738c28a, "module_layout" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xfb8949de, "netdev_info" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x9cb5d9a4, "wiphy_free" },
	{ 0x3601d60a, "cfg80211_connect_done" },
	{ 0xb7700415, "param_ops_int" },
	{ 0xf594d368, "netdev_notice" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x5e5db0b1, "cfg80211_inform_bss_data" },
	{ 0xde6ef723, "usb_init_urb" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x8a7d7e3c, "netif_carrier_on" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xcae566cc, "netif_carrier_off" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xe8663ae6, "ieee80211_channel_to_frequency" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x195ff614, "usb_unlink_urb" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xff71b834, "skb_trim" },
	{ 0xe69bfc72, "__netdev_alloc_skb" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0xd4e1b9fa, "netif_rx_ni" },
	{ 0x8a7f62f2, "netif_tx_wake_queue" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe3864e23, "usb_get_status" },
	{ 0x7009370e, "usb_deregister" },
	{ 0x7c32d0f0, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0x1caf4c2b, "wait_for_completion_interruptible" },
	{ 0x2ac79575, "free_netdev" },
	{ 0x81edcd5, "wiphy_unregister" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x328a05f1, "strncpy" },
	{ 0x80fd477, "register_netdev" },
	{ 0xcaa31bfb, "ieee80211_get_channel" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x6ef02d63, "skb_push" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0x55c68dd, "skb_pull" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xdaf574d2, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0x97f34c9f, "cfg80211_roamed" },
	{ 0xc2ecc0ce, "netif_device_detach" },
	{ 0xaf27abd, "cfg80211_put_bss" },
	{ 0xbac1993e, "usb_get_dev" },
	{ 0x18193597, "wiphy_register" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x81fafab5, "usb_reset_device" },
	{ 0x1e3c5edc, "usb_put_dev" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0x2bbe5326, "usb_clear_halt" },
	{ 0x9121be2, "wiphy_new_nm" },
	{ 0x4f685e1, "alloc_netdev_mqs" },
	{ 0xbfba76ab, "eth_type_trans" },
	{ 0xc30abd6, "netdev_err" },
	{ 0x912342a9, "ether_setup" },
	{ 0x418d6c5d, "cfg80211_disconnected" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x829dddab, "netdev_warn" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xa5d8c690, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0xecb30410, "request_firmware" },
	{ 0x7a4497db, "kzfree" },
	{ 0x49970de8, "finish_wait" },
	{ 0x84014ab0, "skb_dequeue" },
	{ 0x8c42b265, "unregister_netdev" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xe6c12171, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x99bb8806, "memmove" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0xc6f1a572, "cfg80211_scan_done" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0xf41872ce, "release_firmware" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cfg80211";

MODULE_ALIAS("usb:v04BBp0922d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v09AAp3642d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p0408d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p0421d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1915p2236d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp2212d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp2213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0016d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DEp7A01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p1111d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7A01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep006Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0967p0204d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v413Cp8100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B3Bp1601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B3Bp1602d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00EBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F1p3009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F3p0020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2821p3300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3700d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3702d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v50C2p4013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C02p14EAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v124Ap168Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap3503d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2821p3300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0044d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p6106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v124Ap4017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BB2p0302d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9016p182Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0543p0F01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Cp1022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v049Fp0033d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0868B7825F6067D60108798");

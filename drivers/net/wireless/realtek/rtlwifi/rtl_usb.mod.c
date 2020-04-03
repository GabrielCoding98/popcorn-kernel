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
	{ 0xa8a24ea9, "ieee80211_rx_napi" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x6978d7fa, "rtl_deinit_deferred_work" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x39956487, "rtl_deinit_core" },
	{ 0x9d87bf00, "usb_get_from_anchor" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xb066e7c3, "ieee80211_unregister_hw" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa7ffef14, "__dev_kfree_skb_any" },
	{ 0xbdd38aa9, "usb_unanchor_urb" },
	{ 0xe69bfc72, "__netdev_alloc_skb" },
	{ 0xccfae988, "_rtl_dbg_trace" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0x89f25045, "skb_queue_purge" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x9b82f731, "ieee80211_alloc_hw_nm" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xd1fa87fd, "rtl_init_core" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x4197a940, "rtl_action_proc" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xf8ff6add, "rtl_lps_change_work_callback" },
	{ 0x78efee5, "rtl_init_rx_config" },
	{ 0x55c68dd, "skb_pull" },
	{ 0xc0ed0fc, "usb_free_coherent" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xdaf574d2, "skb_queue_tail" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0xbac1993e, "usb_get_dev" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1e3c5edc, "usb_put_dev" },
	{ 0x2aa6628, "ieee80211_tx_status_irqsafe" },
	{ 0xdfd865e1, "rtl_ops" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xaeb5647e, "ieee80211_register_hw" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xde5033e, "ieee80211_free_hw" },
	{ 0x84014ab0, "skb_dequeue" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xe6c12171, "complete" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x21cca90f, "usb_alloc_coherent" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0xc17f0d9d, "rtl_beacon_statistic" },
	{ 0xd3c2ecf6, "usb_anchor_urb" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,rtlwifi";


MODULE_INFO(srcversion, "2E8C8902D6CCE2762606AC3");
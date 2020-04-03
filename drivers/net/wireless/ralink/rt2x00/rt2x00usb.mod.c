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
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x4998222d, "hrtimer_cancel" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0x2d81f7fa, "rt2x00lib_resume" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xbdd38aa9, "usb_unanchor_urb" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xbd7f0c67, "rt2x00lib_dmastart" },
	{ 0x225eaef6, "rt2x00queue_flush_queue" },
	{ 0x9b82f731, "ieee80211_alloc_hw_nm" },
	{ 0x7c32d0f0, "printk" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0x8d76e3b4, "rt2x00queue_for_each_entry" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x980e3f5c, "rt2x00queue_start_queue" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x8527be9a, "rt2x00lib_remove_dev" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0xbac1993e, "usb_get_dev" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0x8621ad7a, "rt2x00queue_get_entry" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x81fafab5, "usb_reset_device" },
	{ 0x2107ff9f, "rt2x00lib_rxdone" },
	{ 0x1e3c5edc, "usb_put_dev" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x5b586cbc, "hrtimer_init" },
	{ 0xde5033e, "ieee80211_free_hw" },
	{ 0xd11d4424, "rt2x00lib_txdone_noinfo" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0xb0740d56, "rt2x00lib_dmadone" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0x499b7b28, "rt2x00lib_probe_dev" },
	{ 0xeb4dc435, "rt2x00queue_stop_queue" },
	{ 0x42306b31, "rt2x00lib_suspend" },
	{ 0xd3c2ecf6, "usb_anchor_urb" },
	{ 0x74c166f0, "__skb_pad" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00lib,mac80211";


MODULE_INFO(srcversion, "D86C2F8730AD8DAE1BB3994");

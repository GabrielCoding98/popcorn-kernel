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
	{ 0x4a7ded88, "ieee80211_rx_irqsafe" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xcfa20ed8, "ieee80211_beacon_get_tim" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xb066e7c3, "ieee80211_unregister_hw" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x2bcb1801, "_dev_notice" },
	{ 0xff71b834, "skb_trim" },
	{ 0xa728d3bd, "ieee80211_stop_queues" },
	{ 0xe69bfc72, "__netdev_alloc_skb" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7009370e, "usb_deregister" },
	{ 0x9b82f731, "ieee80211_alloc_hw_nm" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe1b501a, "ieee80211_free_txskb" },
	{ 0x380f1ede, "ieee80211_wake_queues" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x6ef02d63, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x122170da, "crc32_le" },
	{ 0x55c68dd, "skb_pull" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0xbac1993e, "usb_get_dev" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x81fafab5, "usb_reset_device" },
	{ 0x1e3c5edc, "usb_put_dev" },
	{ 0x2aa6628, "ieee80211_tx_status_irqsafe" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x16317e74, "ieee80211_get_hdrlen_from_skb" },
	{ 0xaeb5647e, "ieee80211_register_hw" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xffd36f42, "ieee80211_get_tkip_p2k" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0xecb30410, "request_firmware" },
	{ 0xde5033e, "ieee80211_free_hw" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0xf41872ce, "release_firmware" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,cfg80211";

MODULE_ALIAS("usb:v160Ap3184d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "A1D0AB1558126280100553C");

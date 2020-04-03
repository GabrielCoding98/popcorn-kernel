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
	{ 0x1d85ba13, "skb_queue_head" },
	{ 0x4a7ded88, "ieee80211_rx_irqsafe" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x812d3483, "dev_printk" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xcfa20ed8, "ieee80211_beacon_get_tim" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xb066e7c3, "ieee80211_unregister_hw" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa7ffef14, "__dev_kfree_skb_any" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0x63a7c28c, "bitmap_find_free_region" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x8b14c401, "__ieee80211_get_assoc_led_name" },
	{ 0x82da2b54, "skb_unlink" },
	{ 0xff71b834, "skb_trim" },
	{ 0xbcd63380, "of_led_classdev_register" },
	{ 0xe69bfc72, "__netdev_alloc_skb" },
	{ 0x5280ab99, "ieee80211_stop_queue" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x89f25045, "skb_queue_purge" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x9b82f731, "ieee80211_alloc_hw_nm" },
	{ 0x34908c14, "print_hex_dump_bytes" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xe1b501a, "ieee80211_free_txskb" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x6ef02d63, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x55c68dd, "skb_pull" },
	{ 0x310917fe, "sort" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x4e1f44a7, "ieee80211_queue_delayed_work" },
	{ 0xdaf574d2, "skb_queue_tail" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xb13d82a8, "__ieee80211_get_rx_led_name" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xda8c7c39, "wiphy_rfkill_set_hw_state" },
	{ 0x2aa6628, "ieee80211_tx_status_irqsafe" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0x574c2e74, "bitmap_release_region" },
	{ 0xc104368b, "wait_for_completion_interruptible_timeout" },
	{ 0x2310137e, "__ieee80211_get_tx_led_name" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xc3ee566f, "ieee80211_wake_queue" },
	{ 0xa8ec7d34, "crc_ccitt" },
	{ 0x964b76d6, "__ieee80211_get_radio_led_name" },
	{ 0x16317e74, "ieee80211_get_hdrlen_from_skb" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xaeb5647e, "ieee80211_register_hw" },
	{ 0xf999f91b, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x9294652f, "regulatory_hint" },
	{ 0x981c5400, "ieee80211_beacon_loss" },
	{ 0x9d669763, "memcpy" },
	{ 0xde5033e, "ieee80211_free_hw" },
	{ 0x84014ab0, "skb_dequeue" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe6c12171, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0x99bb8806, "memmove" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xb1e6a94e, "skb_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,cfg80211,crc-ccitt";


MODULE_INFO(srcversion, "3D8A130A9758EE1619865A9");

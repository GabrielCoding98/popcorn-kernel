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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xc2451da0, "mem_map" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xc068440e, "__kfifo_alloc" },
	{ 0x9317a143, "ieee80211_queue_work" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xd484febe, "arm_dma_ops" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x571487fa, "ieee80211_rts_get" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xcfa20ed8, "ieee80211_beacon_get_tim" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb066e7c3, "ieee80211_unregister_hw" },
	{ 0xe8663ae6, "ieee80211_channel_to_frequency" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa7ffef14, "__dev_kfree_skb_any" },
	{ 0x1c8bcace, "led_classdev_resume" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc4a1f3f9, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0xdd953e2e, "wiphy_rfkill_start_polling" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xff71b834, "skb_trim" },
	{ 0xa728d3bd, "ieee80211_stop_queues" },
	{ 0xbcd63380, "of_led_classdev_register" },
	{ 0xe69bfc72, "__netdev_alloc_skb" },
	{ 0x5280ab99, "ieee80211_stop_queue" },
	{ 0x6f4158e1, "ieee80211_tx_status" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe1b501a, "ieee80211_free_txskb" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x6ef02d63, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x55c68dd, "skb_pull" },
	{ 0x1c78b03d, "ieee80211_ctstoself_get" },
	{ 0x2fab74ee, "wiphy_rfkill_stop_polling" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x4e1f44a7, "ieee80211_queue_delayed_work" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xa43d3b8f, "of_get_mac_address" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xda8c7c39, "wiphy_rfkill_set_hw_state" },
	{ 0x810d003c, "ieee80211_get_buffered_bc" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xc3ee566f, "ieee80211_wake_queue" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x16317e74, "ieee80211_get_hdrlen_from_skb" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xaeb5647e, "ieee80211_register_hw" },
	{ 0xf999f91b, "led_classdev_unregister" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x1c39cadd, "ieee80211_tx_status_ext" },
	{ 0x7520d19a, "led_classdev_suspend" },
	{ 0xecb30410, "request_firmware" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x99bb8806, "memmove" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0x93ac5725, "ieee80211_iterate_interfaces" },
	{ 0xf41872ce, "release_firmware" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,cfg80211";


MODULE_INFO(srcversion, "508FC77274F2CAE07B17D74");

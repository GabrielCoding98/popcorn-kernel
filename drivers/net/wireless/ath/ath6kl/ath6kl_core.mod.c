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
	{ 0x85bf72bd, "register_netdevice" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x9cb5d9a4, "wiphy_free" },
	{ 0x3601d60a, "cfg80211_connect_done" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x5e5db0b1, "cfg80211_inform_bss_data" },
	{ 0xcd01f81a, "cfg80211_conn_failed" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xaf0fe58e, "cfg80211_chandef_create" },
	{ 0x8a7d7e3c, "netif_carrier_on" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x638ca6b2, "skb_copy" },
	{ 0xd0d9eeb6, "down_interruptible" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xcae566cc, "netif_carrier_off" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x40e3d731, "cfg80211_rx_mgmt" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xbea16bc4, "cfg80211_check_station_change" },
	{ 0xff71b834, "skb_trim" },
	{ 0x8b032221, "cfg80211_mgmt_tx_status" },
	{ 0xe69bfc72, "__netdev_alloc_skb" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x89f25045, "skb_queue_purge" },
	{ 0x89108a8b, "cfg80211_pmksa_candidate_notify" },
	{ 0x5f754e5a, "memset" },
	{ 0xd4e1b9fa, "netif_rx_ni" },
	{ 0x8a7f62f2, "netif_tx_wake_queue" },
	{ 0xdc9819b, "cfg80211_get_bss" },
	{ 0x7c32d0f0, "printk" },
	{ 0x9577d577, "ethtool_op_get_link" },
	{ 0x71c90087, "memcmp" },
	{ 0x2ac79575, "free_netdev" },
	{ 0x81edcd5, "wiphy_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xf1fafe32, "cfg80211_del_sta_sinfo" },
	{ 0xcaa31bfb, "ieee80211_get_channel" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x6ef02d63, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x8cabecbb, "cfg80211_michael_mic_failure" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x55c68dd, "skb_pull" },
	{ 0x98e9ac18, "cfg80211_ibss_joined" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x32a10f1e, "cfg80211_get_drvinfo" },
	{ 0xdaf574d2, "skb_queue_tail" },
	{ 0xb6255798, "skb_copy_expand" },
	{ 0x45ddbfb2, "cfg80211_ch_switch_notify" },
	{ 0x97f34c9f, "cfg80211_roamed" },
	{ 0xaf27abd, "cfg80211_put_bss" },
	{ 0x18193597, "wiphy_register" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0x7292029d, "cfg80211_ready_on_channel" },
	{ 0x9121be2, "wiphy_new_nm" },
	{ 0x4f685e1, "alloc_netdev_mqs" },
	{ 0xbfba76ab, "eth_type_trans" },
	{ 0x7b87be7d, "of_find_compatible_node" },
	{ 0x440200b7, "pskb_expand_head" },
	{ 0x9a3f3efa, "of_get_property" },
	{ 0x912342a9, "ether_setup" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x418d6c5d, "cfg80211_disconnected" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x730cc64d, "netdev_set_default_ethtool_ops" },
	{ 0x9265c8b, "unregister_netdevice_queue" },
	{ 0xc6de46cc, "cfg80211_new_sta" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xb9f3ed41, "cfg80211_find_ie_match" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x9294652f, "regulatory_hint" },
	{ 0x9d669763, "memcpy" },
	{ 0x581cde4e, "up" },
	{ 0xf9e73082, "scnprintf" },
	{ 0xecb30410, "request_firmware" },
	{ 0x49970de8, "finish_wait" },
	{ 0x84014ab0, "skb_dequeue" },
	{ 0xdbdf6cc9, "cfg80211_remain_on_channel_expired" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0x99bb8806, "memmove" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0x12212969, "cfg80211_sched_scan_stopped" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc6f1a572, "cfg80211_scan_done" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0xa3a5078a, "of_node_put" },
	{ 0x73a7a766, "param_ops_uint" },
	{ 0xf41872ce, "release_firmware" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x48e1c241, "cfg80211_cqm_txe_notify" },
	{ 0x613aa4f0, "cfg80211_sched_scan_results" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cfg80211";


MODULE_INFO(srcversion, "9010F1B6A23360E8323702A");

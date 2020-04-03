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
	{ 0x7d54146, "param_ops_bool" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x1e9707b6, "simple_attr_release" },
	{ 0xf2a96c90, "simple_attr_write" },
	{ 0x7872f29e, "simple_attr_read" },
	{ 0x53f3a891, "generic_file_llseek" },
	{ 0xa5d8c690, "eth_validate_addr" },
	{ 0xf4dfc5b1, "eth_mac_addr" },
	{ 0x8c42b265, "unregister_netdev" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xa9fb6b48, "rhashtable_destroy" },
	{ 0xc2744d2, "unregister_pernet_device" },
	{ 0x9f2f2b7d, "platform_driver_unregister" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0x2ac79575, "free_netdev" },
	{ 0x85bf72bd, "register_netdevice" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe486386c, "dev_alloc_name" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x4f685e1, "alloc_netdev_mqs" },
	{ 0xd8a2e825, "__class_create" },
	{ 0x2f913dd, "genl_unregister_family" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0x4ea0e40e, "genl_register_family" },
	{ 0x3af31b31, "__platform_driver_register" },
	{ 0xc484571a, "register_pernet_device" },
	{ 0x50f3d972, "rhashtable_init" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xaf14b1ab, "ieee80211_probereq_get" },
	{ 0x29344e4, "ieee80211_csa_finish" },
	{ 0xc2bcbbfc, "ieee80211_csa_is_complete" },
	{ 0xcfa20ed8, "ieee80211_beacon_get_tim" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x1dc4fef7, "rht_bucket_nested_insert" },
	{ 0x7c32d0f0, "printk" },
	{ 0xc3d579c5, "rhashtable_insert_slow" },
	{ 0xa176f7d9, "debugfs_create_file" },
	{ 0x4c7a68b0, "debugfs_create_dir" },
	{ 0x9294652f, "regulatory_hint" },
	{ 0xaeb5647e, "ieee80211_register_hw" },
	{ 0x203f9fac, "tasklet_hrtimer_init" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x216bda5e, "wiphy_apply_custom_regulatory" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc98d9c82, "device_bind_driver" },
	{ 0x851dd2f, "device_create" },
	{ 0x9b82f731, "ieee80211_alloc_hw_nm" },
	{ 0xdcd02f6d, "class_destroy" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x21af32f7, "ida_free" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xde5033e, "ieee80211_free_hw" },
	{ 0x16eee64a, "device_unregister" },
	{ 0x18e6f7e2, "device_release_driver" },
	{ 0xb066e7c3, "ieee80211_unregister_hw" },
	{ 0x98ce88a8, "debugfs_remove_recursive" },
	{ 0xe3bfa810, "genl_notify" },
	{ 0xc4a0ebb4, "netlink_broadcast" },
	{ 0xec2404f1, "init_net" },
	{ 0xd2616b59, "ieee80211_get_tx_rates" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x2aa6628, "ieee80211_tx_status_irqsafe" },
	{ 0x82da2b54, "skb_unlink" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xff71b834, "skb_trim" },
	{ 0x97255bdf, "strlen" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x4998222d, "hrtimer_cancel" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x78c85e38, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x17047d20, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x6a750398, "ieee80211_scan_completed" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x1c13573f, "ieee80211_ready_on_channel" },
	{ 0xbfa3c292, "ieee80211_remain_on_channel_expired" },
	{ 0x4e1f44a7, "ieee80211_queue_delayed_work" },
	{ 0xd54c4094, "cfg80211_vendor_cmd_reply" },
	{ 0x41c59f1, "__cfg80211_alloc_reply_skb" },
	{ 0xe2d8acce, "__cfg80211_send_event_skb" },
	{ 0x4be448db, "__cfg80211_alloc_event_skb" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x4a16dd15, "hrtimer_start_range_ns" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x26c73e5f, "__free_pages" },
	{ 0x951bc872, "skb_add_rx_frag" },
	{ 0xe69bfc72, "__netdev_alloc_skb" },
	{ 0x55509270, "__alloc_pages_nodemask" },
	{ 0xbcffa1a6, "dst_release" },
	{ 0x9a4b6579, "__secpath_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x638ca6b2, "skb_copy" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xc2451da0, "mem_map" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xdaf574d2, "skb_queue_tail" },
	{ 0x9e6e325e, "netlink_unicast" },
	{ 0x6d2fc5a6, "net_namespace_list" },
	{ 0xee76d1f5, "nla_put_64bit" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0x68183b3b, "nla_put" },
	{ 0x19f6c533, "genlmsg_put" },
	{ 0xe1b501a, "ieee80211_free_txskb" },
	{ 0x84014ab0, "skb_dequeue" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x61ac380c, "netif_rx" },
	{ 0x6ef02d63, "skb_push" },
	{ 0xb6255798, "skb_copy_expand" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xc4a1f3f9, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0x584da264, "ieee80211_radar_detected" },
	{ 0xf8e6d2df, "simple_attr_open" },
	{ 0xeb00f3ca, "ida_alloc_range" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4a7ded88, "ieee80211_rx_irqsafe" },
	{ 0x9d669763, "memcpy" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0x2827ae6f, "__alloc_skb" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x5f754e5a, "memset" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xffe34ebe, "rht_bucket_nested" },
	{ 0x71c90087, "memcmp" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x912342a9, "ether_setup" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,cfg80211";


MODULE_INFO(srcversion, "090E8EC3AECF6955F7210F1");
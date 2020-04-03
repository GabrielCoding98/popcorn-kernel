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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x4aad9426, "init_dummy_netdev" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xf246c744, "trace_handle_return" },
	{ 0x4c7a68b0, "debugfs_create_dir" },
	{ 0xc2451da0, "mem_map" },
	{ 0x3f5118ae, "debugfs_create_u8" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xa28ac79e, "ieee80211_sta_ps_transition" },
	{ 0x1fe912f1, "netdev_alloc_frag" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xd484febe, "arm_dma_ops" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf7f21a6e, "no_llseek" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0xb066e7c3, "ieee80211_unregister_hw" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa66f7710, "trace_event_buffer_reserve" },
	{ 0xaffad1c7, "bpf_trace_run3" },
	{ 0x7c2aadfa, "netif_napi_del" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x5280ab99, "ieee80211_stop_queue" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xf08c67de, "napi_alloc_frag" },
	{ 0x383f0d29, "debugfs_create_u32" },
	{ 0xe778d361, "trace_define_field" },
	{ 0x5f754e5a, "memset" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0x1e7f43fc, "ieee80211_tx_dequeue" },
	{ 0x9b82f731, "ieee80211_alloc_hw_nm" },
	{ 0xe1b501a, "ieee80211_free_txskb" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x71c90087, "memcmp" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0xf36b611a, "of_find_property" },
	{ 0x71f07272, "wiphy_read_of_freq_limits" },
	{ 0x434ac834, "ieee80211_sta_pspoll" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xf3825143, "trace_event_reg" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x702535bb, "ieee80211_find_sta_by_ifaddr" },
	{ 0xeb1cf171, "netif_napi_add" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x1e9707b6, "simple_attr_release" },
	{ 0x4baa365d, "debugfs_create_file_unsafe" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xebb8de7, "perf_trace_run_bpf_submit" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0x9a5e09c4, "devm_kmemdup" },
	{ 0x4e1f44a7, "ieee80211_queue_delayed_work" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xab945a16, "__iowrite32_copy" },
	{ 0x9ad574d9, "debugfs_attr_read" },
	{ 0x3ff924c9, "of_get_child_by_name" },
	{ 0xd2fa76ce, "build_skb" },
	{ 0xc121b314, "devm_of_led_classdev_register" },
	{ 0xdaf574d2, "skb_queue_tail" },
	{ 0xa43d3b8f, "of_get_mac_address" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdfc02c51, "trace_event_ignore_this_pid" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x9b884ed0, "debugfs_create_devm_seqfile" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x91b925ae, "ieee80211_sta_uapsd_trigger" },
	{ 0x1317364, "ieee80211_sta_set_buffered" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x288ba3f1, "ieee80211_get_key_rx_seq" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0xf660a8c3, "ieee80211_send_bar" },
	{ 0xd2616b59, "ieee80211_get_tx_rates" },
	{ 0x20484055, "napi_complete_done" },
	{ 0xfca8c91e, "trace_event_buffer_commit" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xc3ee566f, "ieee80211_wake_queue" },
	{ 0x4cefdb5b, "event_triggers_call" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xb6b87306, "__ieee80211_create_tpt_led_trigger" },
	{ 0xaeb5647e, "ieee80211_register_hw" },
	{ 0x4d831bfa, "trace_event_raw_init" },
	{ 0xa1cab5d2, "debugfs_create_blob" },
	{ 0x951bc872, "skb_add_rx_frag" },
	{ 0x49970de8, "finish_wait" },
	{ 0x84014ab0, "skb_dequeue" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x75614dbd, "trace_raw_output_prep" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0x3c93ea25, "trace_seq_printf" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0x96f49763, "of_property_read_variable_u32_array" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0xc573ac32, "debugfs_attr_write" },
	{ 0xf8e6d2df, "simple_attr_open" },
	{ 0xad51ab3c, "dmam_alloc_coherent" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,cfg80211";


MODULE_INFO(srcversion, "C4A0F8D12264B796F7C042B");

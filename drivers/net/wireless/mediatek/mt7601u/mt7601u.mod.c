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
	{ 0xa8a24ea9, "ieee80211_rx_napi" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf246c744, "trace_handle_return" },
	{ 0x53f3a891, "generic_file_llseek" },
	{ 0x4c7a68b0, "debugfs_create_dir" },
	{ 0xc2451da0, "mem_map" },
	{ 0x226c9b6d, "single_open" },
	{ 0x3f5118ae, "debugfs_create_u8" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xf2863328, "firmware_request_cache" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x759f7158, "single_release" },
	{ 0x491483ea, "seq_puts" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xb066e7c3, "ieee80211_unregister_hw" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xa66f7710, "trace_event_buffer_reserve" },
	{ 0xa176f7d9, "debugfs_create_file" },
	{ 0x8e3afba1, "seq_read" },
	{ 0xaffad1c7, "bpf_trace_run3" },
	{ 0x55509270, "__alloc_pages_nodemask" },
	{ 0xff71b834, "skb_trim" },
	{ 0xa728d3bd, "ieee80211_stop_queues" },
	{ 0x7872f29e, "simple_attr_read" },
	{ 0x5280ab99, "ieee80211_stop_queue" },
	{ 0x6f4158e1, "ieee80211_tx_status" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x383f0d29, "debugfs_create_u32" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xe778d361, "trace_define_field" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x8755eb82, "bpf_trace_run9" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7009370e, "usb_deregister" },
	{ 0x9b82f731, "ieee80211_alloc_hw_nm" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe1b501a, "ieee80211_free_txskb" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x380f1ede, "ieee80211_wake_queues" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xf3825143, "trace_event_reg" },
	{ 0xf63991ee, "usb_poison_urb" },
	{ 0x5a503b0b, "seq_putc" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x6ef02d63, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x1e9707b6, "simple_attr_release" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x55c68dd, "skb_pull" },
	{ 0xc0ed0fc, "usb_free_coherent" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xebb8de7, "perf_trace_run_bpf_submit" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0x9a5e09c4, "devm_kmemdup" },
	{ 0x4e1f44a7, "ieee80211_queue_delayed_work" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x78c85e38, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0x26c73e5f, "__free_pages" },
	{ 0x2827ae6f, "__alloc_skb" },
	{ 0xbac1993e, "usb_get_dev" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdfc02c51, "trace_event_ignore_this_pid" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x81fafab5, "usb_reset_device" },
	{ 0xf3f1124e, "usb_bulk_msg" },
	{ 0x1e3c5edc, "usb_put_dev" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xf660a8c3, "ieee80211_send_bar" },
	{ 0xd46b54dd, "flush_delayed_work" },
	{ 0xd2616b59, "ieee80211_get_tx_rates" },
	{ 0xfca8c91e, "trace_event_buffer_commit" },
	{ 0x440200b7, "pskb_expand_head" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xc3ee566f, "ieee80211_wake_queue" },
	{ 0x4cefdb5b, "event_triggers_call" },
	{ 0x16317e74, "ieee80211_get_hdrlen_from_skb" },
	{ 0x72de6b24, "bpf_trace_run2" },
	{ 0xaeb5647e, "ieee80211_register_hw" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x6b248f3e, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x4d831bfa, "trace_event_raw_init" },
	{ 0x1c39cadd, "ieee80211_tx_status_ext" },
	{ 0x951bc872, "skb_add_rx_frag" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0xecb30410, "request_firmware" },
	{ 0xde5033e, "ieee80211_free_hw" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x75614dbd, "trace_raw_output_prep" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xe6c12171, "complete" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x3c93ea25, "trace_seq_printf" },
	{ 0x99bb8806, "memmove" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0x21cca90f, "usb_alloc_coherent" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0x25133dc6, "bpf_trace_run4" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0xf8e6d2df, "simple_attr_open" },
	{ 0xf41872ce, "release_firmware" },
	{ 0x17047d20, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0xf2a96c90, "simple_attr_write" },
	{ 0x74c166f0, "__skb_pad" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,cfg80211";

MODULE_ALIAS("usb:v0B05p17D3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp760Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp760Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3431d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3434d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp7601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3D04d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2717p4106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2955p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2955p1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2A5Fp1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7710d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "5B7CF3D8AD41A0C24E908EF");

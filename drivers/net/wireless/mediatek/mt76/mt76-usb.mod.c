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
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xf246c744, "trace_handle_return" },
	{ 0xc2451da0, "mem_map" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x1fe912f1, "netdev_alloc_frag" },
	{ 0xa4e8528a, "skb_to_sgvec_nomark" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xa66f7710, "trace_event_buffer_reserve" },
	{ 0xfde8af6d, "mt76_rx_poll_complete" },
	{ 0xaffad1c7, "bpf_trace_run3" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe778d361, "trace_define_field" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xf3825143, "trace_event_reg" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x6ef02d63, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xebb8de7, "perf_trace_run_bpf_submit" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0x4e1f44a7, "ieee80211_queue_delayed_work" },
	{ 0xd2fa76ce, "build_skb" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0x2827ae6f, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdfc02c51, "trace_event_ignore_this_pid" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf3f1124e, "usb_bulk_msg" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0x14152909, "mt76_txq_schedule" },
	{ 0xfca8c91e, "trace_event_buffer_commit" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xc3ee566f, "ieee80211_wake_queue" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x4cefdb5b, "event_triggers_call" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x9d669763, "memcpy" },
	{ 0x4d831bfa, "trace_event_raw_init" },
	{ 0x951bc872, "skb_add_rx_frag" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x75614dbd, "trace_raw_output_prep" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xe6c12171, "complete" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x3c93ea25, "trace_seq_printf" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0x74c166f0, "__skb_pad" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mt76,mac80211";


MODULE_INFO(srcversion, "CDFA48A6CDE014CF1CCDB17");

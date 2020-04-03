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
	{ 0x85bf72bd, "register_netdevice" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xf31bdfbc, "crypto_alloc_skcipher" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf246c744, "trace_handle_return" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x3d3266c9, "ieee802154_hdr_push" },
	{ 0x4998222d, "hrtimer_cancel" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x8d334730, "skb_clone" },
	{ 0x26795fe3, "wpan_phy_new" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa7ffef14, "__dev_kfree_skb_any" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xa66f7710, "trace_event_buffer_reserve" },
	{ 0xaffad1c7, "bpf_trace_run3" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xff71b834, "skb_trim" },
	{ 0xbaa260b1, "ieee802154_hdr_pull" },
	{ 0xe778d361, "trace_define_field" },
	{ 0x4a16dd15, "hrtimer_start_range_ns" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x8a7f62f2, "netif_tx_wake_queue" },
	{ 0xccadb3a7, "bpf_trace_run1" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x2ac79575, "free_netdev" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xf3825143, "trace_event_reg" },
	{ 0xe0a94f0d, "netif_receive_skb" },
	{ 0x4904ed55, "wpan_phy_free" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x7029e5d2, "ieee802154_hdr_peek" },
	{ 0x6ef02d63, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x967361cf, "wpan_phy_register" },
	{ 0xebb8de7, "perf_trace_run_bpf_submit" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xd3ebce7d, "crypto_aead_setkey" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xdaf574d2, "skb_queue_tail" },
	{ 0xb6255798, "skb_copy_expand" },
	{ 0xdfc02c51, "trace_event_ignore_this_pid" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0x4f685e1, "alloc_netdev_mqs" },
	{ 0x7fc61d57, "crypto_destroy_tfm" },
	{ 0xfca8c91e, "trace_event_buffer_commit" },
	{ 0x45432ad6, "wpan_phy_unregister" },
	{ 0xfa0d7ac, "ieee802154_hdr_peek_addrs" },
	{ 0xec1aa6ef, "memzero_explicit" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x9265c8b, "unregister_netdevice_queue" },
	{ 0xa8ec7d34, "crc_ccitt" },
	{ 0x4cefdb5b, "event_triggers_call" },
	{ 0xee2f3cb4, "crypto_aead_setauthsize" },
	{ 0x829dddab, "netdev_warn" },
	{ 0x72de6b24, "bpf_trace_run2" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0x86416877, "crypto_alloc_aead" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xa9487fae, "sg_init_one" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0x9d669763, "memcpy" },
	{ 0x4d831bfa, "trace_event_raw_init" },
	{ 0x643e0ce5, "call_rcu_sched" },
	{ 0xe486386c, "dev_alloc_name" },
	{ 0x5b586cbc, "hrtimer_init" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0x7a4497db, "kzfree" },
	{ 0x84014ab0, "skb_dequeue" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x75614dbd, "trace_raw_output_prep" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x3c93ea25, "trace_seq_printf" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0x25133dc6, "bpf_trace_run4" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x87e2553b, "ieee802154_max_payload" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ieee802154,crc-ccitt";


MODULE_INFO(srcversion, "273821C912B95148B9FC8E2");
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
	{ 0x92b57248, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xafb4e5b2, "iw_handler_set_thrspy" },
	{ 0x402b8281, "__request_module" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x53f3a891, "generic_file_llseek" },
	{ 0x9499d6aa, "proc_create_seq_private" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x97255bdf, "strlen" },
	{ 0x5ca18a2, "_raw_write_lock_irqsave" },
	{ 0xe418e0c6, "proc_create_single_data" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x491483ea, "seq_puts" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x8a7d7e3c, "netif_carrier_on" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x8d334730, "skb_clone" },
	{ 0x638ca6b2, "skb_copy" },
	{ 0xf1f8897e, "lib80211_crypt_delayed_deinit" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0xcae566cc, "netif_carrier_off" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xebd6836c, "remove_proc_entry" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa7ffef14, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x91715312, "sprintf" },
	{ 0x5a7cc4b3, "skb_realloc_headroom" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xff71b834, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xaafd9237, "_raw_write_unlock_irqrestore" },
	{ 0xe69a1920, "proc_remove" },
	{ 0xe69bfc72, "__netdev_alloc_skb" },
	{ 0x61ac380c, "netif_rx" },
	{ 0x50e05ad4, "wireless_spy_update" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x4e70062, "PDE_DATA" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x89f25045, "skb_queue_purge" },
	{ 0x5f754e5a, "memset" },
	{ 0x67cebeb, "proc_mkdir" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7c32d0f0, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0xb69c5cef, "iw_handler_get_spy" },
	{ 0x2ac79575, "free_netdev" },
	{ 0x328a05f1, "strncpy" },
	{ 0x5a503b0b, "seq_putc" },
	{ 0xd724aff0, "wireless_send_event" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x6ef02d63, "skb_push" },
	{ 0xf754d24b, "dev_close" },
	{ 0x24d273d1, "add_timer" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x55c68dd, "skb_pull" },
	{ 0xec2404f1, "init_net" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xc9df578d, "dev_open" },
	{ 0x77c59098, "module_put" },
	{ 0xecfeea0c, "lib80211_get_crypto_ops" },
	{ 0xdaf574d2, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x4f92fbf6, "netif_device_attach" },
	{ 0xc2ecc0ce, "netif_device_detach" },
	{ 0x152cd3e, "eth_header_cache_update" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x669485c3, "iw_handler_get_thrspy" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0xbfba76ab, "eth_type_trans" },
	{ 0x440200b7, "pskb_expand_head" },
	{ 0x912342a9, "ether_setup" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x9265c8b, "unregister_netdevice_queue" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xff1e9dd8, "seq_list_start" },
	{ 0xaa47d5fe, "proc_create_data" },
	{ 0xa5d8c690, "eth_validate_addr" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0xd63558ec, "iw_handler_set_spy" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x202aef0f, "eth_header_cache" },
	{ 0x3e872658, "param_array_ops" },
	{ 0x84014ab0, "skb_dequeue" },
	{ 0xf346231f, "seq_list_start_head" },
	{ 0x8c42b265, "unregister_netdev" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0x5f55907f, "dev_queue_xmit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0xc41bc980, "iwe_stream_add_value" },
	{ 0x2d96c4e3, "eth_header" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xca0304ef, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
	{ 0x98fc2eaf, "alloc_etherdev_mqs" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=lib80211";


MODULE_INFO(srcversion, "59B7A2C750601A14D6917C9");

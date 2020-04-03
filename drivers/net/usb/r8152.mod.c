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
	{ 0x9577d577, "ethtool_op_get_link" },
	{ 0xa5d8c690, "eth_validate_addr" },
	{ 0x7009370e, "usb_deregister" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x23a7fbfb, "usb_driver_set_configuration" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x80fd477, "register_netdev" },
	{ 0xeb1cf171, "netif_napi_add" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x98fc2eaf, "alloc_etherdev_mqs" },
	{ 0x81fafab5, "usb_reset_device" },
	{ 0x8a7d7e3c, "netif_carrier_on" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0xf594d368, "netdev_notice" },
	{ 0x122170da, "crc32_le" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x632780, "work_busy" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xf293cf4, "usb_enable_lpm" },
	{ 0x131db64a, "system_long_wq" },
	{ 0x4f92fbf6, "netif_device_attach" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x12a38747, "usleep_range" },
	{ 0xc6cbbc89, "capable" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8a7f62f2, "netif_tx_wake_queue" },
	{ 0x65bb120f, "skb_checksum_help" },
	{ 0x315de896, "__pskb_pull_tail" },
	{ 0xaf149172, "__skb_gso_segment" },
	{ 0x44da5d0f, "__csum_ipv6_magic" },
	{ 0x440200b7, "pskb_expand_head" },
	{ 0x6a252d7c, "usb_autopm_get_interface_async" },
	{ 0xd54cb7d2, "netif_schedule_queue" },
	{ 0xa7ffef14, "__dev_kfree_skb_any" },
	{ 0xf92e4913, "skb_copy_bits" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x20484055, "napi_complete_done" },
	{ 0xbfba76ab, "eth_type_trans" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0xec1f6335, "__napi_alloc_skb" },
	{ 0x1010cbc6, "napi_gro_receive" },
	{ 0xcae566cc, "netif_carrier_off" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0x86acc3b2, "skb_tstamp_tx" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xdaf574d2, "skb_queue_tail" },
	{ 0x26710f58, "usb_queue_reset_device" },
	{ 0xb81960ca, "snprintf" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xd3faa271, "mii_nway_restart" },
	{ 0x519a0b10, "mii_ethtool_get_link_ksettings" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x829dddab, "netdev_warn" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x90f71f7b, "__napi_schedule" },
	{ 0x7c65012b, "napi_schedule_prep" },
	{ 0x5de6316b, "usb_autopm_put_interface_async" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x2ac79575, "free_netdev" },
	{ 0x8c42b265, "unregister_netdev" },
	{ 0x7c2aadfa, "netif_napi_del" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0x7a9a1802, "usb_autopm_put_interface" },
	{ 0xb53dfafc, "usb_autopm_get_interface" },
	{ 0xc30abd6, "netdev_err" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0xfb8949de, "netdev_info" },
	{ 0xc2ecc0ce, "netif_device_detach" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x4aeb3e54, "napi_disable" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x5f754e5a, "memset" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0BDAp8050d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8050d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0BDAp8152d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8152d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0BDAp8153d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8153d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v045Ep07ABd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v045Ep07ABd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v045Ep07C6d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v045Ep07C6d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04E8pA101d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v04E8pA101d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp304Fd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp304Fd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp3062d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp3062d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp3069d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp3069d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp7205d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp7205d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp720Cd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp720Cd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp7214d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp7214d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFpA387d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFpA387d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v13B1p0041d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v13B1p0041d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0955p09FFd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0955p09FFd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v2357p0601d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v2357p0601d*dc*dsc*dp*ic02isc06ip00in*");

MODULE_INFO(srcversion, "15E8CDB0417042E2457F3BE");

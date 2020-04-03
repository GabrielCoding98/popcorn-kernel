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
	{ 0x1d85ba13, "skb_queue_head" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf66eeee5, "ssb_dma_translation" },
	{ 0x37788505, "device_remove_file" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xe573386, "bcma_pmu_spuravoid_pllupdate" },
	{ 0x7435b5d9, "dma_release_from_dev_coherent" },
	{ 0xc2451da0, "mem_map" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x9317a143, "ieee80211_queue_work" },
	{ 0xd484febe, "arm_dma_ops" },
	{ 0x571487fa, "ieee80211_rts_get" },
	{ 0x8d334730, "skb_clone" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xeb23bf6, "ssb_commit_settings" },
	{ 0xcfa20ed8, "ieee80211_beacon_get_tim" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xb066e7c3, "ieee80211_unregister_hw" },
	{ 0xe8663ae6, "ieee80211_channel_to_frequency" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa7ffef14, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xaee328cf, "ssb_bus_powerup" },
	{ 0xdd953e2e, "wiphy_rfkill_start_polling" },
	{ 0x8b14c401, "__ieee80211_get_assoc_led_name" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x930662db, "__ssb_driver_register" },
	{ 0x8ae137ee, "param_ops_string" },
	{ 0xbcd63380, "of_led_classdev_register" },
	{ 0xe69bfc72, "__netdev_alloc_skb" },
	{ 0x5280ab99, "ieee80211_stop_queue" },
	{ 0x6f4158e1, "ieee80211_tx_status" },
	{ 0xf7ec2e9e, "dma_alloc_from_dev_coherent" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0x5f754e5a, "memset" },
	{ 0xd1192384, "ssb_driver_unregister" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x9b82f731, "ieee80211_alloc_hw_nm" },
	{ 0xa6a317c7, "bcma_core_dma_translation" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xe1b501a, "ieee80211_free_txskb" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x380f1ede, "ieee80211_wake_queues" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xe3152d9e, "ssb_device_enable" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x663af275, "bcma_core_set_clockmode" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x373bd767, "__bcma_driver_register" },
	{ 0x55c68dd, "skb_pull" },
	{ 0x1c78b03d, "ieee80211_ctstoself_get" },
	{ 0xd2bacca5, "request_firmware_nowait" },
	{ 0x4e1f44a7, "ieee80211_queue_delayed_work" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x4de2e10c, "device_create_file" },
	{ 0xdaf574d2, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x40980a6f, "bcma_chipco_gpio_control" },
	{ 0xb13d82a8, "__ieee80211_get_rx_led_name" },
	{ 0x5219b20c, "bcma_core_is_enabled" },
	{ 0x9ff1238b, "ssb_pmu_set_ldo_voltage" },
	{ 0x12a38747, "usleep_range" },
	{ 0x642f386f, "ssb_device_disable" },
	{ 0xfc635f79, "bcma_core_enable" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xda8c7c39, "wiphy_rfkill_set_hw_state" },
	{ 0xdf932c3e, "bcma_driver_unregister" },
	{ 0xf332f65, "bcma_core_pll_ctl" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xb678366f, "int_sqrt" },
	{ 0x2fc7504b, "hwrng_register" },
	{ 0x2310137e, "__ieee80211_get_tx_led_name" },
	{ 0x1b9e5385, "ssb_set_devtypedata" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xc3ee566f, "ieee80211_wake_queue" },
	{ 0x4e6c1191, "ieee80211_generic_frame_duration" },
	{ 0x964b76d6, "__ieee80211_get_radio_led_name" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xaeb5647e, "ieee80211_register_hw" },
	{ 0xf999f91b, "led_classdev_unregister" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xecb30410, "request_firmware" },
	{ 0xde5033e, "ieee80211_free_hw" },
	{ 0xdd9bdfb0, "ssb_bus_may_powerdown" },
	{ 0x84014ab0, "skb_dequeue" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xe6c12171, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0xe20d2e1b, "ssb_pmu_set_ldo_paref" },
	{ 0x5fc2c660, "hwrng_unregister" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0x8d844562, "ssb_device_is_enabled" },
	{ 0xc1abf46f, "bcma_core_disable" },
	{ 0xf41872ce, "release_firmware" },
	{ 0x535402fd, "ieee80211_get_tkip_p1k_iv" },
	{ 0xe8c5ce96, "ieee80211_get_response_rate" },
	{ 0xc1514a3b, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,ssb,bcma,cfg80211";

MODULE_ALIAS("bcma:m04BFid0812rev11cl*");
MODULE_ALIAS("bcma:m04BFid0812rev15cl*");
MODULE_ALIAS("bcma:m04BFid0812rev17cl*");
MODULE_ALIAS("bcma:m04BFid0812rev18cl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Ccl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Dcl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Ecl*");
MODULE_ALIAS("bcma:m04BFid0812rev28cl*");
MODULE_ALIAS("bcma:m04BFid0812rev2Acl*");
MODULE_ALIAS("ssb:v4243id0812rev05*");
MODULE_ALIAS("ssb:v4243id0812rev06*");
MODULE_ALIAS("ssb:v4243id0812rev07*");
MODULE_ALIAS("ssb:v4243id0812rev09*");
MODULE_ALIAS("ssb:v4243id0812rev0A*");
MODULE_ALIAS("ssb:v4243id0812rev0B*");
MODULE_ALIAS("ssb:v4243id0812rev0C*");
MODULE_ALIAS("ssb:v4243id0812rev0D*");
MODULE_ALIAS("ssb:v4243id0812rev0F*");
MODULE_ALIAS("ssb:v4243id0812rev10*");

MODULE_INFO(srcversion, "04C61B6BC3EACDBBEDD6BDE");

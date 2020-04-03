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
	{ 0x4a7ded88, "ieee80211_rx_irqsafe" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xcfa20ed8, "ieee80211_beacon_get_tim" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb066e7c3, "ieee80211_unregister_hw" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa7ffef14, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xa728d3bd, "ieee80211_stop_queues" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x9b82f731, "ieee80211_alloc_hw_nm" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x380f1ede, "ieee80211_wake_queues" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x6ef02d63, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x55c68dd, "skb_pull" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xdaf574d2, "skb_queue_tail" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2aa6628, "ieee80211_tx_status_irqsafe" },
	{ 0x1000e51, "schedule" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x810d003c, "ieee80211_get_buffered_bc" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xaeb5647e, "ieee80211_register_hw" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xde5033e, "ieee80211_free_hw" },
	{ 0x49970de8, "finish_wait" },
	{ 0x84014ab0, "skb_dequeue" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x99bb8806, "memmove" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211";


MODULE_INFO(srcversion, "F4FDC0A6FB00EED49893C34");

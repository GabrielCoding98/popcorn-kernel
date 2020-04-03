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
	{ 0x72f91250, "sdio_writeb" },
	{ 0x3aafcf0f, "sdio_readb" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x454e5b22, "__pm_runtime_idle" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x77d4959e, "lbs_resume" },
	{ 0xc50dd909, "sdio_writesb" },
	{ 0x63394e74, "sdio_enable_func" },
	{ 0x60ddd8ea, "sdio_claim_irq" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xd0457df7, "lbs_stop_card" },
	{ 0xcaf7b102, "__pm_runtime_resume" },
	{ 0xfd35a350, "netdev_alert" },
	{ 0xaf2d8076, "__lbs_cmd" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x9e276c72, "sdio_get_host_pm_caps" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe69bfc72, "__netdev_alloc_skb" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5d3bffda, "lbs_start_card" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7c32d0f0, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x908f4432, "lbs_queue_event" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x6ee3d030, "lbs_get_firmware_async" },
	{ 0x803f04cc, "lbs_cmd_copyback" },
	{ 0xbcf8ccc7, "lbs_suspend" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x373966f6, "sdio_readsb" },
	{ 0x9f8430ce, "sdio_unregister_driver" },
	{ 0xef816d59, "lbs_remove_card" },
	{ 0x1a6cf8f4, "sdio_f0_writeb" },
	{ 0xfa569107, "sdio_set_host_pm_flags" },
	{ 0xe87e5620, "lbs_process_rxed_packet" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xef838b74, "sdio_release_irq" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x84435365, "lbs_host_to_card_done" },
	{ 0x1000e51, "schedule" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0x5b42e2a8, "sdio_align_size" },
	{ 0xb9033a41, "lbs_add_card" },
	{ 0xd8076311, "sdio_f0_readb" },
	{ 0x78743d93, "mmc_add_host" },
	{ 0xc30abd6, "netdev_err" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x5851c12c, "mmc_remove_host" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x44ca1fb9, "sdio_register_driver" },
	{ 0x5ec0d393, "sdio_claim_host" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0xc21c68b2, "sdio_set_block_size" },
	{ 0xad6eb39b, "sdio_disable_func" },
	{ 0xe2f4a4a9, "sdio_release_host" },
	{ 0x975fe03c, "lbs_notify_command_response" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libertas";

MODULE_ALIAS("sdio:c*v02DFd9103*");
MODULE_ALIAS("sdio:c*v02DFd9104*");

MODULE_INFO(srcversion, "895013DA65E11C9E6CC1E17");

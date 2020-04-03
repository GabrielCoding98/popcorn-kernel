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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xad96e2e5, "mwifiex_cancel_hs" },
	{ 0xc50dd909, "sdio_writesb" },
	{ 0x63394e74, "sdio_enable_func" },
	{ 0x60ddd8ea, "sdio_claim_irq" },
	{ 0xf7fce0c5, "mmc_hw_reset" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x95616b4f, "mwifiex_disable_auto_ds" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa7ffef14, "__dev_kfree_skb_any" },
	{ 0xd62b861c, "mwifiex_process_sleep_confirm_resp" },
	{ 0x999e8297, "vfree" },
	{ 0xb698274e, "mwifiex_main_process" },
	{ 0x91715312, "sprintf" },
	{ 0x8bbf9f0c, "mwifiex_prepare_fw_dump_info" },
	{ 0x9e276c72, "sdio_get_host_pm_caps" },
	{ 0xff71b834, "skb_trim" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xcf89a944, "_mwifiex_dbg" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0x5f754e5a, "memset" },
	{ 0xc6bf8a50, "mwifiex_add_card" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7c32d0f0, "printk" },
	{ 0xa3f7cb9a, "of_match_node" },
	{ 0x1fda2825, "mwifiex_shutdown_sw" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x55c68dd, "skb_pull" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x31bd9748, "mwifiex_alloc_dma_align_buf" },
	{ 0x373966f6, "sdio_readsb" },
	{ 0x9f8430ce, "sdio_unregister_driver" },
	{ 0xfa569107, "sdio_set_host_pm_flags" },
	{ 0x78fc5dca, "mwifiex_dnld_fw" },
	{ 0xdaf574d2, "skb_queue_tail" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0xef838b74, "sdio_release_irq" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd8076311, "sdio_f0_readb" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x78a2a5a7, "mwifiex_reinit_sw" },
	{ 0xcd8e8d85, "mwifiex_handle_rx_packet" },
	{ 0xb88420fc, "mwifiex_deauthenticate_all" },
	{ 0xf7f26801, "mwifiex_remove_card" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xfedea83, "mwifiex_enable_hs" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x83160412, "mwifiex_upload_device_dump" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x99bb8806, "memmove" },
	{ 0x44ca1fb9, "sdio_register_driver" },
	{ 0x5ec0d393, "sdio_claim_host" },
	{ 0x5832feb9, "mwifiex_drv_info_dump" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0xec20da3e, "mwifiex_init_shutdown_fw" },
	{ 0xc21c68b2, "sdio_set_block_size" },
	{ 0xad6eb39b, "sdio_disable_func" },
	{ 0xe2f4a4a9, "sdio_release_host" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mwifiex";

MODULE_ALIAS("sdio:c*v02DFd9116*");
MODULE_ALIAS("sdio:c*v02DFd9119*");
MODULE_ALIAS("sdio:c*v02DFd9129*");
MODULE_ALIAS("sdio:c*v02DFd912D*");
MODULE_ALIAS("sdio:c*v02DFd9135*");
MODULE_ALIAS("sdio:c*v02DFd9139*");
MODULE_ALIAS("sdio:c*v02DFd9141*");

MODULE_INFO(srcversion, "8943F0A26198AF544BFA663");

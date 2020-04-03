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
	{ 0x9f8430ce, "sdio_unregister_driver" },
	{ 0x44ca1fb9, "sdio_register_driver" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xf41872ce, "release_firmware" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xecb30410, "request_firmware" },
	{ 0xc21c68b2, "sdio_set_block_size" },
	{ 0x60ddd8ea, "sdio_claim_irq" },
	{ 0x870bc2cd, "btmrvl_register_hdev" },
	{ 0xb79b396a, "btmrvl_add_card" },
	{ 0xce1cc28f, "devm_request_threaded_irq" },
	{ 0x124e1e49, "irq_of_parse_and_map" },
	{ 0xa3f7cb9a, "of_match_node" },
	{ 0x63394e74, "sdio_enable_func" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xc5cfd532, "btmrvl_send_module_cfg_cmd" },
	{ 0xf5f27281, "btmrvl_remove_card" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x7c32d0f0, "printk" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7029e7c, "btmrvl_interrupt" },
	{ 0x37a0cba, "kfree" },
	{ 0xc50dd909, "sdio_writesb" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x83bf7eb3, "hci_recv_frame" },
	{ 0x431a1189, "btmrvl_check_evtpkt" },
	{ 0xa90acb2d, "btmrvl_process_event" },
	{ 0x55c68dd, "skb_pull" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0x373966f6, "sdio_readsb" },
	{ 0x2827ae6f, "__alloc_skb" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xad6eb39b, "sdio_disable_func" },
	{ 0xef838b74, "sdio_release_irq" },
	{ 0xfa569107, "sdio_set_host_pm_flags" },
	{ 0xafaf47ad, "btmrvl_enable_hs" },
	{ 0xe502b699, "hci_suspend_dev" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xcc341882, "hci_resume_dev" },
	{ 0x9e276c72, "sdio_get_host_pm_caps" },
	{ 0xe2b4ae43, "dev_coredumpv" },
	{ 0x9d669763, "memcpy" },
	{ 0xe914e41e, "strcpy" },
	{ 0x97255bdf, "strlen" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x999e8297, "vfree" },
	{ 0x12a38747, "usleep_range" },
	{ 0xd7442057, "bt_info" },
	{ 0x3aafcf0f, "sdio_readb" },
	{ 0xd8076311, "sdio_f0_readb" },
	{ 0x91715312, "sprintf" },
	{ 0x5f754e5a, "memset" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x47022514, "bt_err" },
	{ 0xe2f4a4a9, "sdio_release_host" },
	{ 0x72f91250, "sdio_writeb" },
	{ 0x5ec0d393, "sdio_claim_host" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=btmrvl,bluetooth";

MODULE_ALIAS("sdio:c*v02DFd9105*");
MODULE_ALIAS("sdio:c*v02DFd911A*");
MODULE_ALIAS("sdio:c*v02DFd911B*");
MODULE_ALIAS("sdio:c*v02DFd912A*");
MODULE_ALIAS("sdio:c*v02DFd9136*");
MODULE_ALIAS("sdio:c*v02DFd912E*");
MODULE_ALIAS("sdio:c*v02DFd9142*");

MODULE_INFO(srcversion, "B8A9893DDA8D5F9CA90E9CE");

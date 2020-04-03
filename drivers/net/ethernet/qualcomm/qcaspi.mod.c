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
	{ 0xfb8949de, "netdev_info" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4c7a68b0, "debugfs_create_dir" },
	{ 0x226c9b6d, "single_open" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x759f7158, "single_release" },
	{ 0x491483ea, "seq_puts" },
	{ 0x8a7d7e3c, "netif_carrier_on" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0xcae566cc, "netif_carrier_off" },
	{ 0xdb8d0549, "__spi_register_driver" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa176f7d9, "debugfs_create_file" },
	{ 0xe379d7db, "spi_setup" },
	{ 0x2b6ddf3f, "qcafrm_fsm_decode" },
	{ 0x98ce88a8, "debugfs_remove_recursive" },
	{ 0x8e3afba1, "seq_read" },
	{ 0x880737be, "kthread_create_on_node" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe69bfc72, "__netdev_alloc_skb" },
	{ 0xd54cb7d2, "netif_schedule_queue" },
	{ 0x5f754e5a, "memset" },
	{ 0xb28a9ad, "qcafrm_create_footer" },
	{ 0xd4e1b9fa, "netif_rx_ni" },
	{ 0x8a7f62f2, "netif_tx_wake_queue" },
	{ 0x7c32d0f0, "printk" },
	{ 0x9577d577, "ethtool_op_get_link" },
	{ 0xdccedf20, "kthread_stop" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xf36b611a, "of_find_property" },
	{ 0x2ac79575, "free_netdev" },
	{ 0x38916bc8, "driver_unregister" },
	{ 0x80fd477, "register_netdev" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x6ef02d63, "skb_push" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xd8340e2c, "spi_sync" },
	{ 0x41da0375, "qcafrm_create_header" },
	{ 0xb6255798, "skb_copy_expand" },
	{ 0xa43d3b8f, "of_get_mac_address" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xbfba76ab, "eth_type_trans" },
	{ 0x1c2a847c, "wake_up_process" },
	{ 0xc30abd6, "netdev_err" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x829dddab, "netdev_warn" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xa5d8c690, "eth_validate_addr" },
	{ 0x6b248f3e, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xaba90337, "dev_trans_start" },
	{ 0x8c42b265, "unregister_netdev" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0xf4dfc5b1, "eth_mac_addr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x98fc2eaf, "alloc_etherdev_mqs" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=qca_7k_common";

MODULE_ALIAS("spi:qca7000");
MODULE_ALIAS("of:N*T*Cqca,qca7000");
MODULE_ALIAS("of:N*T*Cqca,qca7000C*");

MODULE_INFO(srcversion, "192BD2D6BAF0023C1A06A40");

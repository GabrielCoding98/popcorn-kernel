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
	{ 0x2d3385d3, "system_wq" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x3d946a8e, "l2cap_chan_set_defaults" },
	{ 0x53f3a891, "generic_file_llseek" },
	{ 0x226c9b6d, "single_open" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x759f7158, "single_release" },
	{ 0x5adf7986, "l2cap_chan_del" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x8d334730, "skb_clone" },
	{ 0x638ca6b2, "skb_copy" },
	{ 0x1875a657, "lowpan_header_compress" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xa7df5d36, "l2cap_chan_send" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xde6b30f5, "l2cap_add_psm" },
	{ 0xa176f7d9, "debugfs_create_file" },
	{ 0x8e3afba1, "seq_read" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x7872f29e, "simple_attr_read" },
	{ 0x47022514, "bt_err" },
	{ 0x58dee9a2, "l2cap_chan_close" },
	{ 0xd7442057, "bt_info" },
	{ 0x5717dd3d, "hci_get_route" },
	{ 0x5f754e5a, "memset" },
	{ 0xd4e1b9fa, "netif_rx_ni" },
	{ 0x4a88fc8a, "l2cap_chan_put" },
	{ 0x8a7f62f2, "netif_tx_wake_queue" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x71c90087, "memcmp" },
	{ 0xd8e4198d, "baswap" },
	{ 0x2ac79575, "free_netdev" },
	{ 0xd04deb9c, "iov_iter_kvec" },
	{ 0x25897c6, "debugfs_remove" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf754d24b, "dev_close" },
	{ 0x1e9707b6, "simple_attr_release" },
	{ 0x55c68dd, "skb_pull" },
	{ 0xc9df578d, "dev_open" },
	{ 0x9c399c9d, "lowpan_header_decompress" },
	{ 0x77c59098, "module_put" },
	{ 0xb6255798, "skb_copy_expand" },
	{ 0xbe92fca, "lowpan_unregister_netdev" },
	{ 0x8dbeafeb, "bt_debugfs" },
	{ 0x2827ae6f, "__alloc_skb" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0x4f685e1, "alloc_netdev_mqs" },
	{ 0x4fc494d4, "l2cap_chan_connect" },
	{ 0x9ca099f2, "netdev_notify_peers" },
	{ 0x7ae10a84, "lowpan_register_netdev" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x172c85e0, "l2cap_chan_create" },
	{ 0x6b248f3e, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0xf8e6d2df, "simple_attr_open" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xca0304ef, "try_module_get" },
	{ 0xf2a96c90, "simple_attr_write" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth,6lowpan";


MODULE_INFO(srcversion, "FA70B9666CD71A3417E127E");

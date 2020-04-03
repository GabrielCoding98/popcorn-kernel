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
	{ 0xf5037a81, "kmem_cache_destroy" },
	{ 0x402b8281, "__request_module" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x6913facd, "sock_init_data" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x491483ea, "seq_puts" },
	{ 0x8d334730, "skb_clone" },
	{ 0xac18f4b5, "proc_create_net_single" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xebd6836c, "remove_proc_entry" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x1186f5aa, "sock_get_timestamp" },
	{ 0x4e70062, "PDE_DATA" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x89f25045, "skb_queue_purge" },
	{ 0xcddd1273, "sock_efree" },
	{ 0x5f754e5a, "memset" },
	{ 0xd4e1b9fa, "netif_rx_ni" },
	{ 0xc5b301c3, "unregister_pernet_subsys" },
	{ 0xb58e5d6d, "sk_alloc" },
	{ 0x7c32d0f0, "printk" },
	{ 0x5a503b0b, "seq_putc" },
	{ 0x9f1691c2, "kmem_cache_free" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xd7222e4a, "proc_mkdir_data" },
	{ 0xeadab5fe, "sk_free" },
	{ 0x7386b24e, "dev_remove_pack" },
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x77c59098, "module_put" },
	{ 0x8a5e867d, "proto_register" },
	{ 0xaae6676e, "kmem_cache_alloc" },
	{ 0x512050d6, "sock_register" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0xbeb1684a, "proto_unregister" },
	{ 0xd10120b, "register_pernet_subsys" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xaddc9a8a, "kmem_cache_create" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x643e0ce5, "call_rcu_sched" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0xaef5f8c0, "dev_add_pack" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x5f55907f, "dev_queue_xmit" },
	{ 0xca0304ef, "try_module_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "E0B525C5299754AA246FC05");

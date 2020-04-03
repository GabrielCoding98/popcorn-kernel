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
	{ 0xa39b3730, "release_sock" },
	{ 0x402b8281, "__request_module" },
	{ 0x37788505, "device_remove_file" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x6913facd, "sock_init_data" },
	{ 0x9b388444, "get_zeroed_page" },
	{ 0x9499d6aa, "proc_create_seq_private" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x7481b148, "refcount_add_checked" },
	{ 0x3f498953, "send_sig" },
	{ 0x491483ea, "seq_puts" },
	{ 0x3b697738, "_raw_read_lock" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0xebd6836c, "remove_proc_entry" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x278ebdf3, "skb_recv_datagram" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa7ffef14, "__dev_kfree_skb_any" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x6122337, "atomic_notifier_chain_unregister" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0x9f1ead19, "sock_no_sendpage" },
	{ 0x1186f5aa, "sock_get_timestamp" },
	{ 0x91625fc4, "sock_no_mmap" },
	{ 0xfe0bbbd2, "atomic_notifier_call_chain" },
	{ 0x4e70062, "PDE_DATA" },
	{ 0x89f25045, "skb_queue_purge" },
	{ 0x5f754e5a, "memset" },
	{ 0x8ef37932, "sock_no_socketpair" },
	{ 0xbf56919d, "device_del" },
	{ 0x3521c7a0, "device_register" },
	{ 0xb58e5d6d, "sk_alloc" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe31e36c2, "skb_copy_datagram_iter" },
	{ 0x7c32d0f0, "printk" },
	{ 0x6addc74a, "lock_sock_nested" },
	{ 0x71c90087, "memcmp" },
	{ 0x9cc3f147, "class_unregister" },
	{ 0x5a503b0b, "seq_putc" },
	{ 0x7fb630b3, "sock_no_listen" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xd7222e4a, "proc_mkdir_data" },
	{ 0xcaad4aa4, "sock_no_accept" },
	{ 0x88096862, "sock_wake_async" },
	{ 0xeadab5fe, "sk_free" },
	{ 0x988694e4, "noop_llseek" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xec2404f1, "init_net" },
	{ 0x58c9433d, "__class_register" },
	{ 0x4de2e10c, "device_create_file" },
	{ 0x7a2fcc76, "__sock_recv_ts_and_drops" },
	{ 0x77c59098, "module_put" },
	{ 0xdaf574d2, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x8a5e867d, "proto_register" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x2827ae6f, "__alloc_skb" },
	{ 0x5a163a5, "put_device" },
	{ 0xa8223179, "refcount_dec_checked" },
	{ 0x5865576, "sock_get_timestampns" },
	{ 0x33e9e0a2, "atomic_notifier_chain_register" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x512050d6, "sock_register" },
	{ 0x1000e51, "schedule" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0xbeb1684a, "proto_unregister" },
	{ 0xa7359096, "_copy_from_iter_full" },
	{ 0x4d634803, "_raw_write_lock_irq" },
	{ 0x92601b1f, "refcount_sub_and_test_checked" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xad6ee3b9, "remove_proc_subtree" },
	{ 0xaa47d5fe, "proc_create_data" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x6578533e, "prepare_to_wait" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x49970de8, "finish_wait" },
	{ 0x84014ab0, "skb_dequeue" },
	{ 0xf346231f, "seq_list_start_head" },
	{ 0x95dbe078, "__get_user_2" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0x184c48a6, "dev_set_name" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0xca0304ef, "try_module_get" },
	{ 0xd6ac2994, "skb_free_datagram" },
	{ 0x6c07d933, "add_uevent_var" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "572ABCE11C0482354D0E6A8");

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
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xa5efee18, "can_rx_register" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x6e1698a, "hrtimer_active" },
	{ 0x1f1e05af, "hrtimer_forward" },
	{ 0xe7afa015, "sock_no_setsockopt" },
	{ 0x9a42e92f, "sock_no_getsockopt" },
	{ 0x4998222d, "hrtimer_cancel" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0x70ac069d, "can_proto_unregister" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xac18f4b5, "proc_create_net_single" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x3c5cbdce, "sock_no_getname" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xebd6836c, "remove_proc_entry" },
	{ 0x1817b77d, "sock_queue_rcv_skb" },
	{ 0x278ebdf3, "skb_recv_datagram" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x76c86bc0, "sock_i_ino" },
	{ 0x91715312, "sprintf" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x9f1ead19, "sock_no_sendpage" },
	{ 0x91625fc4, "sock_no_mmap" },
	{ 0x4e70062, "PDE_DATA" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xcddd1273, "sock_efree" },
	{ 0x4a16dd15, "hrtimer_start_range_ns" },
	{ 0x5f754e5a, "memset" },
	{ 0x8ef37932, "sock_no_socketpair" },
	{ 0xc5b301c3, "unregister_pernet_subsys" },
	{ 0x7c32d0f0, "printk" },
	{ 0xb7218171, "sock_no_bind" },
	{ 0x6addc74a, "lock_sock_nested" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x5a503b0b, "seq_putc" },
	{ 0x7fb630b3, "sock_no_listen" },
	{ 0xd7222e4a, "proc_mkdir_data" },
	{ 0xcaad4aa4, "sock_no_accept" },
	{ 0x3fa44dc1, "dev_get_by_index_rcu" },
	{ 0xeadab5fe, "sk_free" },
	{ 0x9996dce7, "dev_get_by_index" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x6f67a396, "sock_no_shutdown" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x507fb9a6, "can_ioctl" },
	{ 0x2bb802a5, "can_send" },
	{ 0x7a2fcc76, "__sock_recv_ts_and_drops" },
	{ 0x2827ae6f, "__alloc_skb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9074747d, "datagram_poll" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0xa7359096, "_copy_from_iter_full" },
	{ 0x92ed3292, "can_proto_register" },
	{ 0xd10120b, "register_pernet_subsys" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x5b586cbc, "hrtimer_init" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xfb5d7eb5, "can_rx_unregister" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0x1520ce45, "_copy_to_iter" },
	{ 0xe914e41e, "strcpy" },
	{ 0xd6ac2994, "skb_free_datagram" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can";


MODULE_INFO(srcversion, "A451EDC5BE08EEF697723C1");
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
	{ 0x6913facd, "sock_init_data" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc2451da0, "mem_map" },
	{ 0x9499d6aa, "proc_create_seq_private" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x220039cb, "from_kuid_munged" },
	{ 0xe7afa015, "sock_no_setsockopt" },
	{ 0xb96a6616, "unregister_net_sysctl_table" },
	{ 0x9a42e92f, "sock_no_getsockopt" },
	{ 0x491483ea, "seq_puts" },
	{ 0x86eb0c08, "proc_dointvec" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x8d334730, "skb_clone" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x638ca6b2, "skb_copy" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xebd6836c, "remove_proc_entry" },
	{ 0x1817b77d, "sock_queue_rcv_skb" },
	{ 0x278ebdf3, "skb_recv_datagram" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0x75bda77a, "seq_hlist_next" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x91715312, "sprintf" },
	{ 0x5a7cc4b3, "skb_realloc_headroom" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xff71b834, "skb_trim" },
	{ 0x9f1ead19, "sock_no_sendpage" },
	{ 0x315de896, "__pskb_pull_tail" },
	{ 0x1186f5aa, "sock_get_timestamp" },
	{ 0x91625fc4, "sock_no_mmap" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x89f25045, "skb_queue_purge" },
	{ 0x8ef37932, "sock_no_socketpair" },
	{ 0x67cebeb, "proc_mkdir" },
	{ 0xb58e5d6d, "sk_alloc" },
	{ 0xe31e36c2, "skb_copy_datagram_iter" },
	{ 0x7c32d0f0, "printk" },
	{ 0x6addc74a, "lock_sock_nested" },
	{ 0x3dfc897c, "seq_hlist_start_head" },
	{ 0x7fb630b3, "sock_no_listen" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x6ef02d63, "skb_push" },
	{ 0xcaad4aa4, "sock_no_accept" },
	{ 0xeadab5fe, "sk_free" },
	{ 0x7386b24e, "dev_remove_pack" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x24d273d1, "add_timer" },
	{ 0x55c68dd, "skb_pull" },
	{ 0xec2404f1, "init_net" },
	{ 0x2454f84f, "register_snap_client" },
	{ 0x6f67a396, "sock_no_shutdown" },
	{ 0xdaf574d2, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x8a5e867d, "proto_register" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x2827ae6f, "__alloc_skb" },
	{ 0xa8223179, "refcount_dec_checked" },
	{ 0x5865576, "sock_get_timestampns" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9074747d, "datagram_poll" },
	{ 0x512050d6, "sock_register" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0xbeb1684a, "proto_unregister" },
	{ 0xa7359096, "_copy_from_iter_full" },
	{ 0x4f685e1, "alloc_netdev_mqs" },
	{ 0x13fafa56, "sock_alloc_send_skb" },
	{ 0x29215055, "__dev_get_by_name" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x2180499f, "unregister_snap_client" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0x84014ab0, "skb_dequeue" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xaef5f8c0, "dev_add_pack" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x5f55907f, "dev_queue_xmit" },
	{ 0xa8b136b2, "register_net_sysctl" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0x61c76b3a, "proc_dointvec_jiffies" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x4c755711, "sock_i_uid" },
	{ 0xaa84b849, "dev_mc_add_global" },
	{ 0xd6ac2994, "skb_free_datagram" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=psnap";


MODULE_INFO(srcversion, "AA8C809A1B628DA0C781F2C");

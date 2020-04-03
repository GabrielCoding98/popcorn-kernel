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
	{ 0x7aadaf17, "class_find_device" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1d85ba13, "skb_queue_head" },
	{ 0xa39b3730, "release_sock" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x6913facd, "sock_init_data" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x4ea0e40e, "genl_register_family" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x97255bdf, "strlen" },
	{ 0x2f913dd, "genl_unregister_family" },
	{ 0xe7afa015, "sock_no_setsockopt" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0xfe90c4a6, "_find_first_zero_bit_le" },
	{ 0x9a42e92f, "sock_no_getsockopt" },
	{ 0x99757dae, "sock_no_ioctl" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x3b697738, "_raw_read_lock" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x8d334730, "skb_clone" },
	{ 0x638ca6b2, "skb_copy" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x3c5cbdce, "sock_no_getname" },
	{ 0x1817b77d, "sock_queue_rcv_skb" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x278ebdf3, "skb_recv_datagram" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x4cabed9, "rfkill_register" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x82da2b54, "skb_unlink" },
	{ 0xff71b834, "skb_trim" },
	{ 0x91625fc4, "sock_no_mmap" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x89f25045, "skb_queue_purge" },
	{ 0x5f754e5a, "memset" },
	{ 0x8ef37932, "sock_no_socketpair" },
	{ 0x6b0a44e, "__sock_recv_wifi_status" },
	{ 0xbf56919d, "device_del" },
	{ 0xb58e5d6d, "sk_alloc" },
	{ 0x161e6ed6, "class_dev_iter_init" },
	{ 0x4c2324db, "rfkill_alloc" },
	{ 0xe31e36c2, "skb_copy_datagram_iter" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xb7218171, "sock_no_bind" },
	{ 0x6addc74a, "lock_sock_nested" },
	{ 0x71c90087, "memcmp" },
	{ 0x9cc3f147, "class_unregister" },
	{ 0x21af32f7, "ida_free" },
	{ 0x68183b3b, "nla_put" },
	{ 0x84b183ae, "strncmp" },
	{ 0x7fb630b3, "sock_no_listen" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x6ef02d63, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x9425caca, "_raw_write_lock" },
	{ 0xcaad4aa4, "sock_no_accept" },
	{ 0xeadab5fe, "sk_free" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x9e6e325e, "netlink_unicast" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x8d93858d, "device_add" },
	{ 0x55c68dd, "skb_pull" },
	{ 0xec2404f1, "init_net" },
	{ 0x58c9433d, "__class_register" },
	{ 0xa28cae56, "devm_kfree" },
	{ 0x6f67a396, "sock_no_shutdown" },
	{ 0x5bdd9653, "__sock_recv_timestamp" },
	{ 0x77c59098, "module_put" },
	{ 0xdaf574d2, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x8a5e867d, "proto_register" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x2827ae6f, "__alloc_skb" },
	{ 0xc4a0ebb4, "netlink_broadcast" },
	{ 0x5a163a5, "put_device" },
	{ 0xa8223179, "refcount_dec_checked" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x9074747d, "datagram_poll" },
	{ 0x512050d6, "sock_register" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0xbeb1684a, "proto_unregister" },
	{ 0xa7359096, "_copy_from_iter_full" },
	{ 0x7606430e, "class_dev_iter_exit" },
	{ 0x6b3e867a, "genl_family_attrbuf" },
	{ 0x13fafa56, "sock_alloc_send_skb" },
	{ 0xccdb82a3, "__pskb_copy_fclone" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x2f2dd7e5, "sock_no_connect" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x9d669763, "memcpy" },
	{ 0x19f6c533, "genlmsg_put" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xcc739430, "sock_no_sendmsg" },
	{ 0x6cdc5c6b, "nla_strlcpy" },
	{ 0x1017cd77, "device_initialize" },
	{ 0xcd00abbc, "add_wait_queue_exclusive" },
	{ 0xc0763484, "rfkill_blocked" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0x84014ab0, "skb_dequeue" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x184c48a6, "dev_set_name" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0xca0304ef, "try_module_get" },
	{ 0x5f1540eb, "class_dev_iter_next" },
	{ 0xeb00f3ca, "ida_alloc_range" },
	{ 0xd6ac2994, "skb_free_datagram" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rfkill";


MODULE_INFO(srcversion, "F99030D63F198CA4F4742C5");

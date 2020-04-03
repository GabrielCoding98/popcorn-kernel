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
	{ 0x1d85ba13, "skb_queue_head" },
	{ 0xc6b5f66f, "hid_add_device" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x6913facd, "sock_init_data" },
	{ 0x527b55b4, "hid_ignore" },
	{ 0x64ac2467, "up_read" },
	{ 0xd29b0c43, "kernel_sendmsg" },
	{ 0x82a5d3cd, "sockfd_lookup" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xe7afa015, "sock_no_setsockopt" },
	{ 0x2480112f, "hid_parse_report" },
	{ 0x9a42e92f, "sock_no_getsockopt" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x3c5cbdce, "sock_no_getname" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xf6b8d3e2, "bt_sock_register" },
	{ 0x880737be, "kthread_create_on_node" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf4c8bfb6, "hid_input_report" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xf1c2ed95, "down_read" },
	{ 0x47022514, "bt_err" },
	{ 0xd7442057, "bt_info" },
	{ 0x315de896, "__pskb_pull_tail" },
	{ 0xc1ea1c86, "input_event" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x91625fc4, "sock_no_mmap" },
	{ 0x2ce02b4, "sock_no_recvmsg" },
	{ 0xdee81031, "bt_sock_unlink" },
	{ 0x89f25045, "skb_queue_purge" },
	{ 0x5f754e5a, "memset" },
	{ 0x8ef37932, "sock_no_socketpair" },
	{ 0xa91c72f2, "l2cap_conn_put" },
	{ 0xb58e5d6d, "sk_alloc" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x538b2377, "l2cap_is_socket" },
	{ 0xb7218171, "sock_no_bind" },
	{ 0x71c90087, "memcmp" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x328a05f1, "strncpy" },
	{ 0x7fb630b3, "sock_no_listen" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xcaad4aa4, "sock_no_accept" },
	{ 0xeadab5fe, "sk_free" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x8fea24bd, "bt_sock_unregister" },
	{ 0x55c68dd, "skb_pull" },
	{ 0x25c777e3, "up_write" },
	{ 0xec2404f1, "init_net" },
	{ 0x76e18a1a, "down_write" },
	{ 0x90745321, "fput" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6f67a396, "sock_no_shutdown" },
	{ 0xaed1299a, "bt_sock_link" },
	{ 0xdaf574d2, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x8a5e867d, "proto_register" },
	{ 0x2827ae6f, "__alloc_skb" },
	{ 0x5a163a5, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7ad52565, "input_register_device" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0xbeb1684a, "proto_unregister" },
	{ 0x6c70ce1c, "l2cap_register_user" },
	{ 0xa9b9b6d2, "__module_put_and_exit" },
	{ 0x1c2a847c, "wake_up_process" },
	{ 0xa1dbf8d4, "hid_destroy_device" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x375f45e2, "hid_allocate_device" },
	{ 0xf56635ce, "l2cap_conn_get" },
	{ 0x47d7efde, "get_device" },
	{ 0xf7350193, "__module_get" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x2f2dd7e5, "sock_no_connect" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xd0fbda78, "input_unregister_device" },
	{ 0xcc739430, "sock_no_sendmsg" },
	{ 0xee768af3, "set_user_nice" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0x49970de8, "finish_wait" },
	{ 0x2947386, "bt_procfs_init" },
	{ 0x84014ab0, "skb_dequeue" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0x96a07eb8, "bt_procfs_cleanup" },
	{ 0x4dec6038, "memscan" },
	{ 0xefc04f31, "l2cap_unregister_user" },
	{ 0x6df65bc1, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";


MODULE_INFO(srcversion, "87294FA2AE731D91D1C61FE");

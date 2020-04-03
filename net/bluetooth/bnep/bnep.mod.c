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
	{ 0x6913facd, "sock_init_data" },
	{ 0x64ac2467, "up_read" },
	{ 0xd29b0c43, "kernel_sendmsg" },
	{ 0x82a5d3cd, "sockfd_lookup" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xe7afa015, "sock_no_setsockopt" },
	{ 0x9a42e92f, "sock_no_getsockopt" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x3c5cbdce, "sock_no_getname" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0xf6b8d3e2, "bt_sock_register" },
	{ 0x880737be, "kthread_create_on_node" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xf1c2ed95, "down_read" },
	{ 0x47022514, "bt_err" },
	{ 0xd7442057, "bt_info" },
	{ 0x315de896, "__pskb_pull_tail" },
	{ 0x91625fc4, "sock_no_mmap" },
	{ 0x2ce02b4, "sock_no_recvmsg" },
	{ 0xdee81031, "bt_sock_unlink" },
	{ 0x5f754e5a, "memset" },
	{ 0xd4e1b9fa, "netif_rx_ni" },
	{ 0x8ef37932, "sock_no_socketpair" },
	{ 0x8a7f62f2, "netif_tx_wake_queue" },
	{ 0xb58e5d6d, "sk_alloc" },
	{ 0x538b2377, "l2cap_is_socket" },
	{ 0xb7218171, "sock_no_bind" },
	{ 0x71c90087, "memcmp" },
	{ 0xd8e4198d, "baswap" },
	{ 0x2ac79575, "free_netdev" },
	{ 0x80fd477, "register_netdev" },
	{ 0x7fb630b3, "sock_no_listen" },
	{ 0xcaad4aa4, "sock_no_accept" },
	{ 0xeadab5fe, "sk_free" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x8fea24bd, "bt_sock_unregister" },
	{ 0x55c68dd, "skb_pull" },
	{ 0x25c777e3, "up_write" },
	{ 0xec2404f1, "init_net" },
	{ 0x76e18a1a, "down_write" },
	{ 0x90745321, "fput" },
	{ 0x6f67a396, "sock_no_shutdown" },
	{ 0xaed1299a, "bt_sock_link" },
	{ 0x77c59098, "module_put" },
	{ 0xdaf574d2, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x8a5e867d, "proto_register" },
	{ 0x2827ae6f, "__alloc_skb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0xbeb1684a, "proto_unregister" },
	{ 0x4f685e1, "alloc_netdev_mqs" },
	{ 0xbfba76ab, "eth_type_trans" },
	{ 0xa9b9b6d2, "__module_put_and_exit" },
	{ 0x1c2a847c, "wake_up_process" },
	{ 0x912342a9, "ether_setup" },
	{ 0xf7350193, "__module_get" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x2f2dd7e5, "sock_no_connect" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0xa5d8c690, "eth_validate_addr" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x9d669763, "memcpy" },
	{ 0x6d87b69, "crc32_be" },
	{ 0xcc739430, "sock_no_sendmsg" },
	{ 0xee768af3, "set_user_nice" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0x2947386, "bt_procfs_init" },
	{ 0x84014ab0, "skb_dequeue" },
	{ 0x8c42b265, "unregister_netdev" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x96a07eb8, "bt_procfs_cleanup" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";


MODULE_INFO(srcversion, "EE2904DC6B5F1151D5BBE0F");

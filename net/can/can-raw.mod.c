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
	{ 0xa5efee18, "can_rx_register" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x70ac069d, "can_proto_unregister" },
	{ 0x8d334730, "skb_clone" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x1817b77d, "sock_queue_rcv_skb" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x278ebdf3, "skb_recv_datagram" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x9f1ead19, "sock_no_sendpage" },
	{ 0x91625fc4, "sock_no_mmap" },
	{ 0x5f754e5a, "memset" },
	{ 0x8ef37932, "sock_no_socketpair" },
	{ 0x7c32d0f0, "printk" },
	{ 0x6addc74a, "lock_sock_nested" },
	{ 0x7fb630b3, "sock_no_listen" },
	{ 0xcaad4aa4, "sock_no_accept" },
	{ 0x437a0d6d, "__sock_tx_timestamp" },
	{ 0xeadab5fe, "sk_free" },
	{ 0x9996dce7, "dev_get_by_index" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x6f67a396, "sock_no_shutdown" },
	{ 0x507fb9a6, "can_ioctl" },
	{ 0x2bb802a5, "can_send" },
	{ 0x7a2fcc76, "__sock_recv_ts_and_drops" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9074747d, "datagram_poll" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0xa7359096, "_copy_from_iter_full" },
	{ 0x92ed3292, "can_proto_register" },
	{ 0x13fafa56, "sock_alloc_send_skb" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x2f2dd7e5, "sock_no_connect" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0xfb5d7eb5, "can_rx_unregister" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0x1520ce45, "_copy_to_iter" },
	{ 0xd6ac2994, "skb_free_datagram" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can";


MODULE_INFO(srcversion, "B7EE842BB5BDB012356121C");

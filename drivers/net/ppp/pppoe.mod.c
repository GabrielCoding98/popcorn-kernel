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
	{ 0x91625fc4, "sock_no_mmap" },
	{ 0x9a42e92f, "sock_no_getsockopt" },
	{ 0xe7afa015, "sock_no_setsockopt" },
	{ 0x6f67a396, "sock_no_shutdown" },
	{ 0x7fb630b3, "sock_no_listen" },
	{ 0xdca06ec7, "pppox_ioctl" },
	{ 0x9074747d, "datagram_poll" },
	{ 0xcaad4aa4, "sock_no_accept" },
	{ 0x8ef37932, "sock_no_socketpair" },
	{ 0xb7218171, "sock_no_bind" },
	{ 0xe0ff7a18, "unregister_pppox_proto" },
	{ 0x7386b24e, "dev_remove_pack" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc2744d2, "unregister_pernet_device" },
	{ 0xbeb1684a, "proto_unregister" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xaef5f8c0, "dev_add_pack" },
	{ 0x28db02b1, "register_pppox_proto" },
	{ 0x8a5e867d, "proto_register" },
	{ 0xc484571a, "register_pernet_device" },
	{ 0x847b8731, "proc_create_net_data" },
	{ 0x491483ea, "seq_puts" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0xebd6836c, "remove_proc_entry" },
	{ 0x89f25045, "skb_queue_purge" },
	{ 0xaeb1a9f9, "ppp_register_net_channel" },
	{ 0x9fcc0a84, "dev_get_by_name" },
	{ 0xa7359096, "_copy_from_iter_full" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0x4c7c453f, "sock_wmalloc" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe31e36c2, "skb_copy_datagram_iter" },
	{ 0x278ebdf3, "skb_recv_datagram" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x4e3296a2, "ppp_input" },
	{ 0x1817b77d, "sock_queue_rcv_skb" },
	{ 0x440200b7, "pskb_expand_head" },
	{ 0x5f55907f, "dev_queue_xmit" },
	{ 0x6913facd, "sock_init_data" },
	{ 0xb58e5d6d, "sk_alloc" },
	{ 0x5f754e5a, "memset" },
	{ 0xab949b34, "dev_get_by_name_rcu" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x2e863ede, "pskb_trim_rcsum_slow" },
	{ 0xcf6b5781, "__sk_receive_skb" },
	{ 0x2ac743ad, "skb_pull_rcsum" },
	{ 0x315de896, "__pskb_pull_tail" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0x8d334730, "skb_clone" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0xeadab5fe, "sk_free" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xa39b3730, "release_sock" },
	{ 0xf63c8695, "pppox_unbind_sock" },
	{ 0x6addc74a, "lock_sock_nested" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pppox,ppp_generic";


MODULE_INFO(srcversion, "1D528F8FB27460D7E10FC6C");

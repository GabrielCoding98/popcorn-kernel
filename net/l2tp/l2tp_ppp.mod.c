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
	{ 0x6f67a396, "sock_no_shutdown" },
	{ 0x7fb630b3, "sock_no_listen" },
	{ 0xdca06ec7, "pppox_ioctl" },
	{ 0x9074747d, "datagram_poll" },
	{ 0xcaad4aa4, "sock_no_accept" },
	{ 0x8ef37932, "sock_no_socketpair" },
	{ 0xb7218171, "sock_no_bind" },
	{ 0x337f2432, "l2tp_nl_unregister_ops" },
	{ 0xc2744d2, "unregister_pernet_device" },
	{ 0xbeb1684a, "proto_unregister" },
	{ 0xe0ff7a18, "unregister_pppox_proto" },
	{ 0x30daede5, "l2tp_nl_register_ops" },
	{ 0x28db02b1, "register_pppox_proto" },
	{ 0x8a5e867d, "proto_register" },
	{ 0xc484571a, "register_pernet_device" },
	{ 0x1272af5, "l2tp_session_get_nth" },
	{ 0x491483ea, "seq_puts" },
	{ 0xd245373e, "ppp_dev_name" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0x89f25045, "skb_queue_purge" },
	{ 0x97cb3dc0, "l2tp_tunnel_get_nth" },
	{ 0x847b8731, "proc_create_net_data" },
	{ 0xebd6836c, "remove_proc_entry" },
	{ 0x643e0ce5, "call_rcu_sched" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0xf63c8695, "pppox_unbind_sock" },
	{ 0x882b7fe4, "l2tp_session_delete" },
	{ 0xd812b88, "l2tp_tunnel_register" },
	{ 0xa43e9520, "l2tp_tunnel_create" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xaeb1a9f9, "ppp_register_net_channel" },
	{ 0xbcffa1a6, "dst_release" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x6293db47, "l2tp_tunnel_free" },
	{ 0x447bde64, "l2tp_tunnel_delete" },
	{ 0x73adea92, "l2tp_tunnel_get" },
	{ 0xa39b3730, "release_sock" },
	{ 0x6addc74a, "lock_sock_nested" },
	{ 0x440200b7, "pskb_expand_head" },
	{ 0x86f2b9cd, "l2tp_session_set_header_len" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x5b365b8a, "l2tp_xmit_skb" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xa7359096, "_copy_from_iter_full" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0x4c7c453f, "sock_wmalloc" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xeadab5fe, "sk_free" },
	{ 0xe31e36c2, "skb_copy_datagram_iter" },
	{ 0x278ebdf3, "skb_recv_datagram" },
	{ 0x543d6b06, "l2tp_udp_encap_recv" },
	{ 0x6913facd, "sock_init_data" },
	{ 0xb58e5d6d, "sk_alloc" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3a5bbec3, "l2tp_session_free" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xc6cefd8, "l2tp_tunnel_get_session" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x5f754e5a, "memset" },
	{ 0x7c32d0f0, "printk" },
	{ 0x315de896, "__pskb_pull_tail" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0x55c68dd, "skb_pull" },
	{ 0x4e3296a2, "ppp_input" },
	{ 0x1817b77d, "sock_queue_rcv_skb" },
	{ 0x37a0cba, "kfree" },
	{ 0xcda44fe1, "l2tp_session_register" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xdaf660fb, "l2tp_session_create" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pppox,l2tp_netlink,l2tp_core,ppp_generic";


MODULE_INFO(srcversion, "3041D35E5B728159DF73FA9");

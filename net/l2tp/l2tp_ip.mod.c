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
	{ 0x3a5bbec3, "l2tp_session_free" },
	{ 0xd76683c2, "ip_getsockopt" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x19f06a02, "inet_unhash" },
	{ 0x23e49a79, "ip_setsockopt" },
	{ 0xc2fea1ce, "sk_setup_caps" },
	{ 0xbcffa1a6, "dst_release" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xdbdf71b0, "l2tp_recv_common" },
	{ 0x1817b77d, "sock_queue_rcv_skb" },
	{ 0x278ebdf3, "skb_recv_datagram" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xffa4047b, "inet_sendmsg" },
	{ 0xa7d2be1, "inet_del_protocol" },
	{ 0xbc1fb361, "sk_common_release" },
	{ 0xa344f919, "inet_dgram_connect" },
	{ 0xb5fe730, "sock_common_recvmsg" },
	{ 0x9f1ead19, "sock_no_sendpage" },
	{ 0x315de896, "__pskb_pull_tail" },
	{ 0x91625fc4, "sock_no_mmap" },
	{ 0x8ef37932, "sock_no_socketpair" },
	{ 0x6b0a44e, "__sock_recv_wifi_status" },
	{ 0xe31e36c2, "skb_copy_datagram_iter" },
	{ 0x34908c14, "print_hex_dump_bytes" },
	{ 0x7c32d0f0, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc4cc8873, "inet_addr_type" },
	{ 0x6addc74a, "lock_sock_nested" },
	{ 0x7fb630b3, "sock_no_listen" },
	{ 0xe2d12f53, "__ip_queue_xmit" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xcaad4aa4, "sock_no_accept" },
	{ 0xeadab5fe, "sk_free" },
	{ 0xccb90698, "inet_shutdown" },
	{ 0x83e314e0, "inet_add_protocol" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x5bdd9653, "__sock_recv_timestamp" },
	{ 0x38b527f2, "inet_ioctl" },
	{ 0xcf6b5781, "__sk_receive_skb" },
	{ 0xcc1d4aaa, "inet_hash" },
	{ 0x2a6d0ac2, "ip_cmsg_recv_offset" },
	{ 0x8a5e867d, "proto_register" },
	{ 0xb1b1c205, "__sk_dst_check" },
	{ 0x321e40eb, "inet_release" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x16589dfe, "make_kuid" },
	{ 0xa8223179, "refcount_dec_checked" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9074747d, "datagram_poll" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0xbeb1684a, "proto_unregister" },
	{ 0xa7359096, "_copy_from_iter_full" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0xe3ec5362, "ip_route_output_flow" },
	{ 0x8897033a, "sock_common_setsockopt" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xe198f1d8, "__xfrm_policy_check" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0x61015edf, "inet_register_protosw" },
	{ 0x37a0cba, "kfree" },
	{ 0xd064e973, "__udp_disconnect" },
	{ 0x447bde64, "l2tp_tunnel_delete" },
	{ 0x1765e4dc, "inet_bind" },
	{ 0xbdeb4623, "sock_common_getsockopt" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0x171ac96a, "__ip4_datagram_connect" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x4c7c453f, "sock_wmalloc" },
	{ 0x7bb8e83c, "l2tp_session_get" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0xb4d6d69b, "inet_unregister_protosw" },
	{ 0xd6ac2994, "skb_free_datagram" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_core";


MODULE_INFO(srcversion, "772252505E52FDAFFB93EBB");

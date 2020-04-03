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
	{ 0x19f06a02, "inet_unhash" },
	{ 0xe9f4275d, "inet6_hash" },
	{ 0x320399aa, "ipv6_getsockopt" },
	{ 0xa4555ef6, "ipv6_setsockopt" },
	{ 0x6e85b6f7, "l2tp_ioctl" },
	{ 0x9f1ead19, "sock_no_sendpage" },
	{ 0x91625fc4, "sock_no_mmap" },
	{ 0xb5fe730, "sock_common_recvmsg" },
	{ 0xffa4047b, "inet_sendmsg" },
	{ 0xbdeb4623, "sock_common_getsockopt" },
	{ 0x8897033a, "sock_common_setsockopt" },
	{ 0xccb90698, "inet_shutdown" },
	{ 0x7fb630b3, "sock_no_listen" },
	{ 0x67b22e49, "inet6_ioctl" },
	{ 0x9074747d, "datagram_poll" },
	{ 0xcaad4aa4, "sock_no_accept" },
	{ 0x8ef37932, "sock_no_socketpair" },
	{ 0xa344f919, "inet_dgram_connect" },
	{ 0xa0acada0, "inet6_bind" },
	{ 0x37475f2b, "inet6_release" },
	{ 0x848d672e, "inet6_del_protocol" },
	{ 0x2b545335, "inet6_unregister_protosw" },
	{ 0xbeb1684a, "proto_unregister" },
	{ 0x5f869054, "inet6_register_protosw" },
	{ 0x3fb6ba98, "inet6_add_protocol" },
	{ 0x8a5e867d, "proto_register" },
	{ 0x7c32d0f0, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x1817b77d, "sock_queue_rcv_skb" },
	{ 0xbc1fb361, "sk_common_release" },
	{ 0x812e77c9, "__ip6_datagram_connect" },
	{ 0xd064e973, "__udp_disconnect" },
	{ 0xeafe03d, "inet6_destroy_sock" },
	{ 0x447bde64, "l2tp_tunnel_delete" },
	{ 0xbe154a3e, "ip6_dst_hoplimit" },
	{ 0x50c92259, "ip6_push_pending_frames" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x3b63b389, "ip6_flush_pending_frames" },
	{ 0xa4a26577, "ip6_datagram_send_ctl" },
	{ 0xce90062e, "refcount_inc_not_zero_checked" },
	{ 0xea02ed18, "fl6_sock_lookup" },
	{ 0xbcffa1a6, "dst_release" },
	{ 0xaabe2d00, "ip6_append_data" },
	{ 0x858f3be, "ip_generic_getfrag" },
	{ 0x835bdfcf, "ip6_dst_lookup_flow" },
	{ 0x293a9ef6, "fl6_update_dst" },
	{ 0x573b5453, "ipv6_fixup_options" },
	{ 0x9c27e479, "fl6_merge_options" },
	{ 0x5f754e5a, "memset" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1935a512, "ip6_datagram_recv_ctl" },
	{ 0xd6ac2994, "skb_free_datagram" },
	{ 0x6b0a44e, "__sock_recv_wifi_status" },
	{ 0x5bdd9653, "__sock_recv_timestamp" },
	{ 0x6ed5a9e3, "ipv6_recv_error" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xe31e36c2, "skb_copy_datagram_iter" },
	{ 0x278ebdf3, "skb_recv_datagram" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xa8223179, "refcount_dec_checked" },
	{ 0x2e9a410a, "ipv6_chk_addr" },
	{ 0x3fa44dc1, "dev_get_by_index_rcu" },
	{ 0xa39b3730, "release_sock" },
	{ 0x6addc74a, "lock_sock_nested" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0xcf6b5781, "__sk_receive_skb" },
	{ 0x37a0cba, "kfree" },
	{ 0x315de896, "__pskb_pull_tail" },
	{ 0xeadab5fe, "sk_free" },
	{ 0xe198f1d8, "__xfrm_policy_check" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0x3a5bbec3, "l2tp_session_free" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xdbdf71b0, "l2tp_recv_common" },
	{ 0x34908c14, "print_hex_dump_bytes" },
	{ 0x7bb8e83c, "l2tp_session_get" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipv6,l2tp_ip,l2tp_core";


MODULE_INFO(srcversion, "D271B6F936C93521F281C13");

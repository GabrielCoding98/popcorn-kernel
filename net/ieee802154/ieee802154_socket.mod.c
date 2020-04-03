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
	{ 0xa45857bb, "dev_load" },
	{ 0x6913facd, "sock_init_data" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xe5866881, "dev_getbyhwaddr_rcu" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x3b697738, "_raw_read_lock" },
	{ 0xbcffa1a6, "dst_release" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x8d334730, "skb_clone" },
	{ 0x9fcc0a84, "dev_get_by_name" },
	{ 0x3c5cbdce, "sock_no_getname" },
	{ 0x1817b77d, "sock_queue_rcv_skb" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x278ebdf3, "skb_recv_datagram" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0xbc1fb361, "sk_common_release" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xb5fe730, "sock_common_recvmsg" },
	{ 0x9f1ead19, "sock_no_sendpage" },
	{ 0x1186f5aa, "sock_get_timestamp" },
	{ 0x91625fc4, "sock_no_mmap" },
	{ 0xbaa260b1, "ieee802154_hdr_pull" },
	{ 0x5f754e5a, "memset" },
	{ 0x8ef37932, "sock_no_socketpair" },
	{ 0xb58e5d6d, "sk_alloc" },
	{ 0xe31e36c2, "skb_copy_datagram_iter" },
	{ 0x7c32d0f0, "printk" },
	{ 0xb7218171, "sock_no_bind" },
	{ 0x6addc74a, "lock_sock_nested" },
	{ 0xbeec26fb, "ns_capable" },
	{ 0x473a48f, "sock_prot_inuse_add" },
	{ 0x7fb630b3, "sock_no_listen" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x6ef02d63, "skb_push" },
	{ 0xcaad4aa4, "sock_no_accept" },
	{ 0x9996dce7, "dev_get_by_index" },
	{ 0x7386b24e, "dev_remove_pack" },
	{ 0xec2404f1, "init_net" },
	{ 0x6f67a396, "sock_no_shutdown" },
	{ 0x7a2fcc76, "__sock_recv_ts_and_drops" },
	{ 0xc6cbbc89, "capable" },
	{ 0x8a5e867d, "proto_register" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xa8223179, "refcount_dec_checked" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x5865576, "sock_get_timestampns" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9074747d, "datagram_poll" },
	{ 0x512050d6, "sock_register" },
	{ 0xb05ab051, "dev_getfirstbyhwtype" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0xbeb1684a, "proto_unregister" },
	{ 0xa7359096, "_copy_from_iter_full" },
	{ 0x13fafa56, "sock_alloc_send_skb" },
	{ 0xf4e91da7, "put_cmsg" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x8897033a, "sock_common_setsockopt" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xbdeb4623, "sock_common_getsockopt" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xaef5f8c0, "dev_add_pack" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x5f55907f, "dev_queue_xmit" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xd6ac2994, "skb_free_datagram" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ieee802154";


MODULE_INFO(srcversion, "543CD5264DEE3B0DB0A3012");

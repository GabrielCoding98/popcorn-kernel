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
	{ 0xa5216657, "neigh_lookup" },
	{ 0x9450a307, "inet_frag_kill" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb96a6616, "unregister_net_sysctl_table" },
	{ 0x8d334730, "skb_clone" },
	{ 0x638ca6b2, "skb_copy" },
	{ 0x1875a657, "lowpan_header_compress" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x98cc48c1, "init_user_ns" },
	{ 0xb07b10e1, "neigh_destroy" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x97361ec, "inet_frag_find" },
	{ 0x61ac380c, "netif_rx" },
	{ 0x315de896, "__pskb_pull_tail" },
	{ 0xae577b53, "kfree_skb_partial" },
	{ 0x5f754e5a, "memset" },
	{ 0xc5b301c3, "unregister_pernet_subsys" },
	{ 0x7c32d0f0, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0x2f50cbf5, "proc_doulongvec_minmax" },
	{ 0x9d345ffe, "inet_frags_fini" },
	{ 0xd5d7cc83, "inet_frags_exit_net" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x7029e5d2, "ieee802154_hdr_peek" },
	{ 0x9996dce7, "dev_get_by_index" },
	{ 0x7386b24e, "dev_remove_pack" },
	{ 0x13d386, "nd_tbl" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x55c68dd, "skb_pull" },
	{ 0xec2404f1, "init_net" },
	{ 0x456e3acc, "rtnl_link_unregister" },
	{ 0x9c399c9d, "lowpan_header_decompress" },
	{ 0xb6255798, "skb_copy_expand" },
	{ 0x8580c0b6, "skb_try_coalesce" },
	{ 0x2827ae6f, "__alloc_skb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0xaab3a70, "inet_frag_destroy" },
	{ 0xc60baeb4, "lowpan_unregister_netdevice" },
	{ 0xd10120b, "register_pernet_subsys" },
	{ 0x440200b7, "pskb_expand_head" },
	{ 0xfa0d7ac, "ieee802154_hdr_peek_addrs" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x50f3d972, "rhashtable_init" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xd8d59a8a, "rtnl_link_register" },
	{ 0x675263b1, "lowpan_register_netdevice" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf313fca5, "inet_frags_init" },
	{ 0xaef5f8c0, "dev_add_pack" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x5f55907f, "dev_queue_xmit" },
	{ 0xa8b136b2, "register_net_sysctl" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0x61c76b3a, "proc_dointvec_jiffies" },
	{ 0x65ad45d5, "skb_morph" },
	{ 0x87e2553b, "ieee802154_max_payload" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=6lowpan,ieee802154,ipv6";


MODULE_INFO(srcversion, "42BAB375166AA2C3BA152EB");

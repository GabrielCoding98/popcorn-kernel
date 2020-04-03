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
	{ 0xf4dfc5b1, "eth_mac_addr" },
	{ 0x337f2432, "l2tp_nl_unregister_ops" },
	{ 0x7c32d0f0, "printk" },
	{ 0x30daede5, "l2tp_nl_register_ops" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x882b7fe4, "l2tp_session_delete" },
	{ 0x3a5bbec3, "l2tp_session_free" },
	{ 0x2ac79575, "free_netdev" },
	{ 0xf7350193, "__module_get" },
	{ 0x85bf72bd, "register_netdevice" },
	{ 0xcda44fe1, "l2tp_session_register" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xa39b3730, "release_sock" },
	{ 0x9d120076, "kernel_sock_ip_overhead" },
	{ 0x6addc74a, "lock_sock_nested" },
	{ 0x4f685e1, "alloc_netdev_mqs" },
	{ 0xdaf660fb, "l2tp_session_create" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x77c59098, "module_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9265c8b, "unregister_netdevice_queue" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x5b365b8a, "l2tp_xmit_skb" },
	{ 0x912342a9, "ether_setup" },
	{ 0xbcffa1a6, "dst_release" },
	{ 0x315de896, "__pskb_pull_tail" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x9a4b6579, "__secpath_destroy" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0xc92b3bae, "dev_forward_skb" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x34908c14, "print_hex_dump_bytes" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_netlink,l2tp_core";


MODULE_INFO(srcversion, "0FCE2BCDCA334597AC3C8E1");

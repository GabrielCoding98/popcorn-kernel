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
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc5b301c3, "unregister_pernet_subsys" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0xdb11a8f1, "nfnetlink_subsys_unregister" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x38cce196, "nfnetlink_subsys_register" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0xd10120b, "register_pernet_subsys" },
	{ 0x8e26c398, "nf_queue_entry_get_refs" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xb4fffc37, "nf_queue_entry_release_refs" },
	{ 0xaf149172, "__skb_gso_segment" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x7c32d0f0, "printk" },
	{ 0x53aebfaa, "nfnetlink_unicast" },
	{ 0x65bb120f, "skb_checksum_help" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x4057f290, "skb_tx_error" },
	{ 0x9de1fb6, "skb_zerocopy" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0xf95233b3, "from_kgid_munged" },
	{ 0x220039cb, "from_kuid_munged" },
	{ 0x98cc48c1, "init_user_ns" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0x68183b3b, "nla_put" },
	{ 0xe4de183c, "__nla_reserve" },
	{ 0xe3fc549, "__nlmsg_put" },
	{ 0x2827ae6f, "__alloc_skb" },
	{ 0xe0f00779, "skb_zerocopy_headlen" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0xb9866980, "nf_register_queue_handler" },
	{ 0x847b8731, "proc_create_net_data" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xebd6836c, "remove_proc_entry" },
	{ 0x44381183, "nf_unregister_queue_handler" },
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0xbe1c979, "___pskb_trim" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0xb6255798, "skb_copy_expand" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x9d669763, "memcpy" },
	{ 0x22bff1ce, "skb_make_writable" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0x77c59098, "module_put" },
	{ 0x643e0ce5, "call_rcu_sched" },
	{ 0x37a0cba, "kfree" },
	{ 0xca0304ef, "try_module_get" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0x402b8281, "__request_module" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0xb441c355, "nfnl_ct_hook" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xecc46244, "nf_reinject" },
	{ 0x10e241a1, "nf_ct_hook" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfnetlink";


MODULE_INFO(srcversion, "F578DFED100E52D2C5F5A4F");

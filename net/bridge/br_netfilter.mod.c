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
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x2e863ede, "pskb_trim_rcsum_slow" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb96a6616, "unregister_net_sysctl_table" },
	{ 0x8af64802, "ip_do_fragment" },
	{ 0x86eb0c08, "proc_dointvec" },
	{ 0xbcffa1a6, "dst_release" },
	{ 0xe34cf2f1, "__vlan_find_dev_deep_rcu" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xb07b10e1, "neigh_destroy" },
	{ 0x422678a0, "nf_hooks_needed" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x7e732c7a, "nf_hook_slow" },
	{ 0x315de896, "__pskb_pull_tail" },
	{ 0x5f754e5a, "memset" },
	{ 0xc5b301c3, "unregister_pernet_subsys" },
	{ 0x96f5df55, "br_dev_queue_push_xmit" },
	{ 0x7c32d0f0, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x71c90087, "memcmp" },
	{ 0x54e6e263, "nf_unregister_net_hooks" },
	{ 0x6ef02d63, "skb_push" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x55c68dd, "skb_pull" },
	{ 0xec2404f1, "init_net" },
	{ 0x407a6e1a, "br_forward_finish" },
	{ 0xb1dc134e, "ip_route_input_noref" },
	{ 0xcd42f123, "nf_ipv6_ops" },
	{ 0x6bc1e893, "nf_register_net_hooks" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0xd10120b, "register_pernet_subsys" },
	{ 0x440200b7, "pskb_expand_head" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x2ac743ad, "skb_pull_rcsum" },
	{ 0xe3ec5362, "ip_route_output_flow" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x7dd837f5, "nf_br_ops" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x34c4727a, "br_handle_frame_finish" },
	{ 0xa8b136b2, "register_net_sysctl" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bridge";


MODULE_INFO(srcversion, "9BFCD02990DB2DF7986FE44");

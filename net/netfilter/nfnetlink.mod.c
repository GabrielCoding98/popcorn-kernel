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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x402b8281, "__request_module" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x9f049024, "netlink_has_listeners" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x8d334730, "skb_clone" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xe419e781, "nlmsg_notify" },
	{ 0x5f754e5a, "memset" },
	{ 0xc5b301c3, "unregister_pernet_subsys" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x1be53ce1, "netlink_kernel_release" },
	{ 0xafb1c2b4, "netlink_rcv_skb" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0x9e6e325e, "netlink_unicast" },
	{ 0x55c68dd, "skb_pull" },
	{ 0x77c59098, "module_put" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0xd10120b, "register_pernet_subsys" },
	{ 0xc43237ce, "netlink_ack" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x85f2363c, "netlink_set_err" },
	{ 0x42692f8, "__netlink_kernel_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xca0304ef, "try_module_get" },
	{ 0x8ed4eece, "netlink_net_capable" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F3D492C18AA28FEC680E087");

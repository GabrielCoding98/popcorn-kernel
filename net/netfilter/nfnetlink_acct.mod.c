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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xce90062e, "refcount_inc_not_zero_checked" },
	{ 0xff71b834, "skb_trim" },
	{ 0xdb11a8f1, "nfnetlink_subsys_unregister" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xc5b301c3, "unregister_pernet_subsys" },
	{ 0x7c32d0f0, "printk" },
	{ 0x68183b3b, "nla_put" },
	{ 0x84b183ae, "strncmp" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x9e6e325e, "netlink_unicast" },
	{ 0x56c8693b, "refcount_dec_if_one" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x77c59098, "module_put" },
	{ 0x2827ae6f, "__alloc_skb" },
	{ 0xc4a0ebb4, "netlink_broadcast" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0xd10120b, "register_pernet_subsys" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x38cce196, "nfnetlink_subsys_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x6cdc5c6b, "nla_strlcpy" },
	{ 0xee76d1f5, "nla_put_64bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xe3fc549, "__nlmsg_put" },
	{ 0xca0304ef, "try_module_get" },
	{ 0xa2e29f4, "__netlink_dump_start" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfnetlink";


MODULE_INFO(srcversion, "7BB34744A231218A9615EEB");

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
	{ 0x1be53ce1, "netlink_kernel_release" },
	{ 0x42692f8, "__netlink_kernel_create" },
	{ 0xec2404f1, "init_net" },
	{ 0x5f754e5a, "memset" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0x9e6e325e, "netlink_unicast" },
	{ 0x2827ae6f, "__alloc_skb" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xff71b834, "skb_trim" },
	{ 0xe3fc549, "__nlmsg_put" },
	{ 0xa2e29f4, "__netlink_dump_start" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x1f37da0b, "crypto_alg_mod_lookup" },
	{ 0x4251935d, "crypto_unregister_instance" },
	{ 0x3de9cae1, "crypto_remove_final" },
	{ 0x6cb4c526, "crypto_mod_put" },
	{ 0x25c777e3, "up_write" },
	{ 0x74917ba0, "crypto_remove_spawns" },
	{ 0x76e18a1a, "down_write" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0x64ac2467, "up_read" },
	{ 0x26b75e9d, "crypto_mod_get" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf1c2ed95, "down_read" },
	{ 0x25f44fa2, "crypto_alg_sem" },
	{ 0x457594fa, "crypto_alg_list" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x68183b3b, "nla_put" },
	{ 0x328a05f1, "strncpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x5bd0748f, "crypto_del_default_rng" },
	{ 0x1c883361, "netlink_capable" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xafb1c2b4, "netlink_rcv_skb" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F35170DEA8629E0B1312E28");

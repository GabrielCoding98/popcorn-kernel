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
	{ 0x7d54146, "param_ops_bool" },
	{ 0x456e3acc, "rtnl_link_unregister" },
	{ 0xd8d59a8a, "rtnl_link_register" },
	{ 0x7c32d0f0, "printk" },
	{ 0xd4e1b9fa, "netif_rx_ni" },
	{ 0xcddd1273, "sock_efree" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x8d334730, "skb_clone" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F0A8B65028FD4CD962F21DA");

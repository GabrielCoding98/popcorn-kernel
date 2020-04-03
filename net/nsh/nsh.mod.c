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
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc396d6fe, "dev_add_offload" },
	{ 0x315de896, "__pskb_pull_tail" },
	{ 0xa47c4737, "dev_remove_offload" },
	{ 0x6ef02d63, "skb_push" },
	{ 0xf1b112f7, "skb_mac_gso_segment" },
	{ 0x440200b7, "pskb_expand_head" },
	{ 0x2ac743ad, "skb_pull_rcsum" },
	{ 0x9d669763, "memcpy" },
	{ 0xe113bbbc, "csum_partial" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "0A3C164753CAA667946BD4C");
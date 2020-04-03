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
	{ 0xdd220c50, "ipv6_find_hdr" },
	{ 0x58d4952b, "tcp_hashinfo" },
	{ 0xaeefc8e1, "udp6_lib_lookup" },
	{ 0xe302fa6b, "ipv6_skip_exthdr" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x503b7ca4, "inet6_lookup" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf92e4913, "skb_copy_bits" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipv6";


MODULE_INFO(srcversion, "0468B430ECDE9A73572F25B");

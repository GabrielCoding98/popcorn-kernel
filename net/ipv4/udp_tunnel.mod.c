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
	{ 0x18011285, "sock_release" },
	{ 0xab88a9bb, "metadata_dst_alloc" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x75e8be08, "sock_create_kern" },
	{ 0xe7c10ed2, "kernel_connect" },
	{ 0xd31dbebf, "iptunnel_xmit" },
	{ 0x654e0977, "kernel_sock_shutdown" },
	{ 0x99517682, "udp_encap_enable" },
	{ 0xea7759c4, "ipv6_stub" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc76404fa, "udp_set_csum" },
	{ 0x29a426c1, "kernel_bind" },
	{ 0x8f678b07, "__stack_chk_guard" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "CCD2428F1623C24BA34AF5F");
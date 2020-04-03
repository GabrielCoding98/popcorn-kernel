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
	{ 0xc570da1a, "ip_local_out" },
	{ 0x2124474, "ip_send_check" },
	{ 0x981c9b20, "nf_ct_attach" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x3a639ff7, "__icmp_send" },
	{ 0x99010d79, "nf_ip_checksum" },
	{ 0x43e77084, "ip_route_me_harder" },
	{ 0x2827ae6f, "__alloc_skb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x5f55907f, "dev_queue_xmit" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0xf92e4913, "skb_copy_bits" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "DE1CE36A9D1EBC2FBF00263");

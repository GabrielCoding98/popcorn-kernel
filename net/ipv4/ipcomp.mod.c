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
	{ 0x7caf2981, "xfrm_input" },
	{ 0x4596780b, "xfrm4_rcv" },
	{ 0x88629e2e, "ipcomp_output" },
	{ 0xc365bd4b, "ipcomp_input" },
	{ 0x55224715, "ipcomp_destroy" },
	{ 0xafdca2c, "xfrm4_protocol_deregister" },
	{ 0xfb66238c, "xfrm_unregister_type" },
	{ 0x25dddfdb, "xfrm4_protocol_register" },
	{ 0x7c32d0f0, "printk" },
	{ 0x9605af8, "xfrm_register_type" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x6fceaac4, "xfrm_state_insert" },
	{ 0xe43c1a8b, "xfrm_init_state" },
	{ 0xf74a3b96, "xfrm_state_alloc" },
	{ 0xa399b7a0, "ipcomp_init_state" },
	{ 0x57daa409, "ipv4_update_pmtu" },
	{ 0xb72c6d97, "__xfrm_state_destroy" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x65f4ed06, "ipv4_redirect" },
	{ 0xe7e8e834, "xfrm_state_lookup" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xfrm_ipcomp";


MODULE_INFO(srcversion, "9006F9B6DE7160554F07F6A");

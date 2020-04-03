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
	{ 0xc5b301c3, "unregister_pernet_subsys" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x2fc11d28, "br_should_route_hook" },
	{ 0xd10120b, "register_pernet_subsys" },
	{ 0xdf5b8ef7, "ebt_register_table" },
	{ 0xf3f7710, "ebt_unregister_table" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xdc1561f7, "ebt_do_table" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bridge,ebtables";


MODULE_INFO(srcversion, "611B3BB4E7DA458C9F57855");

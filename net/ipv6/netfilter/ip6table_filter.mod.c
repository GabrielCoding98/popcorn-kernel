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
	{ 0xc5b301c3, "unregister_pernet_subsys" },
	{ 0xd10120b, "register_pernet_subsys" },
	{ 0x55148527, "xt_hook_ops_alloc" },
	{ 0xec2404f1, "init_net" },
	{ 0x37a0cba, "kfree" },
	{ 0x4baa3b96, "ip6t_register_table" },
	{ 0x120e02cc, "ip6t_alloc_initial_table" },
	{ 0xf40b4781, "ip6t_do_table" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xda5740ed, "ip6t_unregister_table" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,ip6_tables";


MODULE_INFO(srcversion, "FA1F9ECAE1E78C7908CD27A");
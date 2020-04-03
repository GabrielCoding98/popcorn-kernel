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
	{ 0xec2404f1, "init_net" },
	{ 0xd10120b, "register_pernet_subsys" },
	{ 0x55148527, "xt_hook_ops_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xb31b80e6, "ipt_register_table" },
	{ 0xc6845884, "ipt_alloc_initial_table" },
	{ 0x43e77084, "ip_route_me_harder" },
	{ 0xece85780, "ipt_do_table" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x71f839a9, "ipt_unregister_table" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,ip_tables";


MODULE_INFO(srcversion, "0CAE0E7413D27EC8334B88B");

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
	{ 0xbc5d61ca, "w1_reset_select_slave" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x21618bec, "platform_device_alloc" },
	{ 0xdfb0dd0, "platform_device_add" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x793b43cb, "platform_device_unregister" },
	{ 0x38ca34dc, "w1_write_block" },
	{ 0x8d512d93, "w1_write_8" },
	{ 0x635c2f6a, "w1_read_block" },
	{ 0x5c345a68, "w1_register_family" },
	{ 0x148ea913, "platform_device_put" },
	{ 0x7c41147c, "w1_unregister_family" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wire";


MODULE_INFO(srcversion, "0DF4DC3DC1D40096304F8FA");

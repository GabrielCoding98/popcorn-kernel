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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xa738c28a, "module_layout" },
	{ 0x9f2f2b7d, "platform_driver_unregister" },
	{ 0x38916bc8, "driver_unregister" },
	{ 0x3af31b31, "__platform_driver_register" },
	{ 0xdb8d0549, "__spi_register_driver" },
	{ 0x22d45e69, "fbtft_probe_common" },
	{ 0x4781f06, "fbtft_remove_common" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fbtft";

MODULE_ALIAS("of:N*T*Cneosec,tinylcd");
MODULE_ALIAS("of:N*T*Cneosec,tinylcdC*");

MODULE_INFO(srcversion, "B94973B1108EDBB62DB3EA9");

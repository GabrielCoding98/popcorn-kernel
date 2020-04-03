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
	{ 0x9f2f2b7d, "platform_driver_unregister" },
	{ 0x3af31b31, "__platform_driver_register" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7bbc7fcb, "gpiod_direction_output_raw" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xe4851152, "w1_add_master_device" },
	{ 0x5aa6c2e9, "gpiod_direction_output" },
	{ 0xc368f946, "devm_gpiod_get_index_optional" },
	{ 0x71a1d70a, "devm_gpiod_get_index" },
	{ 0x9a3f3efa, "of_get_property" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x86af6cf6, "of_root" },
	{ 0xaa2e0e8e, "gpiod_get_value" },
	{ 0x5847a6ab, "w1_remove_master_device" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xd1a1d33a, "gpiod_set_value" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wire";

MODULE_ALIAS("of:N*T*Cw1-gpio");
MODULE_ALIAS("of:N*T*Cw1-gpioC*");

MODULE_INFO(srcversion, "4FE05802DF224C372D2F4F8");

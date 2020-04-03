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
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x3a2e1c5d, "gpio_to_desc" },
	{ 0xadb7cfd4, "devm_gpio_request_one" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x9aa5dec7, "devm_backlight_device_register" },
	{ 0xe8a03332, "devm_gpiod_get" },
	{ 0xf36b611a, "of_find_property" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x4202f912, "gpiod_set_value_cansleep" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cgpio-backlight");
MODULE_ALIAS("of:N*T*Cgpio-backlightC*");

MODULE_INFO(srcversion, "23AD22903BA0E7076B145B9");

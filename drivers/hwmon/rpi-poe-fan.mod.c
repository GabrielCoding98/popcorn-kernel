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
	{ 0x2b9b88cd, "thermal_cdev_update" },
	{ 0xab092ca8, "thermal_of_cooling_device_register" },
	{ 0x96f49763, "of_property_read_variable_u32_array" },
	{ 0x7dea647a, "of_property_count_elems_of_size" },
	{ 0xf36b611a, "of_find_property" },
	{ 0xb1710a73, "devm_hwmon_device_register_with_groups" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0xd4412dd3, "rpi_firmware_get" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x186eae51, "of_parse_phandle" },
	{ 0x91715312, "sprintf" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2509987c, "thermal_cooling_device_unregister" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x588006d2, "rpi_firmware_property" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hwmon";

MODULE_ALIAS("of:N*T*Craspberrypi,rpi-poe-fan");
MODULE_ALIAS("of:N*T*Craspberrypi,rpi-poe-fanC*");

MODULE_INFO(srcversion, "0023611D7F1F67F411540C4");

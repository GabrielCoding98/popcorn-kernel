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
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0x2509987c, "thermal_cooling_device_unregister" },
	{ 0x4202f912, "gpiod_set_value_cansleep" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xab092ca8, "thermal_of_cooling_device_register" },
	{ 0xb1710a73, "devm_hwmon_device_register_with_groups" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x5aa6c2e9, "gpiod_direction_output" },
	{ 0xce1cc28f, "devm_request_threaded_irq" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0xf8b6597a, "gpiod_to_irq" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x71a1d70a, "devm_gpiod_get_index" },
	{ 0x911ee79e, "of_prop_next_u32" },
	{ 0xf36b611a, "of_find_property" },
	{ 0x57562aac, "gpiod_count" },
	{ 0x9b63ccf3, "devm_gpiod_get_optional" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe18b6e3d, "kobject_uevent" },
	{ 0xe8ff1363, "sysfs_notify" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4a6b7d00, "gpiod_get_value_cansleep" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x91715312, "sprintf" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hwmon";

MODULE_ALIAS("of:N*T*Cgpio-fan");
MODULE_ALIAS("of:N*T*Cgpio-fanC*");

MODULE_INFO(srcversion, "379FA6181FC7B8675788FE5");

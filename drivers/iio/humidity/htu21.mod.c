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
	{ 0x50dfe490, "iio_read_const_attr" },
	{ 0xc82716c4, "i2c_del_driver" },
	{ 0x232fad72, "i2c_register_driver" },
	{ 0xddd8aa4f, "ms_sensors_show_battery_low" },
	{ 0x8503de85, "ms_sensors_show_heater" },
	{ 0x55865c70, "ms_sensors_write_heater" },
	{ 0xb28c1861, "ms_sensors_ht_read_temperature" },
	{ 0x6cbd79c3, "ms_sensors_ht_read_humidity" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x61004d7c, "ms_sensors_write_resolution" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xe186359a, "__devm_iio_device_register" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x75a6e571, "ms_sensors_read_serial" },
	{ 0x2d2f5cd5, "ms_sensors_reset" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xee0193d, "devm_iio_device_alloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio,ms_sensors_i2c";

MODULE_ALIAS("of:N*T*Cmeas,htu21");
MODULE_ALIAS("of:N*T*Cmeas,htu21C*");
MODULE_ALIAS("of:N*T*Cmeas,ms8607-humidity");
MODULE_ALIAS("of:N*T*Cmeas,ms8607-humidityC*");
MODULE_ALIAS("i2c:htu21");
MODULE_ALIAS("i2c:ms8607-humidity");

MODULE_INFO(srcversion, "9EB00A7E73D3D4C21A27E14");

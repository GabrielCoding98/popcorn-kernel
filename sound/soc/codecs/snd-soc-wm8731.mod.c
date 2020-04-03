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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x815588a6, "clk_enable" },
	{ 0xa5644abf, "__devm_regmap_init_spi" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2e83e9ec, "snd_soc_dapm_get_enum_double" },
	{ 0xc82716c4, "i2c_del_driver" },
	{ 0x3607517e, "snd_soc_dapm_get_volsw" },
	{ 0x2efd7cc0, "regmap_update_bits_base" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xdb8d0549, "__spi_register_driver" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc89fc654, "snd_soc_component_update_bits" },
	{ 0xc235d3d8, "snd_soc_put_volsw" },
	{ 0x3503cebf, "snd_soc_get_volsw" },
	{ 0xfd99fecc, "devm_regulator_bulk_get" },
	{ 0xf1cd9f03, "regulator_bulk_enable" },
	{ 0xbedf82a5, "snd_soc_info_enum_double" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x9648e562, "snd_pcm_hw_constraint_list" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x38916bc8, "driver_unregister" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf7cef4fd, "snd_soc_dapm_put_volsw" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xc0a54718, "snd_ctl_boolean_mono_info" },
	{ 0x27673299, "snd_soc_info_volsw" },
	{ 0x232fad72, "i2c_register_driver" },
	{ 0xebe2679, "regulator_bulk_disable" },
	{ 0xbf93d2c1, "__devm_regmap_init_i2c" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x6c38282e, "devm_snd_soc_register_component" },
	{ 0xe6135cf9, "snd_soc_dapm_sync" },
	{ 0x3558b728, "snd_soc_component_write" },
	{ 0x8eeb76a7, "devm_clk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xb61ae07f, "regcache_mark_dirty" },
	{ 0x132d57dd, "snd_soc_component_read32" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x23f2e361, "regmap_write" },
	{ 0x7be336b9, "regcache_sync" },
	{ 0x9548c287, "snd_soc_dapm_put_enum_double" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core,snd";

MODULE_ALIAS("of:N*T*Cwlf,wm8731");
MODULE_ALIAS("of:N*T*Cwlf,wm8731C*");
MODULE_ALIAS("i2c:wm8731");

MODULE_INFO(srcversion, "3302CC79E6995267993E648");

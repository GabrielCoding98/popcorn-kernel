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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xa5644abf, "__devm_regmap_init_spi" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xc82716c4, "i2c_del_driver" },
	{ 0xdb8d0549, "__spi_register_driver" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc89fc654, "snd_soc_component_update_bits" },
	{ 0xc235d3d8, "snd_soc_put_volsw" },
	{ 0x3503cebf, "snd_soc_get_volsw" },
	{ 0xfd99fecc, "devm_regulator_bulk_get" },
	{ 0xf1cd9f03, "regulator_bulk_enable" },
	{ 0x9648e562, "snd_pcm_hw_constraint_list" },
	{ 0x7c32d0f0, "printk" },
	{ 0xbc41ccc7, "snd_soc_add_component_controls" },
	{ 0x38916bc8, "driver_unregister" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x27673299, "snd_soc_info_volsw" },
	{ 0x232fad72, "i2c_register_driver" },
	{ 0xebe2679, "regulator_bulk_disable" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbf93d2c1, "__devm_regmap_init_i2c" },
	{ 0x6c38282e, "devm_snd_soc_register_component" },
	{ 0x3558b728, "snd_soc_component_write" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x96f49763, "of_property_read_variable_u32_array" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x7be336b9, "regcache_sync" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core";

MODULE_ALIAS("of:N*T*Cwlf,wm8741");
MODULE_ALIAS("of:N*T*Cwlf,wm8741C*");
MODULE_ALIAS("i2c:wm8741");

MODULE_INFO(srcversion, "DD1BBEE4AE7BE8E5BAC26AE");

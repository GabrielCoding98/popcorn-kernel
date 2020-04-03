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
	{ 0x2e3432f1, "__devm_regmap_init" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xc82716c4, "i2c_del_driver" },
	{ 0x2efd7cc0, "regmap_update_bits_base" },
	{ 0x84239571, "i2c_transfer" },
	{ 0x3a2e1c5d, "gpio_to_desc" },
	{ 0x69c3881e, "devm_sigmadsp_init_i2c" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc235d3d8, "snd_soc_put_volsw" },
	{ 0xe4bf54f1, "regmap_read" },
	{ 0x3503cebf, "snd_soc_get_volsw" },
	{ 0xc8e6c768, "sigmadsp_attach" },
	{ 0xfd99fecc, "devm_regulator_bulk_get" },
	{ 0xf1cd9f03, "regulator_bulk_enable" },
	{ 0x470e591b, "of_property_read_variable_u8_array" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0xe783da24, "sigmadsp_reset" },
	{ 0xdb13288f, "sigmadsp_setup" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xadb7cfd4, "devm_gpio_request_one" },
	{ 0x27673299, "snd_soc_info_volsw" },
	{ 0x232fad72, "i2c_register_driver" },
	{ 0x3494bbfa, "sigmadsp_restrict_params" },
	{ 0xebe2679, "regulator_bulk_disable" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6c38282e, "devm_snd_soc_register_component" },
	{ 0x187823d9, "of_get_named_gpio_flags" },
	{ 0xc7762005, "i2c_transfer_buffer_flags" },
	{ 0xb61ae07f, "regcache_mark_dirty" },
	{ 0x2a78bf4a, "gpiod_set_raw_value_cansleep" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x96f49763, "of_property_read_variable_u32_array" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x23f2e361, "regmap_write" },
	{ 0x7be336b9, "regcache_sync" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-sigmadsp-i2c,snd-soc-core,snd-soc-sigmadsp";

MODULE_ALIAS("of:N*T*Cadi,adau1701");
MODULE_ALIAS("of:N*T*Cadi,adau1701C*");
MODULE_ALIAS("i2c:adau1401");
MODULE_ALIAS("i2c:adau1401a");
MODULE_ALIAS("i2c:adau1701");
MODULE_ALIAS("i2c:adau1702");

MODULE_INFO(srcversion, "62314E8281E8CA8E9784094");

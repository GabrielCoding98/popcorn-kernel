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
	{ 0x8a248ddb, "snd_soc_get_volsw_sx" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2e83e9ec, "snd_soc_dapm_get_enum_double" },
	{ 0xc82716c4, "i2c_del_driver" },
	{ 0x3607517e, "snd_soc_dapm_get_volsw" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc89fc654, "snd_soc_component_update_bits" },
	{ 0xc235d3d8, "snd_soc_put_volsw" },
	{ 0xe4bf54f1, "regmap_read" },
	{ 0x3503cebf, "snd_soc_get_volsw" },
	{ 0x3a6b92ef, "snd_soc_info_volsw_sx" },
	{ 0xbedf82a5, "snd_soc_info_enum_double" },
	{ 0x32a36641, "snd_soc_bytes_info" },
	{ 0xf7cef4fd, "snd_soc_dapm_put_volsw" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x27673299, "snd_soc_info_volsw" },
	{ 0x232fad72, "i2c_register_driver" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x75b6da5e, "snd_soc_get_enum_double" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbf93d2c1, "__devm_regmap_init_i2c" },
	{ 0x6c38282e, "devm_snd_soc_register_component" },
	{ 0x9b63ccf3, "devm_gpiod_get_optional" },
	{ 0x9dfc74a7, "snd_soc_put_enum_double" },
	{ 0x1b286489, "snd_soc_bytes_get" },
	{ 0x4202f912, "gpiod_set_value_cansleep" },
	{ 0xf87561d3, "snd_soc_bytes_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0xf76aa90c, "snd_soc_put_volsw_sx" },
	{ 0x23f2e361, "regmap_write" },
	{ 0x9548c287, "snd_soc_dapm_put_enum_double" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core";

MODULE_ALIAS("of:N*T*Ccirrus,cs4265");
MODULE_ALIAS("of:N*T*Ccirrus,cs4265C*");
MODULE_ALIAS("i2c:cs4265");

MODULE_INFO(srcversion, "8136104BD8545DCED247542");

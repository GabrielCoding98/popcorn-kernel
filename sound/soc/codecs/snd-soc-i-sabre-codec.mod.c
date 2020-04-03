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
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xc82716c4, "i2c_del_driver" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc89fc654, "snd_soc_component_update_bits" },
	{ 0xc235d3d8, "snd_soc_put_volsw" },
	{ 0x7a87ceed, "snd_soc_register_component" },
	{ 0x3503cebf, "snd_soc_get_volsw" },
	{ 0xbedf82a5, "snd_soc_info_enum_double" },
	{ 0xc38faeac, "snd_soc_put_volsw_range" },
	{ 0x9648e562, "snd_pcm_hw_constraint_list" },
	{ 0x13fc87dd, "snd_soc_info_volsw_range" },
	{ 0x2bc50055, "snd_soc_get_volsw_range" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x5f6bf42e, "snd_soc_unregister_component" },
	{ 0x27673299, "snd_soc_info_volsw" },
	{ 0x232fad72, "i2c_register_driver" },
	{ 0x75b6da5e, "snd_soc_get_enum_double" },
	{ 0xbf93d2c1, "__devm_regmap_init_i2c" },
	{ 0x9dfc74a7, "snd_soc_put_enum_double" },
	{ 0x13f44354, "devm_kmalloc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core";

MODULE_ALIAS("i2c:i-sabre-codec");
MODULE_ALIAS("of:N*T*Caudiophonics,i-sabre-codec");
MODULE_ALIAS("of:N*T*Caudiophonics,i-sabre-codecC*");

MODULE_INFO(srcversion, "0AC5F3E0FBDA8181672744A");

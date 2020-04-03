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
	{ 0x2e83e9ec, "snd_soc_dapm_get_enum_double" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc89fc654, "snd_soc_component_update_bits" },
	{ 0xc235d3d8, "snd_soc_put_volsw" },
	{ 0x3503cebf, "snd_soc_get_volsw" },
	{ 0xfd99fecc, "devm_regulator_bulk_get" },
	{ 0xf1cd9f03, "regulator_bulk_enable" },
	{ 0xbedf82a5, "snd_soc_info_enum_double" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x27673299, "snd_soc_info_volsw" },
	{ 0xebe2679, "regulator_bulk_disable" },
	{ 0x6c38282e, "devm_snd_soc_register_component" },
	{ 0x3558b728, "snd_soc_component_write" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x23f2e361, "regmap_write" },
	{ 0x7be336b9, "regcache_sync" },
	{ 0x2b0cfa5f, "regcache_cache_only" },
	{ 0x9548c287, "snd_soc_dapm_put_enum_double" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core";


MODULE_INFO(srcversion, "B40AA181EB03AF876B58907");

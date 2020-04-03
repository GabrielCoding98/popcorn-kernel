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
	{ 0x454e5b22, "__pm_runtime_idle" },
	{ 0x82030b4e, "__pm_runtime_disable" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2e83e9ec, "snd_soc_dapm_get_enum_double" },
	{ 0x2efd7cc0, "regmap_update_bits_base" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xcaf7b102, "__pm_runtime_resume" },
	{ 0xc89fc654, "snd_soc_component_update_bits" },
	{ 0xe4bf54f1, "regmap_read" },
	{ 0xfd99fecc, "devm_regulator_bulk_get" },
	{ 0xf1cd9f03, "regulator_bulk_enable" },
	{ 0xbedf82a5, "snd_soc_info_enum_double" },
	{ 0x37926a9c, "snd_soc_dapm_kcontrol_dapm" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x7c32d0f0, "printk" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xebe2679, "regulator_bulk_disable" },
	{ 0x3e28d1d7, "pm_runtime_enable" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x597d10f2, "devm_regulator_register_notifier" },
	{ 0x6c38282e, "devm_snd_soc_register_component" },
	{ 0x95aafef9, "__pm_runtime_set_status" },
	{ 0x3558b728, "snd_soc_component_write" },
	{ 0x9b63ccf3, "devm_gpiod_get_optional" },
	{ 0xb61ae07f, "regcache_mark_dirty" },
	{ 0x3bab9e99, "snd_soc_component_test_bits" },
	{ 0x4202f912, "gpiod_set_value_cansleep" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x132d57dd, "snd_soc_component_read32" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x23f2e361, "regmap_write" },
	{ 0x7be336b9, "regcache_sync" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core";


MODULE_INFO(srcversion, "4BE2CEF34386882EA98080D");

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
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x186eae51, "of_parse_phandle" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3af31b31, "__platform_driver_register" },
	{ 0xbedf82a5, "snd_soc_info_enum_double" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xf36b611a, "of_find_property" },
	{ 0x84b183ae, "strncmp" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xb760ed36, "snd_soc_unregister_card" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x27673299, "snd_soc_info_volsw" },
	{ 0x202036e0, "snd_soc_get_pcm_runtime" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3558b728, "snd_soc_component_write" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x9b63ccf3, "devm_gpiod_get_optional" },
	{ 0x37a0cba, "kfree" },
	{ 0xecb30410, "request_firmware" },
	{ 0x4202f912, "gpiod_set_value_cansleep" },
	{ 0xa0270f76, "snd_soc_component_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0x87b98b96, "snd_soc_limit_volume" },
	{ 0x9f2f2b7d, "platform_driver_unregister" },
	{ 0xf2255e37, "snd_soc_register_card" },
	{ 0xf41872ce, "release_firmware" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core";

MODULE_ALIAS("of:N*T*Callo,piano-dac-plus");
MODULE_ALIAS("of:N*T*Callo,piano-dac-plusC*");

MODULE_INFO(srcversion, "7E769FCB65AC0181F7E0C33");

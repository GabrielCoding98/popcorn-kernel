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
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe8a03332, "devm_gpiod_get" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x7a87ceed, "snd_soc_register_component" },
	{ 0x3af31b31, "__platform_driver_register" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x5f6bf42e, "snd_soc_unregister_component" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x978e037a, "device_property_read_u32_array" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9f2f2b7d, "platform_driver_unregister" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xd1a1d33a, "gpiod_set_value" },
	{ 0x13f44354, "devm_kmalloc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core";

MODULE_ALIAS("of:N*T*Cgoogle,voicehat");
MODULE_ALIAS("of:N*T*Cgoogle,voicehatC*");

MODULE_INFO(srcversion, "080BD9E93AFBA97DB54C4E3");

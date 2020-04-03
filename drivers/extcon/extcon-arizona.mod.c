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
	{ 0x9f2f2b7d, "platform_driver_unregister" },
	{ 0x3af31b31, "__platform_driver_register" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x7ad52565, "input_register_device" },
	{ 0xa55fc8d1, "arizona_clk32k_enable" },
	{ 0x89ee91d9, "gpiod_get_optional" },
	{ 0x37a0cba, "kfree" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x59cd1807, "device_property_present" },
	{ 0x978e037a, "device_property_read_u32_array" },
	{ 0x840bd4d, "arizona_request_irq" },
	{ 0x3e28d1d7, "pm_runtime_enable" },
	{ 0x9be9faa1, "input_set_capability" },
	{ 0xadb7cfd4, "devm_gpio_request_one" },
	{ 0xe7f8a6ba, "devm_input_allocate_device" },
	{ 0x68375040, "devm_extcon_dev_register" },
	{ 0x338b17c0, "devm_extcon_dev_allocate" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xaf1df355, "devm_regulator_get" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x4202f912, "gpiod_set_value_cansleep" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc1ea1c86, "input_event" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe4bf54f1, "regmap_read" },
	{ 0xa491d407, "extcon_get_state" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xb769278, "regulator_allow_bypass" },
	{ 0x23f2e361, "regmap_write" },
	{ 0x4b1d56ac, "__pm_runtime_suspend" },
	{ 0x366f068, "regulator_enable" },
	{ 0xef9336a1, "snd_soc_component_disable_pin" },
	{ 0xe6135cf9, "snd_soc_dapm_sync" },
	{ 0x4fd0136c, "snd_soc_component_force_enable_pin" },
	{ 0x2a78bf4a, "gpiod_set_raw_value_cansleep" },
	{ 0x3a2e1c5d, "gpio_to_desc" },
	{ 0x29b53f3e, "extcon_set_state_sync" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xcaf7b102, "__pm_runtime_resume" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x454e5b22, "__pm_runtime_idle" },
	{ 0x242978bc, "regulator_disable" },
	{ 0xc6d1f433, "arizona_clk32k_disable" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xacd1f01b, "arizona_free_irq" },
	{ 0x382cef5f, "arizona_set_irq_wake" },
	{ 0x82030b4e, "__pm_runtime_disable" },
	{ 0xa6ab47b4, "gpiod_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2efd7cc0, "regmap_update_bits_base" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=extcon-core,snd-soc-core";


MODULE_INFO(srcversion, "8F78A5F50D957CCB8E8DB1C");

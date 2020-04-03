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
	{ 0xc82716c4, "i2c_del_driver" },
	{ 0x232fad72, "i2c_register_driver" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x7ad52565, "input_register_device" },
	{ 0xce1cc28f, "devm_request_threaded_irq" },
	{ 0xd21575c5, "input_mt_init_slots" },
	{ 0xaad6ca78, "input_set_abs_params" },
	{ 0xfe990052, "gpio_free" },
	{ 0x487e1db, "gpiod_direction_input" },
	{ 0x1b331cc0, "gpiod_set_raw_value" },
	{ 0x7bbc7fcb, "gpiod_direction_output_raw" },
	{ 0x3a2e1c5d, "gpio_to_desc" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x187823d9, "of_get_named_gpio_flags" },
	{ 0xe7f8a6ba, "devm_input_allocate_device" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9caf2314, "input_mt_report_pointer_emulation" },
	{ 0x625b3305, "input_mt_report_slot_state" },
	{ 0xc1ea1c86, "input_event" },
	{ 0xc7762005, "i2c_transfer_buffer_flags" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Ceeti,egalax_ts");
MODULE_ALIAS("of:N*T*Ceeti,egalax_tsC*");
MODULE_ALIAS("i2c:egalax_ts");

MODULE_INFO(srcversion, "C757A10FF0D460470DAE851");

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
	{ 0x843891f, "pinconf_generic_dt_free_map" },
	{ 0xc82716c4, "i2c_del_driver" },
	{ 0x38916bc8, "driver_unregister" },
	{ 0x232fad72, "i2c_register_driver" },
	{ 0xdb8d0549, "__spi_register_driver" },
	{ 0xbcb90aa3, "spi_get_device_id" },
	{ 0x978e037a, "device_property_read_u32_array" },
	{ 0x5920f98d, "of_match_device" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0xce1cc28f, "devm_request_threaded_irq" },
	{ 0xd9180e1f, "gpiochip_set_nested_irqchip" },
	{ 0x15f4443f, "gpiochip_irqchip_add_key" },
	{ 0x3837fd3, "handle_simple_irq" },
	{ 0x2e3432f1, "__devm_regmap_init" },
	{ 0x9a5e09c4, "devm_kmemdup" },
	{ 0x98f3aa61, "devm_pinctrl_register" },
	{ 0xf52dcedb, "devm_kasprintf" },
	{ 0x59cd1807, "device_property_present" },
	{ 0x588d596b, "devm_gpiochip_add_data" },
	{ 0xbf93d2c1, "__devm_regmap_init_i2c" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x2cb1813b, "irq_find_mapping" },
	{ 0x7be336b9, "regcache_sync" },
	{ 0x2b0cfa5f, "regcache_cache_only" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0x956348d2, "gpiochip_is_requested" },
	{ 0x23f2e361, "regmap_write" },
	{ 0x7fa87db6, "regcache_cache_bypass" },
	{ 0xe4bf54f1, "regmap_read" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x745f00e6, "gpiochip_get_data" },
	{ 0xd8340e2c, "spi_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x212ec5a7, "spi_write_then_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xe7ccca8e, "pinctrl_dev_get_drvdata" },
	{ 0x2efd7cc0, "regmap_update_bits_base" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x613ab4c7, "pinconf_generic_dt_node_to_map" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("spi:mcp23s08");
MODULE_ALIAS("spi:mcp23s17");
MODULE_ALIAS("spi:mcp23s18");
MODULE_ALIAS("i2c:mcp23008");
MODULE_ALIAS("i2c:mcp23017");
MODULE_ALIAS("i2c:mcp23018");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23008");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23008C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23017");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23017C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23018");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23018C*");
MODULE_ALIAS("of:N*T*Cmcp,mcp23008");
MODULE_ALIAS("of:N*T*Cmcp,mcp23008C*");
MODULE_ALIAS("of:N*T*Cmcp,mcp23017");
MODULE_ALIAS("of:N*T*Cmcp,mcp23017C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23s08");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23s08C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23s17");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23s17C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23s18");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23s18C*");
MODULE_ALIAS("of:N*T*Cmcp,mcp23s08");
MODULE_ALIAS("of:N*T*Cmcp,mcp23s08C*");
MODULE_ALIAS("of:N*T*Cmcp,mcp23s17");
MODULE_ALIAS("of:N*T*Cmcp,mcp23s17C*");

MODULE_INFO(srcversion, "D5FA3F72086C032F65CF9BE");

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
	{ 0x740d3e2e, "_dev_warn" },
	{ 0xab4ccadf, "i2c_mux_add_adapter" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xce1cc28f, "devm_request_threaded_irq" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xbf18b4aa, "irq_create_mapping" },
	{ 0xba559a5e, "irq_set_chip_and_handler_name" },
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0x3837fd3, "handle_simple_irq" },
	{ 0x7d276e15, "__irq_domain_add" },
	{ 0xeeabed23, "irq_domain_simple_ops" },
	{ 0xf36b611a, "of_find_property" },
	{ 0x57019f83, "i2c_smbus_write_byte" },
	{ 0xc417ee8e, "i2c_get_device_id" },
	{ 0x87bcbcef, "of_device_get_match_data" },
	{ 0x4202f912, "gpiod_set_value_cansleep" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x9b63ccf3, "devm_gpiod_get_optional" },
	{ 0x4248e6e, "i2c_mux_alloc" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x21cebce2, "__i2c_smbus_xfer" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x77cf79c6, "i2c_smbus_read_byte" },
	{ 0xbaf269a6, "i2c_mux_del_adapters" },
	{ 0xa8a8f359, "irq_domain_remove" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0x2cb1813b, "irq_find_mapping" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=i2c-mux";

MODULE_ALIAS("of:N*T*Cnxp,pca9540");
MODULE_ALIAS("of:N*T*Cnxp,pca9540C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9542");
MODULE_ALIAS("of:N*T*Cnxp,pca9542C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9543");
MODULE_ALIAS("of:N*T*Cnxp,pca9543C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9544");
MODULE_ALIAS("of:N*T*Cnxp,pca9544C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9545");
MODULE_ALIAS("of:N*T*Cnxp,pca9545C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9546");
MODULE_ALIAS("of:N*T*Cnxp,pca9546C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9547");
MODULE_ALIAS("of:N*T*Cnxp,pca9547C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9548");
MODULE_ALIAS("of:N*T*Cnxp,pca9548C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9846");
MODULE_ALIAS("of:N*T*Cnxp,pca9846C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9847");
MODULE_ALIAS("of:N*T*Cnxp,pca9847C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9848");
MODULE_ALIAS("of:N*T*Cnxp,pca9848C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9849");
MODULE_ALIAS("of:N*T*Cnxp,pca9849C*");
MODULE_ALIAS("i2c:pca9540");
MODULE_ALIAS("i2c:pca9542");
MODULE_ALIAS("i2c:pca9543");
MODULE_ALIAS("i2c:pca9544");
MODULE_ALIAS("i2c:pca9545");
MODULE_ALIAS("i2c:pca9546");
MODULE_ALIAS("i2c:pca9547");
MODULE_ALIAS("i2c:pca9548");
MODULE_ALIAS("i2c:pca9846");
MODULE_ALIAS("i2c:pca9847");
MODULE_ALIAS("i2c:pca9848");
MODULE_ALIAS("i2c:pca9849");

MODULE_INFO(srcversion, "B6540BC4ADCB99B03089434");

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
	{ 0x59e5070d, "__do_div64" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x3e28d1d7, "pm_runtime_enable" },
	{ 0x95aafef9, "__pm_runtime_set_status" },
	{ 0x588d596b, "devm_gpiochip_add_data" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x9264b8ce, "pwmchip_add" },
	{ 0x59cd1807, "device_property_present" },
	{ 0xbf93d2c1, "__devm_regmap_init_i2c" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0xd62a9bc7, "pwm_set_chip_data" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe4bf54f1, "regmap_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x745f00e6, "gpiochip_get_data" },
	{ 0xe17e7d4c, "pwm_get_chip_data" },
	{ 0xcaf7b102, "__pm_runtime_resume" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x956348d2, "gpiochip_is_requested" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x454e5b22, "__pm_runtime_idle" },
	{ 0x23f2e361, "regmap_write" },
	{ 0x82030b4e, "__pm_runtime_disable" },
	{ 0xcbc657a3, "pwmchip_remove" },
	{ 0x2efd7cc0, "regmap_update_bits_base" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cnxp,pca9685-pwm");
MODULE_ALIAS("of:N*T*Cnxp,pca9685-pwmC*");
MODULE_ALIAS("i2c:pca9685");

MODULE_INFO(srcversion, "03F7EE5675AC3E5ADAF2651");

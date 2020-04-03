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
	{ 0x73a7a766, "param_ops_uint" },
	{ 0x9f2f2b7d, "platform_driver_unregister" },
	{ 0x3af31b31, "__platform_driver_register" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xfefa79ff, "i2c_add_adapter" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xc5604800, "clk_set_rate_exclusive" },
	{ 0x96f49763, "of_property_read_variable_u32_array" },
	{ 0xbb8334a7, "devm_clk_register" },
	{ 0x5e223257, "clk_hw_register_clkdev" },
	{ 0xc569d8ce, "__clk_get_name" },
	{ 0xb81960ca, "snprintf" },
	{ 0x111b5a08, "devm_ioremap_resource" },
	{ 0x6af01fe2, "platform_get_resource" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe6c12171, "complete" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0x7c32d0f0, "printk" },
	{ 0x3d39806a, "i2c_del_adapter" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xacb4d88c, "clk_rate_exclusive_put" },
	{ 0x8eeb76a7, "devm_clk_get" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xe707d823, "__aeabi_uidiv" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-i2c");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-i2cC*");

MODULE_INFO(srcversion, "37E6BB0ACACD807A9F20435");

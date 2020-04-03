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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xa738c28a, "module_layout" },
	{ 0x43745509, "param_ops_charp" },
	{ 0x3e872658, "param_array_ops" },
	{ 0x73a7a766, "param_ops_uint" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0xc411e5a5, "param_ops_short" },
	{ 0x9f2f2b7d, "platform_driver_unregister" },
	{ 0x38916bc8, "driver_unregister" },
	{ 0x3af31b31, "__platform_driver_register" },
	{ 0xdb8d0549, "__spi_register_driver" },
	{ 0xf1530071, "fbtft_unregister_framebuffer" },
	{ 0x85baf7d0, "fbtft_write_spi_emulate_9" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x257d1bed, "fbtft_write_gpio8_wr" },
	{ 0x8e3040af, "fbtft_write_vmem16_bus8" },
	{ 0xac178b14, "fbtft_framebuffer_release" },
	{ 0xc3a475ca, "fbtft_register_framebuffer" },
	{ 0x92379247, "fbtft_register_backlight" },
	{ 0x689ac185, "fbtft_write_vmem16_bus16" },
	{ 0x146abff8, "fbtft_write_gpio16_wr" },
	{ 0xd38fdec, "fbtft_write_gpio16_wr_latched" },
	{ 0x4397c424, "fbtft_write_reg16_bus16" },
	{ 0xf0ff4a1e, "fbtft_write_reg8_bus8" },
	{ 0x8a99723, "fbtft_write_vmem16_bus9" },
	{ 0xcfa15680, "fbtft_write_reg8_bus9" },
	{ 0xf3584c2d, "fbtft_write_spi" },
	{ 0x68463d02, "fbtft_write_reg16_bus8" },
	{ 0xe8172b1, "fbtft_init_display" },
	{ 0xb5ead233, "fbtft_framebuffer_alloc" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fbtft";

MODULE_ALIAS("platform:flexpfb");

MODULE_INFO(srcversion, "CABE5C45FF8167A57719B01");

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
	{ 0x9f2f2b7d, "platform_driver_unregister" },
	{ 0x38916bc8, "driver_unregister" },
	{ 0x3af31b31, "__platform_driver_register" },
	{ 0xdb8d0549, "__spi_register_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2d2ee99d, "fbtft_dbg_hex" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x1b331cc0, "gpiod_set_raw_value" },
	{ 0x3a2e1c5d, "gpio_to_desc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x22d45e69, "fbtft_probe_common" },
	{ 0x4781f06, "fbtft_remove_common" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fbtft";

MODULE_ALIAS("of:N*T*Cdisplaytronic,fb_agm1264k-fl");
MODULE_ALIAS("of:N*T*Cdisplaytronic,fb_agm1264k-flC*");

MODULE_INFO(srcversion, "7632E1CB20BB443E1107E3F");

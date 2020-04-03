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
	{ 0x38916bc8, "driver_unregister" },
	{ 0xdb8d0549, "__spi_register_driver" },
	{ 0xc1ea1c86, "input_event" },
	{ 0x3e28d1d7, "pm_runtime_enable" },
	{ 0xfbfe6a3, "input_register_polled_device" },
	{ 0xe379d7db, "spi_setup" },
	{ 0x2298084f, "input_ff_create_memless" },
	{ 0x9be9faa1, "input_set_capability" },
	{ 0xaad6ca78, "input_set_abs_params" },
	{ 0xb81960ca, "snprintf" },
	{ 0xbdaa603b, "devm_input_allocate_polled_device" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0xcaf7b102, "__pm_runtime_resume" },
	{ 0x454e5b22, "__pm_runtime_idle" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xd8340e2c, "spi_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=input-polldev,ff-memless";

MODULE_ALIAS("spi:psxpad-spi");

MODULE_INFO(srcversion, "7522D66E2C6B14A975B49C8");

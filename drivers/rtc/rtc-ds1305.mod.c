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
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0xce1cc28f, "devm_request_threaded_irq" },
	{ 0x5e68e436, "rtc_nvmem_register" },
	{ 0xf9721b52, "__rtc_register_device" },
	{ 0x8e10f129, "devm_rtc_allocate_device" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0xd8340e2c, "spi_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0x59aa5df9, "rtc_update_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x212ec5a7, "spi_write_then_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x2dc9c197, "devm_free_irq" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "C0908A062AA72F590A9CD72");

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
	{ 0x59e5070d, "__do_div64" },
	{ 0xfffa3100, "sg_next" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc463fdd3, "devm_spi_register_controller" },
	{ 0x815588a6, "clk_enable" },
	{ 0x5a163a5, "put_device" },
	{ 0xce1cc28f, "devm_request_threaded_irq" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x3f0008d3, "dma_request_slave_channel" },
	{ 0xb729b456, "of_get_address" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x749431db, "platform_get_irq" },
	{ 0x8eeb76a7, "devm_clk_get" },
	{ 0x111b5a08, "devm_ioremap_resource" },
	{ 0x6af01fe2, "platform_get_resource" },
	{ 0x589284bc, "__spi_alloc_controller" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe6c12171, "complete" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x93ea210a, "dma_release_channel" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-spi");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-spiC*");

MODULE_INFO(srcversion, "CC0CA8084657816640759C9");
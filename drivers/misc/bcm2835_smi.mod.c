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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0x815588a6, "clk_enable" },
	{ 0xc2451da0, "mem_map" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xd484febe, "arm_dma_ops" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x111b5a08, "devm_ioremap_resource" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x3af31b31, "__platform_driver_register" },
	{ 0x3f0008d3, "dma_request_slave_channel" },
	{ 0x6af01fe2, "platform_get_resource" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xb729b456, "of_get_address" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x8eeb76a7, "devm_clk_get" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x93ea210a, "dma_release_channel" },
	{ 0x37a0cba, "kfree" },
	{ 0xe7b69bdb, "dma_wait_for_async_tx" },
	{ 0x581cde4e, "up" },
	{ 0xc555cb33, "of_find_device_by_node" },
	{ 0x9f2f2b7d, "platform_driver_unregister" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0xad51ab3c, "dmam_alloc_coherent" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-smi");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-smiC*");

MODULE_INFO(srcversion, "BD4D3197D66512576DCCB4D");

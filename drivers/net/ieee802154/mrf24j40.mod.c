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
	{ 0xa57617f7, "regmap_write_async" },
	{ 0xf3cd4c92, "ieee802154_xmit_complete" },
	{ 0xc7f53146, "ieee802154_rx_irqsafe" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0xe69bfc72, "__netdev_alloc_skb" },
	{ 0xad409207, "ieee802154_register_hw" },
	{ 0xce1cc28f, "devm_request_threaded_irq" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x9e4c5dd2, "irq_get_irq_data" },
	{ 0xbcb90aa3, "spi_get_device_id" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x2e3432f1, "__devm_regmap_init" },
	{ 0xa5644abf, "__devm_regmap_init_spi" },
	{ 0x3500bddf, "ieee802154_alloc_hw" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x7c32d0f0, "printk" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x23f2e361, "regmap_write" },
	{ 0x2efd7cc0, "regmap_update_bits_base" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd8340e2c, "spi_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0x9d669763, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x212ec5a7, "spi_write_then_read" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xf20670b5, "spi_async" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xc8ecf299, "ieee802154_free_hw" },
	{ 0xbf29a08c, "ieee802154_unregister_hw" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac802154";

MODULE_ALIAS("spi:mrf24j40");
MODULE_ALIAS("spi:mrf24j40ma");
MODULE_ALIAS("spi:mrf24j40mc");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40ma");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40maC*");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40mc");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40mcC*");

MODULE_INFO(srcversion, "6A4E10941553DEAF477A1C2");

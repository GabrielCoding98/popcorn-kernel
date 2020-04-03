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
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xad409207, "ieee802154_register_hw" },
	{ 0xce1cc28f, "devm_request_threaded_irq" },
	{ 0x9e4c5dd2, "irq_get_irq_data" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xa5644abf, "__devm_regmap_init_spi" },
	{ 0x3500bddf, "ieee802154_alloc_hw" },
	{ 0x2a78bf4a, "gpiod_set_raw_value_cansleep" },
	{ 0xadb7cfd4, "devm_gpio_request_one" },
	{ 0x470e591b, "of_property_read_variable_u8_array" },
	{ 0x187823d9, "of_get_named_gpio_flags" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x4a16dd15, "hrtimer_start_range_ns" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xf20670b5, "spi_async" },
	{ 0xe4bf54f1, "regmap_read" },
	{ 0x5b586cbc, "hrtimer_init" },
	{ 0x5f754e5a, "memset" },
	{ 0xe6c12171, "complete" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x23f2e361, "regmap_write" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xfbd2e5a2, "ieee802154_wake_queue" },
	{ 0xf3cd4c92, "ieee802154_xmit_complete" },
	{ 0x37a0cba, "kfree" },
	{ 0xc7f53146, "ieee802154_rx_irqsafe" },
	{ 0x9d669763, "memcpy" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0xe69bfc72, "__netdev_alloc_skb" },
	{ 0xc8ecf299, "ieee802154_free_hw" },
	{ 0xbf29a08c, "ieee802154_unregister_hw" },
	{ 0x1b331cc0, "gpiod_set_raw_value" },
	{ 0x3a2e1c5d, "gpio_to_desc" },
	{ 0x2efd7cc0, "regmap_update_bits_base" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac802154";

MODULE_ALIAS("spi:at86rf230");
MODULE_ALIAS("spi:at86rf231");
MODULE_ALIAS("spi:at86rf233");
MODULE_ALIAS("spi:at86rf212");
MODULE_ALIAS("of:N*T*Catmel,at86rf230");
MODULE_ALIAS("of:N*T*Catmel,at86rf230C*");
MODULE_ALIAS("of:N*T*Catmel,at86rf231");
MODULE_ALIAS("of:N*T*Catmel,at86rf231C*");
MODULE_ALIAS("of:N*T*Catmel,at86rf233");
MODULE_ALIAS("of:N*T*Catmel,at86rf233C*");
MODULE_ALIAS("of:N*T*Catmel,at86rf212");
MODULE_ALIAS("of:N*T*Catmel,at86rf212C*");

MODULE_INFO(srcversion, "9C6D0AC3995B6DA8E10138B");

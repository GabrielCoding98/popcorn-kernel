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
	{ 0xafe6163e, "uart_unregister_driver" },
	{ 0xc82716c4, "i2c_del_driver" },
	{ 0xdb8d0549, "__spi_register_driver" },
	{ 0x232fad72, "i2c_register_driver" },
	{ 0x7c32d0f0, "printk" },
	{ 0xc438f21b, "uart_register_driver" },
	{ 0xbcb90aa3, "spi_get_device_id" },
	{ 0xa5644abf, "__devm_regmap_init_spi" },
	{ 0xe379d7db, "spi_setup" },
	{ 0xbf93d2c1, "__devm_regmap_init_i2c" },
	{ 0x5920f98d, "of_match_device" },
	{ 0xce1cc28f, "devm_request_threaded_irq" },
	{ 0x98f805ea, "uart_add_one_port" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x42574c05, "gpiochip_add_data_with_key" },
	{ 0xfd2b7050, "sched_setscheduler" },
	{ 0x1c2a847c, "wake_up_process" },
	{ 0x880737be, "kthread_create_on_node" },
	{ 0x955b0e2e, "kthread_worker_fn" },
	{ 0x8113f14c, "__kthread_init_worker" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x8eeb76a7, "devm_clk_get" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x26ded961, "do_SAK" },
	{ 0x2bb457a1, "tty_flip_buffer_push" },
	{ 0xb6838484, "uart_insert_char" },
	{ 0x1627ea5b, "regmap_raw_read" },
	{ 0x745f00e6, "gpiochip_get_data" },
	{ 0xf26784fd, "uart_update_timeout" },
	{ 0x8e14b7b1, "uart_get_baud_rate" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xf9a482f9, "msleep" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xa450da4d, "uart_write_wakeup" },
	{ 0xaf995b95, "regmap_raw_write" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe4bf54f1, "regmap_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x54587f46, "kthread_queue_work" },
	{ 0x7fa87db6, "regcache_cache_bypass" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x23f2e361, "regmap_write" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x6a23becf, "gpiochip_remove" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xdccedf20, "kthread_stop" },
	{ 0x26c60a04, "kthread_flush_worker" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x5dfe2932, "uart_remove_one_port" },
	{ 0x2efd7cc0, "regmap_update_bits_base" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:sc16is74x");
MODULE_ALIAS("i2c:sc16is740");
MODULE_ALIAS("i2c:sc16is741");
MODULE_ALIAS("i2c:sc16is750");
MODULE_ALIAS("i2c:sc16is752");
MODULE_ALIAS("i2c:sc16is760");
MODULE_ALIAS("i2c:sc16is762");
MODULE_ALIAS("spi:sc16is74x");
MODULE_ALIAS("spi:sc16is740");
MODULE_ALIAS("spi:sc16is741");
MODULE_ALIAS("spi:sc16is750");
MODULE_ALIAS("spi:sc16is752");
MODULE_ALIAS("spi:sc16is760");
MODULE_ALIAS("spi:sc16is762");
MODULE_ALIAS("of:N*T*Cnxp,sc16is740");
MODULE_ALIAS("of:N*T*Cnxp,sc16is740C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is741");
MODULE_ALIAS("of:N*T*Cnxp,sc16is741C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is750");
MODULE_ALIAS("of:N*T*Cnxp,sc16is750C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is752");
MODULE_ALIAS("of:N*T*Cnxp,sc16is752C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is760");
MODULE_ALIAS("of:N*T*Cnxp,sc16is760C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is762");
MODULE_ALIAS("of:N*T*Cnxp,sc16is762C*");

MODULE_INFO(srcversion, "93ECB266C23706F866C2C14");

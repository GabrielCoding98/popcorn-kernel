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
	{ 0xca7b87c7, "_dev_err" },
	{ 0x6720a425, "devm_rc_register_device" },
	{ 0xe8a03332, "devm_gpiod_get" },
	{ 0x983eb314, "devm_rc_allocate_device" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xd1a1d33a, "gpiod_set_value" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cgpio-ir-tx");
MODULE_ALIAS("of:N*T*Cgpio-ir-txC*");

MODULE_INFO(srcversion, "62231A7D4D76CBA20496EB3");

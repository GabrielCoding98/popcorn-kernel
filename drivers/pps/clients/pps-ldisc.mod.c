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
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0x1fc6f2c7, "tty_register_ldisc" },
	{ 0x84c574a6, "n_tty_inherit_ops" },
	{ 0x104319e3, "pps_event" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xdafcdc3a, "ktime_get_snapshot" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7c32d0f0, "printk" },
	{ 0xe2c1adb1, "pps_register_source" },
	{ 0xb81960ca, "snprintf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xfe272662, "pps_unregister_source" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x675072ee, "pps_lookup_dev" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pps_core";


MODULE_INFO(srcversion, "850CA54771E0E69A4360278");

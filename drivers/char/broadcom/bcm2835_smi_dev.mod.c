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
	{ 0x851dd2f, "device_create" },
	{ 0xd8a2e825, "__class_create" },
	{ 0x90d1cb32, "cdev_add" },
	{ 0xef2acd4, "cdev_init" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0xf0b758f2, "bcm2835_smi_get" },
	{ 0x186eae51, "of_parse_phandle" },
	{ 0xb33bd6cb, "bcm2835_smi_read_buf" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa00dc18f, "bcm2835_smi_write_buf" },
	{ 0x9ead4bb0, "bcm2835_smi_user_dma" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9cf41a78, "down_timeout" },
	{ 0x5f754e5a, "memset" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xab7a4d1d, "bcm2835_smi_set_regs_from_settings" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x72db83c4, "bcm2835_smi_set_address" },
	{ 0xf6720336, "bcm2835_smi_get_settings_from_regs" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x7fe8a44d, "cdev_del" },
	{ 0xdcd02f6d, "class_destroy" },
	{ 0xad2e5d45, "device_destroy" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bcm2835_smi";

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-smi-dev");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-smi-devC*");

MODULE_INFO(srcversion, "EAA6F6E38EA847DDED23243");

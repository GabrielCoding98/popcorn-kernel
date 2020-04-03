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
	{ 0xf9a482f9, "msleep" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xc82716c4, "i2c_del_driver" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc89fc654, "snd_soc_component_update_bits" },
	{ 0xc235d3d8, "snd_soc_put_volsw" },
	{ 0x7a87ceed, "snd_soc_register_component" },
	{ 0x3503cebf, "snd_soc_get_volsw" },
	{ 0x7c32d0f0, "printk" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x5f6bf42e, "snd_soc_unregister_component" },
	{ 0x27673299, "snd_soc_info_volsw" },
	{ 0x232fad72, "i2c_register_driver" },
	{ 0xbf93d2c1, "__devm_regmap_init_i2c" },
	{ 0x3558b728, "snd_soc_component_write" },
	{ 0xc7762005, "i2c_transfer_buffer_flags" },
	{ 0x37a0cba, "kfree" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x23f2e361, "regmap_write" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core";

MODULE_ALIAS("i2c:tas5713");
MODULE_ALIAS("of:N*T*Cti,tas5713");
MODULE_ALIAS("of:N*T*Cti,tas5713C*");

MODULE_INFO(srcversion, "7FA3B96E10142AAD075ECC2");

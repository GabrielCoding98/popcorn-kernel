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
	{ 0xc82716c4, "i2c_del_driver" },
	{ 0x232fad72, "i2c_register_driver" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x4451c1cf, "adxl34x_probe" },
	{ 0x6136ff8e, "i2c_smbus_read_i2c_block_data" },
	{ 0xc565bdd5, "i2c_smbus_read_byte_data" },
	{ 0xc7762005, "i2c_transfer_buffer_flags" },
	{ 0xe6abbc5c, "i2c_smbus_write_byte_data" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x49a4fcbd, "adxl34x_remove" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=adxl34x";

MODULE_ALIAS("of:N*T*Cadi,adxl345");
MODULE_ALIAS("of:N*T*Cadi,adxl345C*");
MODULE_ALIAS("of:N*T*Cadi,adxl34x");
MODULE_ALIAS("of:N*T*Cadi,adxl34xC*");
MODULE_ALIAS("i2c:adxl34x");

MODULE_INFO(srcversion, "385DD28C6E4503161790D18");
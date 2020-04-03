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
	{ 0x3e872658, "param_array_ops" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0xb7700415, "param_ops_int" },
	{ 0xf7f21a6e, "no_llseek" },
	{ 0x98ce88a8, "debugfs_remove_recursive" },
	{ 0x793b43cb, "platform_device_unregister" },
	{ 0x9f2f2b7d, "platform_driver_unregister" },
	{ 0xbdb93cb5, "platform_device_register_full" },
	{ 0x5f754e5a, "memset" },
	{ 0x3af31b31, "__platform_driver_register" },
	{ 0x7c32d0f0, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x553d96fc, "irq_sim_fire" },
	{ 0x4202f912, "gpiod_set_value_cansleep" },
	{ 0x87925ca6, "kstrtoint_from_user" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x226c9b6d, "single_open" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xa176f7d9, "debugfs_create_file" },
	{ 0xc0206c4e, "debugfs_create_symlink" },
	{ 0x4c7a68b0, "debugfs_create_dir" },
	{ 0x588d596b, "devm_gpiochip_add_data" },
	{ 0x224e3589, "devm_irq_sim_init" },
	{ 0xf52dcedb, "devm_kasprintf" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0x874a5089, "irq_sim_irqnum" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x745f00e6, "gpiochip_get_data" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F4BB2A5A6E05E8BA1526592");

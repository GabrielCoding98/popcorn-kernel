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
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x689250be, "rt_mutex_lock" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x84239571, "i2c_transfer" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xfefa79ff, "i2c_add_adapter" },
	{ 0x21cebce2, "__i2c_smbus_xfer" },
	{ 0x2dbe8868, "rt_mutex_trylock" },
	{ 0xdbee2eb0, "rt_mutex_unlock" },
	{ 0xfdfa0bcb, "sysfs_remove_link" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x3ff924c9, "of_get_child_by_name" },
	{ 0x1360e1c2, "i2c_adapter_type" },
	{ 0x68700f87, "sysfs_create_link" },
	{ 0x3d39806a, "i2c_del_adapter" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xaedc75de, "i2c_smbus_xfer" },
	{ 0x4038028, "i2c_add_numbered_adapter" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x37bbe493, "of_get_next_child" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xa6a99d80, "of_node_get" },
	{ 0x37a0cba, "kfree" },
	{ 0xdf7ea257, "__i2c_transfer" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0x96f49763, "of_property_read_variable_u32_array" },
	{ 0xa3a5078a, "of_node_put" },
	{ 0x13f44354, "devm_kmalloc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F6A4993AF93A24A32937858");

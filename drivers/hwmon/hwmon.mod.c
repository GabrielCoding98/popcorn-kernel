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
	{ 0x9a1dfd65, "strpbrk" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x91715312, "sprintf" },
	{ 0xa8d3417e, "devres_alloc_node" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x3521c7a0, "device_register" },
	{ 0x7c32d0f0, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x11a13e31, "_kstrtol" },
	{ 0x9cc3f147, "class_unregister" },
	{ 0x21af32f7, "ida_free" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x58c9433d, "__class_register" },
	{ 0xbaf123b8, "devres_release" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf436e6e0, "devres_add" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xe2fe9eb9, "devm_thermal_zone_of_sensor_register" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x16eee64a, "device_unregister" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x184c48a6, "dev_set_name" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0xeb00f3ca, "ida_alloc_range" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F1BDB9FDC7D4951B3430E16");

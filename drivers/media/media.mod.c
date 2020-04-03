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
	{ 0x87a64612, "bus_register" },
	{ 0x2690e6c1, "_find_next_zero_bit_le" },
	{ 0x37788505, "device_remove_file" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xef2acd4, "cdev_init" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xfe90c4a6, "_find_first_zero_bit_le" },
	{ 0xf7f21a6e, "no_llseek" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x91715312, "sprintf" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x21af32f7, "ida_free" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x48bbceb4, "bus_unregister" },
	{ 0x4de2e10c, "device_create_file" },
	{ 0x77c59098, "module_put" },
	{ 0x4a2e039d, "fwnode_graph_parse_endpoint" },
	{ 0x5a163a5, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x348b0823, "cdev_device_add" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x47d7efde, "get_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x1017cd77, "device_initialize" },
	{ 0x48102a43, "cdev_device_del" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0x184c48a6, "dev_set_name" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x445c816c, "ida_destroy" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xca0304ef, "try_module_get" },
	{ 0xeb00f3ca, "ida_alloc_range" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "D935BB0278C001EB97011BC");

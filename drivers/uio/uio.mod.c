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
	{ 0xf4e5e0ab, "kobject_put" },
	{ 0x662c28b9, "cdev_alloc" },
	{ 0x7fe8a44d, "cdev_del" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xc2451da0, "mem_map" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xe18b6e3d, "kobject_uevent" },
	{ 0xbd4a6a92, "kobject_set_name" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x91715312, "sprintf" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xa0b6c3dd, "kobject_create_and_add" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x20c7f5cc, "idr_destroy" },
	{ 0x3521c7a0, "device_register" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x9cc3f147, "class_unregister" },
	{ 0x566a2d67, "fasync_helper" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x988694e4, "noop_llseek" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x5f3fd789, "idr_alloc" },
	{ 0xeff5f04f, "kobject_add" },
	{ 0x58c9433d, "__class_register" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x61275678, "idr_remove" },
	{ 0x90d1cb32, "cdev_add" },
	{ 0x77c59098, "module_put" },
	{ 0x5a163a5, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x47d7efde, "get_device" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x7dc644ce, "remap_pfn_range" },
	{ 0x2dd65b78, "kobject_init" },
	{ 0xab5942cb, "kill_fasync" },
	{ 0x16eee64a, "device_unregister" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x962498e4, "vmalloc_to_page" },
	{ 0x184c48a6, "dev_set_name" },
	{ 0xaf38e081, "idr_find" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xca0304ef, "try_module_get" },
	{ 0xc1514a3b, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "65ED4E1021FE6D55BEF5F0D");

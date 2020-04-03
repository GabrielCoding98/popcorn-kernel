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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x402b8281, "__request_module" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x4c7a68b0, "debugfs_create_dir" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xe418e0c6, "proc_create_single_data" },
	{ 0x491483ea, "seq_puts" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xc8bd3f8b, "deactivate_locked_super" },
	{ 0xd32d6c08, "lockref_get" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0x4fb304c5, "sysfs_create_files" },
	{ 0xebd6836c, "remove_proc_entry" },
	{ 0xad2e5d45, "device_destroy" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x8bdc371, "__register_chrdev" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x98ce88a8, "debugfs_remove_recursive" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xd9b93e12, "lookup_bdev" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0x20c7f5cc, "idr_destroy" },
	{ 0xc7575f53, "bdi_alloc_node" },
	{ 0x3521c7a0, "device_register" },
	{ 0x7c32d0f0, "printk" },
	{ 0x9cc3f147, "class_unregister" },
	{ 0x5d157ca1, "sget" },
	{ 0xf36b611a, "of_find_property" },
	{ 0x3a68b1fe, "fixed_size_llseek" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x851dd2f, "device_create" },
	{ 0x5f3fd789, "idr_alloc" },
	{ 0xc8cd1bd5, "of_prop_next_string" },
	{ 0x58c9433d, "__class_register" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x3ff924c9, "of_get_child_by_name" },
	{ 0x61275678, "idr_remove" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x77c59098, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0xaa49bd7c, "idr_get_next" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb5567bb7, "bdi_put" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xf7350193, "__module_get" },
	{ 0x827b881a, "sysfs_remove_files" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xa6a99d80, "of_node_get" },
	{ 0x37a0cba, "kfree" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0x9d669763, "memcpy" },
	{ 0x16eee64a, "device_unregister" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8c31ed6f, "bdi_register" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0xb81960ca, "snprintf" },
	{ 0x184c48a6, "dev_set_name" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xa3a5078a, "of_node_put" },
	{ 0xaf38e081, "idr_find" },
	{ 0xe375cc23, "bdput" },
	{ 0xca0304ef, "try_module_get" },
	{ 0xd500610c, "generic_shutdown_super" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "CCC6048A3B5DC3A5569A0AD");

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
	{ 0xf5037a81, "kmem_cache_destroy" },
	{ 0x7fe8a44d, "cdev_del" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xef2acd4, "cdev_init" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x64ac2467, "up_read" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x56377fea, "mtd_block_isbad" },
	{ 0x4c7a68b0, "debugfs_create_dir" },
	{ 0xc2451da0, "mem_map" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0x7bec6a38, "seq_open" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x491483ea, "seq_puts" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x108d6327, "mtd_get_device_size" },
	{ 0xf7f21a6e, "no_llseek" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x999e8297, "vfree" },
	{ 0x82b7fd55, "blocking_notifier_chain_unregister" },
	{ 0xa176f7d9, "debugfs_create_file" },
	{ 0x1afb6ac1, "mtd_write" },
	{ 0x91715312, "sprintf" },
	{ 0x98ce88a8, "debugfs_remove_recursive" },
	{ 0x8e3afba1, "seq_read" },
	{ 0x880737be, "kthread_create_on_node" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf1c2ed95, "down_read" },
	{ 0xc3d52144, "down_write_trylock" },
	{ 0xf3932602, "mtd_erase" },
	{ 0xece784c2, "rb_first" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x8a0b551, "misc_register" },
	{ 0xd7985424, "kern_path" },
	{ 0x5f754e5a, "memset" },
	{ 0x3521c7a0, "device_register" },
	{ 0x24868151, "freezing_slow_path" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xdccedf20, "kthread_stop" },
	{ 0xc2cdb164, "mtd_read" },
	{ 0x71c90087, "memcmp" },
	{ 0x9cc3f147, "class_unregister" },
	{ 0x3e87e6b9, "put_mtd_device" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x3a68b1fe, "fixed_size_llseek" },
	{ 0x84b183ae, "strncmp" },
	{ 0x25897c6, "debugfs_remove" },
	{ 0x9f1691c2, "kmem_cache_free" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x122170da, "crc32_le" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x373db350, "kstrtoint" },
	{ 0x2c63826b, "simple_open" },
	{ 0x25c777e3, "up_write" },
	{ 0x58c9433d, "__class_register" },
	{ 0x76e18a1a, "down_write" },
	{ 0xa5ba6fc7, "mtd_block_markbad" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x90d1cb32, "cdev_add" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0x77c59098, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xaae6676e, "kmem_cache_alloc" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0x5a163a5, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7567ee06, "blocking_notifier_call_chain" },
	{ 0x1000e51, "schedule" },
	{ 0x348b0823, "cdev_device_add" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x1c2a847c, "wake_up_process" },
	{ 0xa03dbc56, "get_mtd_device" },
	{ 0xe8443689, "blocking_notifier_chain_register" },
	{ 0xe3a8db05, "path_put" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xc90a2a90, "get_mtd_device_nm" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x47d7efde, "get_device" },
	{ 0xaddc9a8a, "kmem_cache_create" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x6b248f3e, "seq_lseek" },
	{ 0xadcf68e2, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0x9d669763, "memcpy" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x1017cd77, "device_initialize" },
	{ 0x9dc08a71, "pgprot_kernel" },
	{ 0xca9360b5, "rb_next" },
	{ 0x16eee64a, "device_unregister" },
	{ 0x48102a43, "cdev_device_del" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0x2078bd0d, "seq_release" },
	{ 0x184c48a6, "dev_set_name" },
	{ 0xdf2c2742, "rb_last" },
	{ 0x5e5a3cf2, "vfs_getattr" },
	{ 0xd56ba424, "misc_deregister" },
	{ 0x31379608, "__init_rwsem" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xca0304ef, "try_module_get" },
	{ 0x760a0f4f, "yield" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mtd";


MODULE_INFO(srcversion, "7BB91D03586C61C3619B454");

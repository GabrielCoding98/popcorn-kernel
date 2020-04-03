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
	{ 0x92b57248, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xef2acd4, "cdev_init" },
	{ 0x64ac2467, "up_read" },
	{ 0xc2451da0, "mem_map" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0xf7f21a6e, "no_llseek" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0x32d35025, "seq_write" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x64c412e2, "__compat_only_sysfs_link_entry_to_kobj" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x91715312, "sprintf" },
	{ 0x55509270, "__alloc_pages_nodemask" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xf1c2ed95, "down_read" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x20c7f5cc, "idr_destroy" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x4f30b379, "hash_digest_size" },
	{ 0xf36b611a, "of_find_property" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5a503b0b, "seq_putc" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x5f3fd789, "idr_alloc" },
	{ 0xfdfa0bcb, "sysfs_remove_link" },
	{ 0x25c777e3, "up_write" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x76e18a1a, "down_write" },
	{ 0x61275678, "idr_remove" },
	{ 0x7c35d0aa, "devm_add_action" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x26c73e5f, "__free_pages" },
	{ 0xaa49bd7c, "idr_get_next" },
	{ 0x12a38747, "usleep_range" },
	{ 0x5a163a5, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x348b0823, "cdev_device_add" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x2fc7504b, "hwrng_register" },
	{ 0x9a3f3efa, "of_get_property" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x47d7efde, "get_device" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x1017cd77, "device_initialize" },
	{ 0x804a55da, "idr_replace" },
	{ 0xdcd02f6d, "class_destroy" },
	{ 0x48102a43, "cdev_device_del" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0x7a0ae149, "of_property_match_string" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x184c48a6, "dev_set_name" },
	{ 0x5fc2c660, "hwrng_unregister" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x73a7a766, "param_ops_uint" },
	{ 0xd8a2e825, "__class_create" },
	{ 0x31379608, "__init_rwsem" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "31A6C7CC5651BB48F5268AD");

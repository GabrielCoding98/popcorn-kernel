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
	{ 0xb7700415, "param_ops_int" },
	{ 0x988694e4, "noop_llseek" },
	{ 0x20c7f5cc, "idr_destroy" },
	{ 0x38916bc8, "driver_unregister" },
	{ 0x9cc3f147, "class_unregister" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xd49ae3a1, "scsi_register_driver" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x58c9433d, "__class_register" },
	{ 0x99bb8806, "memmove" },
	{ 0xcac1217, "scsi_ioctl" },
	{ 0xbab99c39, "scsi_cmd_ioctl" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x24145b86, "scsi_ioctl_block_when_processing_errors" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb3aabb18, "scsi_block_when_processing_errors" },
	{ 0x310559f2, "scsi_device_get" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xaf38e081, "idr_find" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0x2620bd18, "blk_put_request" },
	{ 0x8c760ac9, "blk_rq_map_user" },
	{ 0xb39a4009, "blk_execute_rq_nowait" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x14cb758b, "blk_get_request" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x4655a0e9, "__scsi_print_sense" },
	{ 0x10d9f885, "scsi_sense_desc_find" },
	{ 0xdd849d51, "scsi_get_sense_info_fld" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0x5f754e5a, "memset" },
	{ 0xc84776fe, "flush_dcache_page" },
	{ 0xa3433037, "get_user_pages_fast" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xc2451da0, "mem_map" },
	{ 0x55509270, "__alloc_pages_nodemask" },
	{ 0x135b5680, "__put_page" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x9d669763, "memcpy" },
	{ 0xb89814b2, "__blk_put_request" },
	{ 0xb318dcc4, "blk_rq_unmap_user" },
	{ 0xe6c12171, "complete" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x8a337ba6, "scsi_device_put" },
	{ 0x9663fc8f, "scsi_set_medium_removal" },
	{ 0xbce834e7, "blk_put_queue" },
	{ 0x514fa521, "sdev_prefix_printk" },
	{ 0x98fd2a7e, "scsi_autopm_put_device" },
	{ 0x68700f87, "sysfs_create_link" },
	{ 0x5f3fd789, "idr_alloc" },
	{ 0x84ffea8b, "idr_preload" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x95696f67, "blk_queue_rq_timeout" },
	{ 0x96c134d7, "blk_get_queue" },
	{ 0xa6d550a, "__alloc_disk_node" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x84b183ae, "strncmp" },
	{ 0x97255bdf, "strlen" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7c32d0f0, "printk" },
	{ 0x851dd2f, "device_create" },
	{ 0x90d1cb32, "cdev_add" },
	{ 0x662c28b9, "cdev_alloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0x91715312, "sprintf" },
	{ 0x61275678, "idr_remove" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x562c8754, "scsi_autopm_get_device" },
	{ 0x16eee64a, "device_unregister" },
	{ 0x7fe8a44d, "cdev_del" },
	{ 0xfdfa0bcb, "sysfs_remove_link" },
	{ 0x3e84150f, "put_disk" },
	{ 0x37a0cba, "kfree" },
	{ 0x26c73e5f, "__free_pages" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "7FC9146821AC1C2DF5C82B7");

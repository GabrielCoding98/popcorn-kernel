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
	{ 0xf7f21a6e, "no_llseek" },
	{ 0x20c7f5cc, "idr_destroy" },
	{ 0x6b098fd0, "class_interface_unregister" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xdcd02f6d, "class_destroy" },
	{ 0xb419d4f3, "scsi_register_interface" },
	{ 0xd8a2e825, "__class_create" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x28118cb6, "__get_user_1" },
	{ 0x202fc208, "sg_scsi_ioctl" },
	{ 0xb9acd3d9, "__put_user_2" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x4d634803, "_raw_write_lock_irq" },
	{ 0xb24a1374, "blk_trace_startstop" },
	{ 0x19b6c168, "blk_trace_setup" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x62021b32, "blk_trace_remove" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xcac1217, "scsi_ioctl" },
	{ 0x24145b86, "scsi_ioctl_block_when_processing_errors" },
	{ 0xf5eb86ea, "blk_verify_command" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xbaa353b9, "blk_end_request_all" },
	{ 0x2b1db4ff, "blk_rq_map_user_iov" },
	{ 0xa394d63e, "import_iovec" },
	{ 0xb39a4009, "blk_execute_rq_nowait" },
	{ 0x8c760ac9, "blk_rq_map_user" },
	{ 0x14cb758b, "blk_get_request" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x77c59098, "module_put" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x2620bd18, "blk_put_request" },
	{ 0xb318dcc4, "blk_rq_unmap_user" },
	{ 0xf7350193, "__module_get" },
	{ 0x8a337ba6, "scsi_device_put" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb3aabb18, "scsi_block_when_processing_errors" },
	{ 0x562c8754, "scsi_autopm_get_device" },
	{ 0x310559f2, "scsi_device_get" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xaf38e081, "idr_find" },
	{ 0x6b568ade, "nonseekable_open" },
	{ 0x26c73e5f, "__free_pages" },
	{ 0x55509270, "__alloc_pages_nodemask" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x91715312, "sprintf" },
	{ 0x68700f87, "sysfs_create_link" },
	{ 0x851dd2f, "device_create" },
	{ 0x90d1cb32, "cdev_add" },
	{ 0x514fa521, "sdev_prefix_printk" },
	{ 0x5f3fd789, "idr_alloc" },
	{ 0x84ffea8b, "idr_preload" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x662c28b9, "cdev_alloc" },
	{ 0xa6d550a, "__alloc_disk_node" },
	{ 0x583c33a7, "__task_pid_nr_ns" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7c32d0f0, "printk" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x4655a0e9, "__scsi_print_sense" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0x9d669763, "memcpy" },
	{ 0xb89814b2, "__blk_put_request" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x5f754e5a, "memset" },
	{ 0xc2451da0, "mem_map" },
	{ 0x98fd2a7e, "scsi_autopm_put_device" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x566a2d67, "fasync_helper" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x7fe8a44d, "cdev_del" },
	{ 0xad2e5d45, "device_destroy" },
	{ 0xfdfa0bcb, "sysfs_remove_link" },
	{ 0xab5942cb, "kill_fasync" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x3e84150f, "put_disk" },
	{ 0x61275678, "idr_remove" },
	{ 0xaafd9237, "_raw_write_unlock_irqrestore" },
	{ 0x5ca18a2, "_raw_write_lock_irqsave" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb40d7cf, "_raw_read_unlock_irqrestore" },
	{ 0x630f2cb8, "_raw_read_lock_irqsave" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "44A2233ABD6EFC17061FE20");

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
	{ 0x15123867, "driver_remove_file" },
	{ 0xdcd02f6d, "class_destroy" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x38916bc8, "driver_unregister" },
	{ 0x333e7604, "driver_create_file" },
	{ 0xd49ae3a1, "scsi_register_driver" },
	{ 0x8bdc371, "__register_chrdev" },
	{ 0xd8a2e825, "__class_create" },
	{ 0xc6cbbc89, "capable" },
	{ 0xcac1217, "scsi_ioctl" },
	{ 0x24145b86, "scsi_ioctl_block_when_processing_errors" },
	{ 0x55509270, "__alloc_pages_nodemask" },
	{ 0x310559f2, "scsi_device_get" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xb3aabb18, "scsi_block_when_processing_errors" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x71c90087, "memcmp" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x8b538f54, "blk_rq_map_kern" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0x2620bd18, "blk_put_request" },
	{ 0xb39a4009, "blk_execute_rq_nowait" },
	{ 0x8c760ac9, "blk_rq_map_user" },
	{ 0xfffa3100, "sg_next" },
	{ 0x14cb758b, "blk_get_request" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x514fa521, "sdev_prefix_printk" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x91715312, "sprintf" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x7c1372e8, "panic" },
	{ 0xa6d550a, "__alloc_disk_node" },
	{ 0x84b183ae, "strncmp" },
	{ 0x97255bdf, "strlen" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0xb89814b2, "__blk_put_request" },
	{ 0xb318dcc4, "blk_rq_unmap_user" },
	{ 0xe6c12171, "complete" },
	{ 0x5f754e5a, "memset" },
	{ 0x9d669763, "memcpy" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xc2451da0, "mem_map" },
	{ 0x4655a0e9, "__scsi_print_sense" },
	{ 0x10d9f885, "scsi_sense_desc_find" },
	{ 0xdd849d51, "scsi_get_sense_info_fld" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0x9663fc8f, "scsi_set_medium_removal" },
	{ 0x8a337ba6, "scsi_device_put" },
	{ 0x4de2e10c, "device_create_file" },
	{ 0x851dd2f, "device_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x999e8297, "vfree" },
	{ 0x3e84150f, "put_disk" },
	{ 0xad2e5d45, "device_destroy" },
	{ 0x9425caca, "_raw_write_lock" },
	{ 0x26c73e5f, "__free_pages" },
	{ 0x7c32d0f0, "printk" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb81960ca, "snprintf" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F5C82CCC36FB0DDC5268734");

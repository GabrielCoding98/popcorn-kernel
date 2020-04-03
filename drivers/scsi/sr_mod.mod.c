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
	{ 0x9663fc8f, "scsi_set_medium_removal" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x95696f67, "blk_queue_rq_timeout" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xcd5bcb49, "cdrom_number_of_slots" },
	{ 0xfe90c4a6, "_find_first_zero_bit_le" },
	{ 0x24145b86, "scsi_ioctl_block_when_processing_errors" },
	{ 0xdfc2116a, "unregister_cdrom" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x4362c2bb, "blk_dump_rq_flags" },
	{ 0xfffa3100, "sg_next" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x5026b905, "scmd_printk" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x5aae773c, "cdrom_open" },
	{ 0x91715312, "sprintf" },
	{ 0x562c8754, "scsi_autopm_get_device" },
	{ 0xa6d550a, "__alloc_disk_node" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0xea88cc53, "check_disk_change" },
	{ 0xcdc68a33, "cdrom_release" },
	{ 0xb15ec07c, "del_gendisk" },
	{ 0xcf8559bf, "__scsi_execute" },
	{ 0x38916bc8, "driver_unregister" },
	{ 0x514fa521, "sdev_prefix_printk" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xdd54d595, "cdrom_get_media_event" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x99feeba6, "cdrom_check_events" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xf9b12470, "cdrom_get_last_written" },
	{ 0x8a337ba6, "scsi_device_put" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xcac1217, "scsi_ioctl" },
	{ 0x3e84150f, "put_disk" },
	{ 0xd49ae3a1, "scsi_register_driver" },
	{ 0xb3aabb18, "scsi_block_when_processing_errors" },
	{ 0x8005a540, "scsi_test_unit_ready" },
	{ 0x92ba27ac, "scsi_init_io" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x25433c7f, "cdrom_ioctl" },
	{ 0xce8fd9db, "blk_pm_runtime_init" },
	{ 0xc040bb22, "register_cdrom" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x24f0c6ce, "device_add_disk" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x310559f2, "scsi_device_get" },
	{ 0x98fd2a7e, "scsi_autopm_put_device" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x94f54421, "blk_queue_logical_block_size" },
	{ 0xc23ad7da, "scsi_mode_sense" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cdrom";


MODULE_INFO(srcversion, "D597086D2A7953C72A0EA6A");

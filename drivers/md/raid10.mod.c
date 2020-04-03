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
	{ 0x405154b3, "unregister_md_personality" },
	{ 0x22f94b04, "register_md_personality" },
	{ 0x38751bf5, "md_finish_reshape" },
	{ 0x40a5f9ad, "md_bitmap_end_sync" },
	{ 0xa086279d, "bio_alloc_mddev" },
	{ 0xe8ff1363, "sysfs_notify" },
	{ 0x29bb6d48, "md_bitmap_close_sync" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xbde109cf, "md_bitmap_start_sync" },
	{ 0x2293d2b8, "md_bitmap_cond_end_sync" },
	{ 0x71c90087, "memcmp" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0x4a956e36, "bio_copy_data" },
	{ 0xffeb8534, "bio_add_page" },
	{ 0xc2451da0, "mem_map" },
	{ 0xc4cac867, "bio_trim" },
	{ 0x84871e39, "submit_bio_wait" },
	{ 0x5386a8e8, "rdev_clear_badblocks" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x27ef4679, "md_check_recovery" },
	{ 0xa9320d27, "ktime_get_seconds" },
	{ 0xd7d0528e, "md_wait_for_blocked_rdev" },
	{ 0xd13df689, "md_flush_request" },
	{ 0x313b97f2, "md_bitmap_startwrite" },
	{ 0x6578533e, "prepare_to_wait" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x5f754e5a, "memset" },
	{ 0x73e7bfb8, "md_write_start" },
	{ 0xec230abf, "bio_chain" },
	{ 0x25b0f868, "bio_split" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x68700f87, "sysfs_create_link" },
	{ 0x91715312, "sprintf" },
	{ 0x75dd40e3, "md_new_event" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x6554256d, "md_integrity_add_rdev" },
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0x9d286757, "kernfs_notify" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0xd27b25dd, "blk_check_plugged" },
	{ 0xdcde4deb, "__tracepoint_block_bio_remap" },
	{ 0x85623b96, "bio_clone_fast" },
	{ 0x8aaa7740, "md_do_sync" },
	{ 0x4dac9b3c, "md_integrity_register" },
	{ 0x7539efc5, "blk_queue_flag_clear" },
	{ 0x763158e5, "blk_queue_flag_set" },
	{ 0x9fc0cef1, "md_unregister_thread" },
	{ 0xc3a94120, "disk_stack_limits" },
	{ 0x77589e98, "blk_queue_io_opt" },
	{ 0xd42bb05e, "blk_queue_io_min" },
	{ 0xc689c33e, "blk_queue_max_write_zeroes_sectors" },
	{ 0xcea20471, "blk_queue_max_write_same_sectors" },
	{ 0x57dd0526, "blk_queue_max_discard_sectors" },
	{ 0xe6257ba4, "mddev_init_writes_pending" },
	{ 0x4e312f13, "bdevname" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0x54dcc4f5, "bio_reset" },
	{ 0x502c1f7a, "mempool_alloc" },
	{ 0x9d669763, "memcpy" },
	{ 0x13906b2, "bio_alloc_bioset" },
	{ 0xecf97eb1, "md_set_array_sectors" },
	{ 0xe6334e4d, "md_bitmap_resize" },
	{ 0x7c32d0f0, "printk" },
	{ 0x576a6a86, "md_register_thread" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x4993f112, "bioset_init" },
	{ 0x27ab8b8a, "mempool_init" },
	{ 0x55509270, "__alloc_pages_nodemask" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x96234732, "bio_put" },
	{ 0x135b5680, "__put_page" },
	{ 0x5d28d988, "bioset_exit" },
	{ 0x7825541a, "mempool_exit" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x8a2f8695, "md_cluster_ops" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x8714ec5e, "__trace_note_message" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xbf035ee5, "md_error" },
	{ 0xf65ddb0f, "badblocks_check" },
	{ 0xc6a979ff, "rdev_set_badblocks" },
	{ 0x1d6ea35d, "sync_page_io" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x1c632c0b, "md_done_sync" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xbd691c6c, "md_wakeup_thread" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbd9074b1, "blk_finish_plug" },
	{ 0x502e6409, "bio_endio" },
	{ 0x7bb82bb7, "generic_make_request" },
	{ 0x3948603c, "md_bitmap_unplug" },
	{ 0x7d705738, "blk_start_plug" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x278606ec, "mempool_free" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xfdb6fb74, "md_write_end" },
	{ 0xfeaaa3a1, "md_bitmap_endwrite" },
	{ 0x37a0cba, "kfree" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=md-mod";


MODULE_INFO(srcversion, "DBA9A56591B9F81FD12518E");

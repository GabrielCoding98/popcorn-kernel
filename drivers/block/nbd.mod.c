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
	{ 0x759f7158, "single_release" },
	{ 0x8e3afba1, "seq_read" },
	{ 0x6b248f3e, "seq_lseek" },
	{ 0x2f913dd, "genl_unregister_family" },
	{ 0x20c7f5cc, "idr_destroy" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x4ea0e40e, "genl_register_family" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x1000e51, "schedule" },
	{ 0x94d07522, "__invalidate_device" },
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0xc6cbbc89, "capable" },
	{ 0x54e23db1, "blk_mq_request_started" },
	{ 0x590a8ceb, "blk_mq_tag_to_rq" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xfe3dfdf2, "iov_iter_advance" },
	{ 0xbb881f8c, "iov_iter_bvec" },
	{ 0x7aaf1df4, "blk_mq_unique_tag" },
	{ 0x72b7a0b5, "blk_mq_start_request" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0x60bffe6d, "div64_u64" },
	{ 0x383f0d29, "debugfs_create_u32" },
	{ 0x1b963778, "debugfs_create_u64" },
	{ 0xa176f7d9, "debugfs_create_file" },
	{ 0x4c7a68b0, "debugfs_create_dir" },
	{ 0x4de2e10c, "device_create_file" },
	{ 0x52dab28e, "blk_queue_write_cache" },
	{ 0x2220b4c2, "set_disk_ro" },
	{ 0xddd311b1, "blk_mq_update_nr_hw_queues" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x7c32d0f0, "printk" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xbca56747, "sk_set_memalloc" },
	{ 0x95696f67, "blk_queue_rq_timeout" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x1c883361, "netlink_capable" },
	{ 0x37788505, "device_remove_file" },
	{ 0x77c59098, "module_put" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x98ce88a8, "debugfs_remove_recursive" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x654e0977, "kernel_sock_shutdown" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xce90062e, "refcount_inc_not_zero_checked" },
	{ 0x331e09fc, "blk_cleanup_queue" },
	{ 0xb15ec07c, "del_gendisk" },
	{ 0xaa55ac25, "refcount_dec_and_mutex_lock" },
	{ 0x61275678, "idr_remove" },
	{ 0xeebf08fc, "blk_mq_free_tag_set" },
	{ 0x24f0c6ce, "device_add_disk" },
	{ 0xbd101f33, "blk_queue_max_hw_sectors" },
	{ 0xcd17f294, "blk_queue_max_segments" },
	{ 0x9af1d456, "blk_queue_max_segment_size" },
	{ 0x7539efc5, "blk_queue_flag_clear" },
	{ 0x763158e5, "blk_queue_flag_set" },
	{ 0x6f03d883, "blk_mq_init_queue" },
	{ 0x400e712a, "blk_mq_alloc_tag_set" },
	{ 0x3e84150f, "put_disk" },
	{ 0x5f3fd789, "idr_alloc" },
	{ 0xa6d550a, "__alloc_disk_node" },
	{ 0x7acac5fe, "blk_mq_requeue_request" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xd50569b7, "blk_mq_end_request" },
	{ 0x491483ea, "seq_puts" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0x226c9b6d, "single_open" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xb859f38b, "krealloc" },
	{ 0x57dd0526, "blk_queue_max_discard_sectors" },
	{ 0xe18b6e3d, "kobject_uevent" },
	{ 0xe375cc23, "bdput" },
	{ 0x7a4f588c, "set_blocksize" },
	{ 0x44ec6118, "bd_set_size" },
	{ 0xea6f0a8f, "blk_queue_physical_block_size" },
	{ 0x94f54421, "blk_queue_logical_block_size" },
	{ 0x7255b2d4, "bdget_disk" },
	{ 0xca0304ef, "try_module_get" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x5e6c68d0, "blk_mq_unquiesce_queue" },
	{ 0x1c0cf8a6, "blk_mq_tagset_busy_iter" },
	{ 0x949c09e3, "blk_mq_quiesce_queue" },
	{ 0x91715312, "sprintf" },
	{ 0x90745321, "fput" },
	{ 0x6f67a396, "sock_no_shutdown" },
	{ 0x82a5d3cd, "sockfd_lookup" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x37a0cba, "kfree" },
	{ 0xc4a0ebb4, "netlink_broadcast" },
	{ 0xec2404f1, "init_net" },
	{ 0xd04deb9c, "iov_iter_kvec" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x7a948992, "sock_recvmsg" },
	{ 0xe883b57e, "sock_sendmsg" },
	{ 0x8ca8222e, "blk_mq_complete_request" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0x4d4be347, "idr_for_each" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x9e6e325e, "netlink_unicast" },
	{ 0xaf38e081, "idr_find" },
	{ 0x19f6c533, "genlmsg_put" },
	{ 0x2827ae6f, "__alloc_skb" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x68183b3b, "nla_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "C40D54F9DB714DC1A243854");

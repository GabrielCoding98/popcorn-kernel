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
	{ 0x9b721d42, "kset_create_and_add" },
	{ 0xf5037a81, "kmem_cache_destroy" },
	{ 0x2b288556, "locks_copy_lock" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x64ac2467, "up_read" },
	{ 0x4ea0e40e, "genl_register_family" },
	{ 0xc2451da0, "mem_map" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x2f913dd, "genl_unregister_family" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x18011285, "sock_release" },
	{ 0xe18b6e3d, "kobject_uevent" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x7a948992, "sock_recvmsg" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x8178afc0, "config_item_put" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x97106714, "memdup_user_nul" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x75e8be08, "sock_create_kern" },
	{ 0x1f02a56b, "config_item_init_type_name" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x4d4be347, "idr_for_each" },
	{ 0x91715312, "sprintf" },
	{ 0x55509270, "__alloc_pages_nodemask" },
	{ 0x880737be, "kthread_create_on_node" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xf1c2ed95, "down_read" },
	{ 0xece784c2, "rb_first" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0x8a0b551, "misc_register" },
	{ 0x9d93fd55, "kernel_setsockopt" },
	{ 0x5f754e5a, "memset" },
	{ 0x20c7f5cc, "idr_destroy" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x34908c14, "print_hex_dump_bytes" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xdccedf20, "kthread_stop" },
	{ 0x71c90087, "memcmp" },
	{ 0x134f1a4a, "kobject_init_and_add" },
	{ 0xd04deb9c, "iov_iter_kvec" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x84b183ae, "strncmp" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x9f1691c2, "kmem_cache_free" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x84ffea8b, "idr_preload" },
	{ 0xc686d185, "config_group_init_type_name" },
	{ 0x988694e4, "noop_llseek" },
	{ 0x9e6e325e, "netlink_unicast" },
	{ 0xab58754a, "kernel_getpeername" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x8647b7a0, "configfs_remove_default_groups" },
	{ 0x373db350, "kstrtoint" },
	{ 0x5f3fd789, "idr_alloc" },
	{ 0x6eb454e3, "configfs_register_subsystem" },
	{ 0x25c777e3, "up_write" },
	{ 0xec2404f1, "init_net" },
	{ 0x76e18a1a, "down_write" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x61651be, "strcat" },
	{ 0x61275678, "idr_remove" },
	{ 0x77c59098, "module_put" },
	{ 0x8b63ba29, "kernel_getsockopt" },
	{ 0xc6cbbc89, "capable" },
	{ 0xaae6676e, "kmem_cache_alloc" },
	{ 0x26c73e5f, "__free_pages" },
	{ 0xaa49bd7c, "idr_get_next" },
	{ 0x1ad051de, "kernel_sendpage" },
	{ 0x341c7a79, "locks_init_lock" },
	{ 0x2827ae6f, "__alloc_skb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0x575bbecf, "locks_lock_inode_wait" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x1c2a847c, "wake_up_process" },
	{ 0x13b69be1, "configfs_unregister_subsystem" },
	{ 0x73c9d953, "down_read_trylock" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xaddc9a8a, "kmem_cache_create" },
	{ 0x6b2d3c5f, "kernel_accept" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x30ca064, "kernel_kobj" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0x4a519ae4, "kset_unregister" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0xa8b43f17, "posix_lock_file" },
	{ 0x37a0cba, "kfree" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0x9d669763, "memcpy" },
	{ 0x19f6c533, "genlmsg_put" },
	{ 0x29a426c1, "kernel_bind" },
	{ 0x550fdc4d, "config_item_get" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0x49970de8, "finish_wait" },
	{ 0xca9360b5, "rb_next" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xf9dcd1d2, "nla_reserve" },
	{ 0xe6c12171, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x96c25614, "config_group_find_item" },
	{ 0xaf38e081, "idr_find" },
	{ 0x2f0d49a1, "config_group_init" },
	{ 0xd56ba424, "misc_deregister" },
	{ 0x31379608, "__init_rwsem" },
	{ 0xca0304ef, "try_module_get" },
	{ 0x6c07d933, "add_uevent_var" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8753B5D0C31D63044458A29");

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
	{ 0x2db48642, "dm_unregister_target" },
	{ 0x385ff7e4, "dm_register_target" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xffeb8534, "bio_add_page" },
	{ 0x13906b2, "bio_alloc_bioset" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xf1db4c84, "dm_accept_partial_bio" },
	{ 0x85623b96, "bio_clone_fast" },
	{ 0x880737be, "kthread_create_on_node" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x8360e4f4, "dm_get_device" },
	{ 0x6d0f1f89, "dm_table_get_mode" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x4993f112, "bioset_init" },
	{ 0x147b53ce, "crypto_alloc_ahash" },
	{ 0x27ab8b8a, "mempool_init" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0xa05c03df, "mempool_kmalloc" },
	{ 0xb81960ca, "snprintf" },
	{ 0x328a05f1, "strncpy" },
	{ 0x9f984513, "strrchr" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0x85df9b6c, "strsep" },
	{ 0x78129461, "__percpu_counter_init" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xe6c12171, "complete" },
	{ 0x1c2a847c, "wake_up_process" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x96234732, "bio_put" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x502c1f7a, "mempool_alloc" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0x195a6340, "crypto_alloc_base" },
	{ 0x76ddb787, "crypto_shash_digest" },
	{ 0x2241ec, "crypto_alloc_shash" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xc2451da0, "mem_map" },
	{ 0x905d69c4, "crypto_shash_final" },
	{ 0xe19bd6c8, "crypto_shash_update" },
	{ 0x86416877, "crypto_alloc_aead" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xf31bdfbc, "crypto_alloc_skcipher" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x55509270, "__alloc_pages_nodemask" },
	{ 0x11a38228, "__percpu_counter_compare" },
	{ 0xf828b0ef, "percpu_counter_add_batch" },
	{ 0x5240ee7, "percpu_counter_batch" },
	{ 0x26c73e5f, "__free_pages" },
	{ 0xbd9074b1, "blk_finish_plug" },
	{ 0x7bb82bb7, "generic_make_request" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xece784c2, "rb_first" },
	{ 0x7d705738, "blk_start_plug" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xde9360ba, "totalram_pages" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xf5f9f41c, "dm_put_device" },
	{ 0x81ba3b86, "percpu_counter_destroy" },
	{ 0x77c58230, "__percpu_counter_sum" },
	{ 0x7825541a, "mempool_exit" },
	{ 0x5d28d988, "bioset_exit" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xdccedf20, "kthread_stop" },
	{ 0x7fc61d57, "crypto_destroy_tfm" },
	{ 0x502e6409, "bio_endio" },
	{ 0x37a0cba, "kfree" },
	{ 0x278606ec, "mempool_free" },
	{ 0x7cc4adea, "dm_per_bio_data" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xee848db, "key_put" },
	{ 0x64ac2467, "up_read" },
	{ 0xf1c2ed95, "down_read" },
	{ 0xe575e16f, "request_key" },
	{ 0x8b72b89e, "key_type_user" },
	{ 0xaf94b04d, "key_type_logon" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x84b183ae, "strncmp" },
	{ 0x11089ac7, "_ctype" },
	{ 0x86ccf98c, "hex2bin" },
	{ 0x7a4497db, "kzfree" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xec1aa6ef, "memzero_explicit" },
	{ 0xd3ebce7d, "crypto_aead_setkey" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x9d669763, "memcpy" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x349cba85, "strchr" },
	{ 0x97255bdf, "strlen" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x5f754e5a, "memset" },
	{ 0x7c32d0f0, "printk" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-mod";


MODULE_INFO(srcversion, "FF6F274BD034DDD78EB9A77");

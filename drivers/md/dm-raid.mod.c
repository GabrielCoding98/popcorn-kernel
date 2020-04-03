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
	{ 0x7d54146, "param_ops_bool" },
	{ 0x2db48642, "dm_unregister_target" },
	{ 0x385ff7e4, "dm_register_target" },
	{ 0xbb45cb5e, "raid5_set_cache_size" },
	{ 0xa8a7dbe9, "r5c_journal_mode_set" },
	{ 0xb1425b32, "dm_table_add_target_callbacks" },
	{ 0x700ceeaa, "md_start" },
	{ 0xb513e429, "md_run" },
	{ 0x55509270, "__alloc_pages_nodemask" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x4964bee1, "dm_set_target_max_io_len" },
	{ 0x8360e4f4, "dm_get_device" },
	{ 0x6d0f1f89, "dm_table_get_mode" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x373db350, "kstrtoint" },
	{ 0xb528573d, "md_rdev_init" },
	{ 0x9e4c321e, "mddev_init" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0x11e0ec41, "dm_read_arg" },
	{ 0x7deff673, "dm_consume_args" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x4be85a03, "memweight" },
	{ 0xf53b0fae, "md_update_sb" },
	{ 0x5cdcc94c, "md_bitmap_load" },
	{ 0xe6334e4d, "md_bitmap_resize" },
	{ 0x48a42022, "mddev_resume" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xbf035ee5, "md_error" },
	{ 0x1d6ea35d, "sync_page_io" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x5f754e5a, "memset" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xc2451da0, "mem_map" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xad84bef8, "dm_table_event" },
	{ 0xba68ec88, "mddev_congested" },
	{ 0xae09b31b, "md_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0xf5f9f41c, "dm_put_device" },
	{ 0x3689f4bd, "md_rdev_clear" },
	{ 0xcf44f8be, "md_handle_request" },
	{ 0x7b2e6abf, "md_stop_writes" },
	{ 0xeda4abb7, "mddev_unlock" },
	{ 0x492e71ae, "mddev_suspend" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x3fd51fa4, "revalidate_disk" },
	{ 0x1b6a3f2c, "dm_disk" },
	{ 0x889a4df6, "dm_table_get_md" },
	{ 0x7c32d0f0, "printk" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xbd691c6c, "md_wakeup_thread" },
	{ 0x38656af5, "md_reap_sync_thread" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x8ab20d42, "blk_limits_io_opt" },
	{ 0xad64a9d6, "blk_limits_io_min" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-mod,raid456,md-mod";


MODULE_INFO(srcversion, "924146F60639152BDB472E4");

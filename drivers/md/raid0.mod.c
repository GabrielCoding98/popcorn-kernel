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
	{ 0xca1d01c7, "bio_clone_blkcg_association" },
	{ 0x1bbeed38, "__blkdev_issue_discard" },
	{ 0xd13df689, "md_flush_request" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0xec230abf, "bio_chain" },
	{ 0x25b0f868, "bio_split" },
	{ 0x502e6409, "bio_endio" },
	{ 0x7bb82bb7, "generic_make_request" },
	{ 0xdcde4deb, "__tracepoint_block_bio_remap" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x7539efc5, "blk_queue_flag_clear" },
	{ 0x4dac9b3c, "md_integrity_register" },
	{ 0xecf97eb1, "md_set_array_sectors" },
	{ 0x763158e5, "blk_queue_flag_set" },
	{ 0xc3a94120, "disk_stack_limits" },
	{ 0x77589e98, "blk_queue_io_opt" },
	{ 0xd42bb05e, "blk_queue_io_min" },
	{ 0x57dd0526, "blk_queue_max_discard_sectors" },
	{ 0xc689c33e, "blk_queue_max_write_zeroes_sectors" },
	{ 0xcea20471, "blk_queue_max_write_same_sectors" },
	{ 0xbd101f33, "blk_queue_max_hw_sectors" },
	{ 0x78904985, "md_check_no_bitmap" },
	{ 0xb81960ca, "snprintf" },
	{ 0x4e312f13, "bdevname" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7c32d0f0, "printk" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=md-mod";


MODULE_INFO(srcversion, "D6CBBC9772477B61E97491B");

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
	{ 0x25b0f868, "bio_split" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x492e71ae, "mddev_suspend" },
	{ 0xdcde4deb, "__tracepoint_block_bio_remap" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x405154b3, "unregister_md_personality" },
	{ 0x3fd51fa4, "revalidate_disk" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xd13df689, "md_flush_request" },
	{ 0x7c32d0f0, "printk" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0xc3a94120, "disk_stack_limits" },
	{ 0xec230abf, "bio_chain" },
	{ 0x7bb82bb7, "generic_make_request" },
	{ 0x502e6409, "bio_endio" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x7539efc5, "blk_queue_flag_clear" },
	{ 0x763158e5, "blk_queue_flag_set" },
	{ 0x4e312f13, "bdevname" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xecf97eb1, "md_set_array_sectors" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x48a42022, "mddev_resume" },
	{ 0x78904985, "md_check_no_bitmap" },
	{ 0x4dac9b3c, "md_integrity_register" },
	{ 0x22f94b04, "register_md_personality" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=md-mod";


MODULE_INFO(srcversion, "6141F1CA15742113F302CB9");

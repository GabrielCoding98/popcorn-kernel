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
	{ 0x265529b8, "kill_litter_super" },
	{ 0x988694e4, "noop_llseek" },
	{ 0x7905d834, "default_llseek" },
	{ 0x7f31a1c1, "simple_statfs" },
	{ 0xd211717d, "unregister_filesystem" },
	{ 0xc1c6dea1, "unregister_binfmt" },
	{ 0xf926454a, "__register_binfmt" },
	{ 0x6304ee38, "register_filesystem" },
	{ 0xc54c0b9c, "iput" },
	{ 0x7c32d0f0, "printk" },
	{ 0x249871f7, "d_instantiate" },
	{ 0x2e1a31a3, "simple_pin_fs" },
	{ 0x45f3747b, "current_time" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x96e47a4e, "new_inode" },
	{ 0x261f2064, "lookup_one_len" },
	{ 0xc8339e24, "string_unescape" },
	{ 0x373db350, "kstrtoint" },
	{ 0x349cba85, "strchr" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x25c777e3, "up_write" },
	{ 0x76e18a1a, "down_write" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x97255bdf, "strlen" },
	{ 0xdc1a78c, "bin2hex" },
	{ 0x91715312, "sprintf" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0xfa162f7, "simple_release_fs" },
	{ 0x2ef77ea, "d_drop" },
	{ 0x83a489a8, "drop_nlink" },
	{ 0x9425caca, "_raw_write_lock" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x77d022bf, "filp_close" },
	{ 0x37a0cba, "kfree" },
	{ 0x4a33a82c, "clear_inode" },
	{ 0x23fa3f65, "simple_fill_super" },
	{ 0x5824895d, "mount_single" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8a4517f5, "prepare_binprm" },
	{ 0x40d4771a, "open_exec" },
	{ 0xf3780cce, "search_binary_handler" },
	{ 0x2220cb2e, "kernel_read" },
	{ 0x5f754e5a, "memset" },
	{ 0xc0923a03, "dentry_open" },
	{ 0x9b8d421e, "bprm_change_interp" },
	{ 0x172836b7, "__close_fd" },
	{ 0x40635a5b, "would_dump" },
	{ 0x1230a836, "fd_install" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0xd1317547, "remove_arg_zero" },
	{ 0x4bf8b484, "dput" },
	{ 0xa8477d10, "copy_strings_kernel" },
	{ 0x90745321, "fput" },
	{ 0xd32d6c08, "lockref_get" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9f984513, "strrchr" },
	{ 0x3b697738, "_raw_read_lock" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x11089ac7, "_ctype" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "91658AD4C4E873A9B4F7CBC");

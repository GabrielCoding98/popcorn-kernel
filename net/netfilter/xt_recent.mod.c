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
	{ 0x73a7a766, "param_ops_uint" },
	{ 0xbbdcd248, "seq_release_private" },
	{ 0x8e3afba1, "seq_read" },
	{ 0x6b248f3e, "seq_lseek" },
	{ 0x974143ad, "xt_unregister_matches" },
	{ 0xc5b301c3, "unregister_pernet_subsys" },
	{ 0xc4bdfbd7, "xt_register_matches" },
	{ 0xd10120b, "register_pernet_subsys" },
	{ 0x9d669763, "memcpy" },
	{ 0xf434a842, "proc_set_user" },
	{ 0xaa47d5fe, "proc_create_data" },
	{ 0xf843245d, "make_kgid" },
	{ 0x16589dfe, "make_kuid" },
	{ 0x98cc48c1, "init_user_ns" },
	{ 0xe914e41e, "strcpy" },
	{ 0x88288e85, "kvmalloc_node" },
	{ 0x9a717656, "__do_once_done" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x48012e28, "xt_check_proc_name" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x67cebeb, "proc_mkdir" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xebd6836c, "remove_proc_entry" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x7c32d0f0, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xac5fcec0, "in4_pton" },
	{ 0x609bcd98, "in6_pton" },
	{ 0xa3131f6, "strnchr" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x71c90087, "memcmp" },
	{ 0x5a503b0b, "seq_putc" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0x4e70062, "PDE_DATA" },
	{ 0x7a82c0a7, "__seq_open_private" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables";


MODULE_INFO(srcversion, "67D529F41E656C4D0D5368B");

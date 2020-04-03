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
	{ 0x8ef6a6fa, "unregister_quota_format" },
	{ 0x1ef3f40f, "register_quota_format" },
	{ 0x7c32d0f0, "printk" },
	{ 0x64ac2467, "up_read" },
	{ 0xf1c2ed95, "down_read" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x514a62ec, "dq_data_lock" },
	{ 0x25c777e3, "up_write" },
	{ 0x76e18a1a, "down_write" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x5f754e5a, "memset" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x8b46e7a4, "dqstats" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf828b0ef, "percpu_counter_add_batch" },
	{ 0x5240ee7, "percpu_counter_batch" },
	{ 0x8ee95fc7, "__quota_error" },
	{ 0x7ce18c9f, "from_kqid" },
	{ 0x98cc48c1, "init_user_ns" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "0EB9B8EDB6A89A209BABC9C");
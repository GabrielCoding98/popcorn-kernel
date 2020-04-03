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
	{ 0x15e0a7a1, "xt_unregister_target" },
	{ 0xdcd02f6d, "class_destroy" },
	{ 0xad2e5d45, "device_destroy" },
	{ 0x5d4fe550, "xt_register_target" },
	{ 0x851dd2f, "device_create" },
	{ 0xd8a2e825, "__class_create" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x32f87e82, "sysfs_create_file_ns" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x48012e28, "xt_check_proc_name" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0x91715312, "sprintf" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe8ff1363, "sysfs_notify" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x86076976, "sysfs_remove_file_ns" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables";


MODULE_INFO(srcversion, "55A770830CDC596AEF5ABC9");

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
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0xa8d3417e, "devres_alloc_node" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xd4034828, "system_freezable_wq" },
	{ 0x5a163a5, "put_device" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7ad52565, "input_register_device" },
	{ 0xf436e6e0, "devres_add" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x47d7efde, "get_device" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x37a0cba, "kfree" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0xd0fbda78, "input_unregister_device" },
	{ 0x70588013, "devres_destroy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x6df65bc1, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "78398324D288375022414DF");

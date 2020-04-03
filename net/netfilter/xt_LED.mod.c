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
	{ 0x5d4fe550, "xt_register_target" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe9a15011, "led_trigger_blink_oneshot" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7c32d0f0, "printk" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xecfae8b1, "led_trigger_register" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x967e89bb, "led_trigger_event" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x37a0cba, "kfree" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x522bb8d8, "led_trigger_unregister" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables";


MODULE_INFO(srcversion, "520AFA18C59D07A5470A863");

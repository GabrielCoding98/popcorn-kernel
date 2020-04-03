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
	{ 0x522bb8d8, "led_trigger_unregister" },
	{ 0xecfae8b1, "led_trigger_register" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfd90c858, "led_blink_set_oneshot" },
	{ 0xc8ce8b28, "led_stop_software_blink" },
	{ 0x710bccb9, "dev_get_stats" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x9fcc0a84, "dev_get_by_name" },
	{ 0xec2404f1, "init_net" },
	{ 0x9d669763, "memcpy" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x91715312, "sprintf" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x42d1b4de, "led_set_brightness" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "1C44EC413586473C4054D4D");

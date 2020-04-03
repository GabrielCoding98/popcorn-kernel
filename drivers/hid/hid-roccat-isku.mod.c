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
	{ 0xbdc8486d, "hid_unregister_driver" },
	{ 0xdcd02f6d, "class_destroy" },
	{ 0x70a86d4, "__hid_register_driver" },
	{ 0xd8a2e825, "__class_create" },
	{ 0x246808aa, "roccat_connect" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xf282feb6, "roccat_common2_receive" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x63a42155, "hid_hw_start" },
	{ 0x448e4524, "hid_open_report" },
	{ 0xb81960ca, "snprintf" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xf758b457, "roccat_common2_send_with_status" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0x2f622ea1, "roccat_disconnect" },
	{ 0x7ac6971d, "hid_hw_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3e4427c8, "roccat_report_event" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hid-roccat,hid-roccat-common";

MODULE_ALIAS("hid:b0003g*v00001E7Dp0000319C");
MODULE_ALIAS("hid:b0003g*v00001E7Dp00003264");

MODULE_INFO(srcversion, "E17A826A6535E55D582810A");
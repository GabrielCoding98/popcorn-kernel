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
	{ 0x70a86d4, "__hid_register_driver" },
	{ 0xf282feb6, "roccat_common2_receive" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x2f0a5db5, "roccat_common2_send" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x2386ca54, "sysfs_create_bin_file" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x63a42155, "hid_hw_start" },
	{ 0x448e4524, "hid_open_report" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x7ac6971d, "hid_hw_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x8cd454a7, "sysfs_remove_bin_file" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hid-roccat-common";

MODULE_ALIAS("hid:b0003g*v00001E7Dp00002C2E");

MODULE_INFO(srcversion, "057FA0BFBAA3A5992AAA1A1");

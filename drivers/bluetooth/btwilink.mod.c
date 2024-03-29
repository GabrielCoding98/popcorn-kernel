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
	{ 0x9f2f2b7d, "platform_driver_unregister" },
	{ 0x3af31b31, "__platform_driver_register" },
	{ 0x9f1ccf92, "hci_register_dev" },
	{ 0x79d2bb57, "hci_alloc_dev" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0x542ab202, "st_register" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0x83bf7eb3, "hci_recv_frame" },
	{ 0xe6c12171, "complete" },
	{ 0x6ef02d63, "skb_push" },
	{ 0x3170fae0, "hci_free_dev" },
	{ 0x8da2fb8a, "hci_unregister_dev" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x47022514, "bt_err" },
	{ 0xb1d3b276, "st_unregister" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth,st_drv";


MODULE_INFO(srcversion, "147F08AE2FFC86FB719E487");

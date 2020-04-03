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
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x9b388444, "get_zeroed_page" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0x186eae51, "of_parse_phandle" },
	{ 0xe18b6e3d, "kobject_uevent" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0xa8d3417e, "devres_alloc_node" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x3521c7a0, "device_register" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xe6924a0c, "kobject_uevent_env" },
	{ 0xbaf123b8, "devres_release" },
	{ 0x5a163a5, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xdc9fa232, "raw_notifier_chain_register" },
	{ 0xf436e6e0, "devres_add" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x47d7efde, "get_device" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x37a0cba, "kfree" },
	{ 0xdcd02f6d, "class_destroy" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x16eee64a, "device_unregister" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0x184c48a6, "dev_set_name" },
	{ 0xa3a5078a, "of_node_put" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0xa851973a, "raw_notifier_call_chain" },
	{ 0xd8a2e825, "__class_create" },
	{ 0xe914e41e, "strcpy" },
	{ 0xd06524ba, "raw_notifier_chain_unregister" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "44F3BF9F07F525EEE87A923");

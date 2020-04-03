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
	{ 0x402b8281, "__request_module" },
	{ 0x37788505, "device_remove_file" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x97adb487, "utf8s_to_utf16s" },
	{ 0x349cba85, "strchr" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x997e77af, "usb_gadget_deactivate" },
	{ 0x97255bdf, "strlen" },
	{ 0x367f38d9, "usb_ep_queue" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x8178afc0, "config_item_put" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x1f02a56b, "config_item_init_type_name" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x71d9ca3f, "usb_gadget_unregister_driver" },
	{ 0x3204e6a1, "usb_ep_alloc_request" },
	{ 0x91715312, "sprintf" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xc3923c26, "usb_gadget_set_state" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0x752d5f5b, "kstrtobool" },
	{ 0xf9019aa0, "kstrtou8" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x58cfb03b, "usb_gadget_activate" },
	{ 0xc686d185, "config_group_init_type_name" },
	{ 0x9221fcd2, "init_uts_ns" },
	{ 0x6eb454e3, "configfs_register_subsystem" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x4de2e10c, "device_create_file" },
	{ 0x6468ba35, "usb_ep_dequeue" },
	{ 0x77c59098, "module_put" },
	{ 0xef15e2ab, "config_item_set_name" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xebc82811, "usb_gadget_vbus_draw" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3fa0d062, "kstrtou16" },
	{ 0xe3b70205, "usb_gadget_set_selfpowered" },
	{ 0x13b69be1, "configfs_unregister_subsystem" },
	{ 0xcd2b3b73, "usb_ep_free_request" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xba77d39e, "usb_gadget_ep_match_desc" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xa6ad80a, "usb_gadget_probe_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0x2f0d49a1, "config_group_init" },
	{ 0xca0304ef, "try_module_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=udc-core";


MODULE_INFO(srcversion, "0314B9CE3A75F03315C4870");

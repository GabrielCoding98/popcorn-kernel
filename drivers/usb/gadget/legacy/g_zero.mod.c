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
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x104c9290, "usb_ep_autoconfig_reset" },
	{ 0x43745509, "param_ops_charp" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x51d050a, "usb_put_function_instance" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xe86c34c1, "usb_composite_overwrite_options" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x142104d6, "usb_composite_probe" },
	{ 0x9f6e7c86, "usb_add_function" },
	{ 0x29952574, "usb_gadget_wakeup" },
	{ 0x313a45d, "usb_put_function" },
	{ 0x93072ec7, "usb_composite_unregister" },
	{ 0x775e2055, "usb_get_function" },
	{ 0x37a0cba, "kfree" },
	{ 0x7cc11b97, "usb_string_ids_tab" },
	{ 0x498fe85d, "usb_add_config_only" },
	{ 0x6cc24745, "usb_get_function_instance" },
	{ 0x8fdcf915, "param_ops_ushort" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x73a7a766, "param_ops_uint" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,udc-core";


MODULE_INFO(srcversion, "96AB8942FB3B6B42A4D4425");
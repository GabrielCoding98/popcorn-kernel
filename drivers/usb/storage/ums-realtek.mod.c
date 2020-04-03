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
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xc553d624, "usb_stor_bulk_transfer_buf" },
	{ 0xca0c29e7, "usb_stor_post_reset" },
	{ 0x16182071, "usb_stor_control_msg" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xb53dfafc, "usb_autopm_get_interface" },
	{ 0xada294a0, "usb_enable_autosuspend" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x4c7dd122, "usb_stor_disconnect" },
	{ 0x7009370e, "usb_deregister" },
	{ 0x5de6316b, "usb_autopm_put_interface_async" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x5f0ef696, "usb_stor_probe2" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x21bdd534, "usb_stor_host_template_init" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf3f1124e, "usb_bulk_msg" },
	{ 0x7b27a3cf, "usb_stor_pre_reset" },
	{ 0x6d0ce2be, "usb_stor_reset_resume" },
	{ 0xe861adb6, "usb_stor_probe1" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0xd2bd253d, "pm_runtime_set_autosuspend_delay" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0BDAp0138d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0153d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0158d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0159d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0177d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0184d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D50A774989EB5513E28BA71");

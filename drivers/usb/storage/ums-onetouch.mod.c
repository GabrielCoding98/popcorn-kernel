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
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xca0c29e7, "usb_stor_post_reset" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x4c7dd122, "usb_stor_disconnect" },
	{ 0xc1ea1c86, "input_event" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x7009370e, "usb_deregister" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x5f0ef696, "usb_stor_probe2" },
	{ 0xc0ed0fc, "usb_free_coherent" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0x21bdd534, "usb_stor_host_template_init" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7ad52565, "input_register_device" },
	{ 0x7b27a3cf, "usb_stor_pre_reset" },
	{ 0x6d0ce2be, "usb_stor_reset_resume" },
	{ 0x3de29b9a, "usb_stor_suspend" },
	{ 0x489d494f, "input_free_device" },
	{ 0xe861adb6, "usb_stor_probe1" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xcdf1967b, "usb_stor_resume" },
	{ 0xd0fbda78, "input_unregister_device" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0x21cca90f, "usb_alloc_coherent" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
	{ 0x6df65bc1, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0D49p7000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D49p7010d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0582A419EF6910DAEFCE1D1");

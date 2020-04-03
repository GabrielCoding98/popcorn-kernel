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
	{ 0xf9a482f9, "msleep" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xc553d624, "usb_stor_bulk_transfer_buf" },
	{ 0xca0c29e7, "usb_stor_post_reset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x9cf8424e, "usb_stor_Bulk_transport" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x4c7dd122, "usb_stor_disconnect" },
	{ 0x5f754e5a, "memset" },
	{ 0x7009370e, "usb_deregister" },
	{ 0x5f0ef696, "usb_stor_probe2" },
	{ 0x21bdd534, "usb_stor_host_template_init" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7b27a3cf, "usb_stor_pre_reset" },
	{ 0x6d0ce2be, "usb_stor_reset_resume" },
	{ 0x3de29b9a, "usb_stor_suspend" },
	{ 0xe861adb6, "usb_stor_probe1" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xcdf1967b, "usb_stor_resume" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc87a8296, "usb_stor_Bulk_reset" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v045Ap5210d0101dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "772FF150B1724B8A2A89B29");

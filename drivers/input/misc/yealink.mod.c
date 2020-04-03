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
	{ 0x7009370e, "usb_deregister" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0xa7b1f769, "sysfs_create_group" },
	{ 0x7ad52565, "input_register_device" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xb81960ca, "snprintf" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
	{ 0x21cca90f, "usb_alloc_coherent" },
	{ 0x6df65bc1, "input_allocate_device" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x84b183ae, "strncmp" },
	{ 0xc1ea1c86, "input_event" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0x5f791ed1, "sysfs_remove_group" },
	{ 0xd0fbda78, "input_unregister_device" },
	{ 0xc0ed0fc, "usb_free_coherent" },
	{ 0x37a0cba, "kfree" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0x489d494f, "input_free_device" },
	{ 0x91715312, "sprintf" },
	{ 0x64ac2467, "up_read" },
	{ 0xf1c2ed95, "down_read" },
	{ 0x25c777e3, "up_write" },
	{ 0x76e18a1a, "down_write" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x9d669763, "memcpy" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v6993pB001d*dc*dsc*dp*ic03isc00ip00in*");

MODULE_INFO(srcversion, "6062FBFCAB2B806677270F9");

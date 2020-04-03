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
	{ 0x988694e4, "noop_llseek" },
	{ 0x7009370e, "usb_deregister" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0xb681d96f, "usb_register_dev" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xedc5eced, "usb_find_common_endpoints" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0xbac1993e, "usb_get_dev" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x31379608, "__init_rwsem" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x7c32d0f0, "printk" },
	{ 0xb53dfafc, "usb_autopm_get_interface" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xb2558eaa, "usb_find_interface" },
	{ 0x7a9a1802, "usb_autopm_put_interface" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x25c777e3, "up_write" },
	{ 0x76e18a1a, "down_write" },
	{ 0x8773584, "usb_deregister_dev" },
	{ 0xf3f1124e, "usb_bulk_msg" },
	{ 0x5f754e5a, "memset" },
	{ 0x64ac2467, "up_read" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0xbdd38aa9, "usb_unanchor_urb" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0xd3c2ecf6, "usb_anchor_urb" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x21cca90f, "usb_alloc_coherent" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
	{ 0xf1c2ed95, "down_read" },
	{ 0xd0d9eeb6, "down_interruptible" },
	{ 0x581cde4e, "up" },
	{ 0xc0ed0fc, "usb_free_coherent" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x97255bdf, "strlen" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x37a0cba, "kfree" },
	{ 0x1e3c5edc, "usb_put_dev" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0x3c72724e, "usb_wait_anchor_empty_timeout" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v10D2p*d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "C834226D24C067B68A68509");

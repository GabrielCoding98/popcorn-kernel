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
	{ 0x7905d834, "default_llseek" },
	{ 0x7009370e, "usb_deregister" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0xb681d96f, "usb_register_dev" },
	{ 0x21cca90f, "usb_alloc_coherent" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
	{ 0xedc5eced, "usb_find_common_endpoints" },
	{ 0x659ecfbe, "usb_get_intf" },
	{ 0xbac1993e, "usb_get_dev" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xf63991ee, "usb_poison_urb" },
	{ 0x8773584, "usb_deregister_dev" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0xb81960ca, "snprintf" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x5f754e5a, "memset" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x49970de8, "finish_wait" },
	{ 0x6578533e, "prepare_to_wait" },
	{ 0x61b7b126, "simple_strtoull" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xab5942cb, "kill_fasync" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x7c32d0f0, "printk" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xb2558eaa, "usb_find_interface" },
	{ 0x566a2d67, "fasync_helper" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x1e3c5edc, "usb_put_dev" },
	{ 0xb279b001, "usb_put_intf" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0xc0ed0fc, "usb_free_coherent" },
	{ 0x37a0cba, "kfree" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0C45p1010d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "828AB5495726902C349F3F1");

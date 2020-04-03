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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
	{ 0xa7b1f769, "sysfs_create_group" },
	{ 0xedc5eced, "usb_find_common_endpoints" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xbac1993e, "usb_get_dev" },
	{ 0x5f791ed1, "sysfs_remove_group" },
	{ 0x8773584, "usb_deregister_dev" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xab5942cb, "kill_fasync" },
	{ 0x1e3c5edc, "usb_put_dev" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xbb72d4fe, "__put_user_1" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x5f754e5a, "memset" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x2bbe5326, "usb_clear_halt" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf3f1124e, "usb_bulk_msg" },
	{ 0x37a0cba, "kfree" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0x7c32d0f0, "printk" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xb2558eaa, "usb_find_interface" },
	{ 0x566a2d67, "fasync_helper" },
	{ 0x91715312, "sprintf" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icFEisc03ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icFEisc03ip01in*");

MODULE_INFO(srcversion, "133E2ED77788E0E5D92F316");

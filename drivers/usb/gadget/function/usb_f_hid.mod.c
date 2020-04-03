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
	{ 0x7fe8a44d, "cdev_del" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xef2acd4, "cdev_init" },
	{ 0x72a32592, "usb_gstrings_attach" },
	{ 0x4c438863, "usb_free_all_descriptors" },
	{ 0x887ec63d, "usb_ep_disable" },
	{ 0x5a9fff9e, "usb_ep_enable" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x367f38d9, "usb_ep_queue" },
	{ 0xad2e5d45, "device_destroy" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x91715312, "sprintf" },
	{ 0x4dac9ca5, "usb_function_unregister" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5f754e5a, "memset" },
	{ 0x51d050a, "usb_put_function_instance" },
	{ 0xf9019aa0, "kstrtou8" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe8d55f0f, "usb_ep_autoconfig" },
	{ 0x21af32f7, "ida_free" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc686d185, "config_group_init_type_name" },
	{ 0x988694e4, "noop_llseek" },
	{ 0x851dd2f, "device_create" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x31b5ed77, "usb_function_register" },
	{ 0x90d1cb32, "cdev_add" },
	{ 0x4fa34060, "alloc_ep_req" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x3fa0d062, "kstrtou16" },
	{ 0x8191d049, "config_ep_by_speed" },
	{ 0xcd2b3b73, "usb_ep_free_request" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xdcd02f6d, "class_destroy" },
	{ 0x5d7f4ae1, "usb_assign_descriptors" },
	{ 0x49970de8, "finish_wait" },
	{ 0xce548b86, "usb_interface_id" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xd8a2e825, "__class_create" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xeb00f3ca, "ida_alloc_range" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,udc-core";


MODULE_INFO(srcversion, "F5076825F498FCA12F93934");

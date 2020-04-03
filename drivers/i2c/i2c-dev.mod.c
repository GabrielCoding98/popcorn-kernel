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
	{ 0xf7f21a6e, "no_llseek" },
	{ 0x8cd98667, "bus_unregister_notifier" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xdcd02f6d, "class_destroy" },
	{ 0x9e742f81, "i2c_for_each_dev" },
	{ 0xaf9ee887, "bus_register_notifier" },
	{ 0x653f103b, "i2c_bus_type" },
	{ 0xd8a2e825, "__class_create" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0xad2e5d45, "device_destroy" },
	{ 0x7c32d0f0, "printk" },
	{ 0x7fe8a44d, "cdev_del" },
	{ 0x851dd2f, "device_create" },
	{ 0x90d1cb32, "cdev_add" },
	{ 0xef2acd4, "cdev_init" },
	{ 0x91715312, "sprintf" },
	{ 0xc7762005, "i2c_transfer_buffer_flags" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xaedc75de, "i2c_smbus_xfer" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x84239571, "i2c_transfer" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xbfd1d05d, "i2c_verify_client" },
	{ 0x4515b211, "device_for_each_child" },
	{ 0x1360e1c2, "i2c_adapter_type" },
	{ 0xb81960ca, "snprintf" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xa77edddf, "i2c_get_adapter" },
	{ 0x37a0cba, "kfree" },
	{ 0x5fb57447, "i2c_put_adapter" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "9279B09D6DD496DB989761E");

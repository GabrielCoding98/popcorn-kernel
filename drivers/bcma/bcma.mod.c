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
	{ 0x87a64612, "bus_register" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xe9ca4c97, "of_translate_address" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xa6265634, "driver_register" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xea52c802, "irq_create_of_mapping" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xbdb93cb5, "platform_device_register_full" },
	{ 0x91715312, "sprintf" },
	{ 0x1e980667, "of_dma_configure" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0x3521c7a0, "device_register" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7c32d0f0, "printk" },
	{ 0xe97c4103, "ioremap" },
	{ 0x38916bc8, "driver_unregister" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x793b43cb, "platform_device_unregister" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x48bbceb4, "bus_unregister" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xb729b456, "of_get_address" },
	{ 0x12a38747, "usleep_range" },
	{ 0x5a163a5, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x37bbe493, "of_get_next_child" },
	{ 0x6c8a0d3b, "of_irq_parse_raw" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xc1a41fdd, "of_irq_parse_one" },
	{ 0x47d7efde, "get_device" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x6bb7e897, "of_platform_default_populate" },
	{ 0x16eee64a, "device_unregister" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0x184c48a6, "dev_set_name" },
	{ 0x6c07d933, "add_uevent_var" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "BA5E8C0ED130B6A79D3ADF1");

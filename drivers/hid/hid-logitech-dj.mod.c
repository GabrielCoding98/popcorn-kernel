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
	{ 0xbdc8486d, "hid_unregister_driver" },
	{ 0x70a86d4, "__hid_register_driver" },
	{ 0xc6b5f66f, "hid_add_device" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xb81960ca, "snprintf" },
	{ 0x375f45e2, "hid_allocate_device" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x581cde4e, "up" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x9bfa567e, "hid_hw_open" },
	{ 0x63a42155, "hid_hw_start" },
	{ 0xde685de1, "hid_validate_values" },
	{ 0x448e4524, "hid_open_report" },
	{ 0xc068440e, "__kfifo_alloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x562194f6, "__hid_request" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xf4c8bfb6, "hid_input_report" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x2480112f, "hid_parse_report" },
	{ 0x9d669763, "memcpy" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x7c32d0f0, "printk" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x37a0cba, "kfree" },
	{ 0xa1dbf8d4, "hid_destroy_device" },
	{ 0x7ac6971d, "hid_hw_stop" },
	{ 0xe93ff5ec, "hid_hw_close" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x5495392, "hid_debug" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0003g*v0000046Dp0000C52B");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C532");

MODULE_INFO(srcversion, "77AB221D7446B9FD3B58283");

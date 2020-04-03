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
	{ 0xf9a482f9, "msleep" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x9d669763, "memcpy" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xe4851152, "w1_add_master_device" },
	{ 0x5f754e5a, "memset" },
	{ 0xb6412d2c, "usb_set_interface" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x1968ceaa, "usb_reset_configuration" },
	{ 0xbac1993e, "usb_get_dev" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x2bbe5326, "usb_clear_halt" },
	{ 0x32d4ccec, "usb_interrupt_msg" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf3f1124e, "usb_bulk_msg" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7c32d0f0, "printk" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x37a0cba, "kfree" },
	{ 0x1e3c5edc, "usb_put_dev" },
	{ 0x5847a6ab, "w1_remove_master_device" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wire";

MODULE_ALIAS("usb:v04FAp2490d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "703238D1A99F11887A6BA56");

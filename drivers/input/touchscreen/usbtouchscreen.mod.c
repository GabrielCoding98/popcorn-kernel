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
	{ 0x7d54146, "param_ops_bool" },
	{ 0x7009370e, "usb_deregister" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0xd0fbda78, "input_unregister_device" },
	{ 0x7ad52565, "input_register_device" },
	{ 0xc0ed0fc, "usb_free_coherent" },
	{ 0x489d494f, "input_free_device" },
	{ 0xb81960ca, "snprintf" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x21cca90f, "usb_alloc_coherent" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x6df65bc1, "input_allocate_device" },
	{ 0xa7b1f769, "sysfs_create_group" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x7c32d0f0, "printk" },
	{ 0x5f754e5a, "memset" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf3f1124e, "usb_bulk_msg" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9d669763, "memcpy" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x5f791ed1, "sysfs_remove_group" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0xaad6ca78, "input_set_abs_params" },
	{ 0xc1ea1c86, "input_event" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x7a9a1802, "usb_autopm_put_interface" },
	{ 0xb53dfafc, "usb_autopm_get_interface" },
	{ 0x37a0cba, "kfree" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0EEFp0001d*dc*dsc*dp*ic03isc*ip*in*");
MODULE_ALIAS("usb:v0EEFp0002d*dc*dsc*dp*ic03isc*ip*in*");
MODULE_ALIAS("usb:v3823p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3823p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0123p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EEFp0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EEFp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1234p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1234p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v134Cp0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v134Cp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v134Cp0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v134Cp0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0596p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0403pF9E9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v16E3pF9E9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1234p5678d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0637p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AFAp03E8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v595Ap0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6615p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6615p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1391p1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DFCp0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08F2p007Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08F2p00CEd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08F2p00F4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F92p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1AC7p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14C8p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0664p0309d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0664p0306d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10F0p2002d*dc*dsc*dp*ic0Aisc00ip00in*");
MODULE_ALIAS("usb:v1870p0001d*dc*dsc*dp*ic0Aisc00ip00in*");
MODULE_ALIAS("usb:v04E7p0020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7374p0001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "2E4CE5C04D84E40AFF81843");

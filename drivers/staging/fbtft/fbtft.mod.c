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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xa738c28a, "module_layout" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x37788505, "device_remove_file" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0xc2f1e17, "framebuffer_release" },
	{ 0x8819dbc4, "fb_sys_read" },
	{ 0x949d7ffa, "backlight_device_register" },
	{ 0x3a2e1c5d, "gpio_to_desc" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x999e8297, "vfree" },
	{ 0xecff2dc3, "sys_copyarea" },
	{ 0x91715312, "sprintf" },
	{ 0x911ee79e, "of_prop_next_u32" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xf36b611a, "of_find_property" },
	{ 0xc60f5cb1, "of_property_read_string" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x7d620d00, "register_framebuffer" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xadb7cfd4, "devm_gpio_request_one" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xd8340e2c, "spi_sync" },
	{ 0x61651be, "strcat" },
	{ 0x4de2e10c, "device_create_file" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0xec126abe, "sys_fillrect" },
	{ 0xc2acc033, "hex_dump_to_buffer" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xcde24ddb, "sys_imageblit" },
	{ 0xe46e0085, "fb_sys_write" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0x187823d9, "of_get_named_gpio_flags" },
	{ 0x1152edb0, "dev_driver_string" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x6723b181, "framebuffer_alloc" },
	{ 0x58b04d8b, "fb_deferred_io_cleanup" },
	{ 0xcd020b29, "fb_deferred_io_init" },
	{ 0x37a0cba, "kfree" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0x9d669763, "memcpy" },
	{ 0x1b331cc0, "gpiod_set_raw_value" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x2a78bf4a, "gpiod_set_raw_value_cansleep" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0xcf5c862d, "gpiod_get_raw_value" },
	{ 0x77bc13a0, "strim" },
	{ 0x96f49763, "of_property_read_variable_u32_array" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x5ab9e4af, "backlight_device_unregister" },
	{ 0x931bbbfe, "param_ops_ulong" },
	{ 0x8b578a8a, "vscnprintf" },
	{ 0x500d5ec6, "unregister_framebuffer" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fb_sys_fops,syscopyarea,sysfillrect,sysimgblt";


MODULE_INFO(srcversion, "00C9DB8D20B47FB536BC824");

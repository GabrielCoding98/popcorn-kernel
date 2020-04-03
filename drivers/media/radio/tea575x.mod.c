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

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xa738c28a, "module_layout" },
	{ 0x7c3cf3c0, "v4l2_event_unsubscribe" },
	{ 0xf9a482f9, "msleep" },
	{ 0x23da0b34, "video_device_release_empty" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb58ea1cc, "v4l2_ctrl_log_status" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0xa3248a2b, "v4l2_ctrl_new_std" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x12bae986, "__video_register_device" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x5f754e5a, "memset" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x32f05388, "video_unregister_device" },
	{ 0xead2e9ef, "v4l2_ctrl_subscribe_event" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xe3457203, "v4l2_fh_release" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xf0ede9c1, "video_devdata" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2c5f71e, "v4l2_ctrl_handler_setup" },
	{ 0xeb06bceb, "v4l2_fh_open" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x46c5b78e, "video_ioctl2" },
	{ 0xb8a1612a, "v4l2_ctrl_poll" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev";


MODULE_INFO(srcversion, "BA23D78DB7932274F1C16C5");

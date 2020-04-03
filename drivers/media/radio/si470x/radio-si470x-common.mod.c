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
	{ 0x23da0b34, "video_device_release_empty" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0xead2e9ef, "v4l2_ctrl_subscribe_event" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf0ede9c1, "video_devdata" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8fdcf915, "param_ops_ushort" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0x73a7a766, "param_ops_uint" },
	{ 0x46c5b78e, "video_ioctl2" },
	{ 0xb8a1612a, "v4l2_ctrl_poll" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev";


MODULE_INFO(srcversion, "CDBAE64D4E9363200E14159");

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
	{ 0xb7700415, "param_ops_int" },
	{ 0x73a7a766, "param_ops_uint" },
	{ 0x46c5b78e, "video_ioctl2" },
	{ 0x9f2f2b7d, "platform_driver_unregister" },
	{ 0x3af31b31, "__platform_driver_register" },
	{ 0x7c32d0f0, "printk" },
	{ 0x12bae986, "__video_register_device" },
	{ 0xffb487d1, "v4l2_ctrl_new_std_menu" },
	{ 0xa3248a2b, "v4l2_ctrl_new_std" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0x7005a755, "v4l2_device_register" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0xe6c12171, "complete" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5f754e5a, "memset" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xf0ede9c1, "video_devdata" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf41872ce, "release_firmware" },
	{ 0x84239571, "i2c_transfer" },
	{ 0xecb30410, "request_firmware" },
	{ 0xf9a482f9, "msleep" },
	{ 0x12a38747, "usleep_range" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x913052e9, "v4l2_device_unregister" },
	{ 0x32f05388, "video_unregister_device" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev";


MODULE_INFO(srcversion, "65774876EFF109167506F28");
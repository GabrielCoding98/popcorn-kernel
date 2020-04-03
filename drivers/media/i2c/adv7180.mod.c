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
	{ 0x46c4e357, "v4l2_event_subdev_unsubscribe" },
	{ 0xc82716c4, "i2c_del_driver" },
	{ 0x232fad72, "i2c_register_driver" },
	{ 0xa974faac, "v4l2_subdev_notify_event" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc565bdd5, "i2c_smbus_read_byte_data" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x36151eb8, "v4l2_async_register_subdev" },
	{ 0x12a38747, "usleep_range" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x109e978f, "media_entity_pads_init" },
	{ 0x2c5f71e, "v4l2_ctrl_handler_setup" },
	{ 0x78f31eb5, "v4l2_ctrl_new_custom" },
	{ 0xa3248a2b, "v4l2_ctrl_new_std" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0x8837458d, "v4l2_i2c_subdev_init" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc7ae1587, "i2c_new_dummy" },
	{ 0x9b63ccf3, "devm_gpiod_get_optional" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x7c32d0f0, "printk" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xbfaa6dd, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0x3c6c7a64, "v4l2_src_change_event_subdev_subscribe" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0x4202f912, "gpiod_set_value_cansleep" },
	{ 0xeb9637f6, "i2c_unregister_device" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x1c7be050, "v4l2_async_unregister_subdev" },
	{ 0xe6abbc5c, "i2c_smbus_write_byte_data" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,media,v4l2-common";

MODULE_ALIAS("of:N*T*Cadi,adv7180");
MODULE_ALIAS("of:N*T*Cadi,adv7180C*");
MODULE_ALIAS("of:N*T*Cadi,adv7180cp");
MODULE_ALIAS("of:N*T*Cadi,adv7180cpC*");
MODULE_ALIAS("of:N*T*Cadi,adv7180st");
MODULE_ALIAS("of:N*T*Cadi,adv7180stC*");
MODULE_ALIAS("of:N*T*Cadi,adv7182");
MODULE_ALIAS("of:N*T*Cadi,adv7182C*");
MODULE_ALIAS("of:N*T*Cadi,adv7280");
MODULE_ALIAS("of:N*T*Cadi,adv7280C*");
MODULE_ALIAS("of:N*T*Cadi,adv7280-m");
MODULE_ALIAS("of:N*T*Cadi,adv7280-mC*");
MODULE_ALIAS("of:N*T*Cadi,adv7281");
MODULE_ALIAS("of:N*T*Cadi,adv7281C*");
MODULE_ALIAS("of:N*T*Cadi,adv7281-m");
MODULE_ALIAS("of:N*T*Cadi,adv7281-mC*");
MODULE_ALIAS("of:N*T*Cadi,adv7281-ma");
MODULE_ALIAS("of:N*T*Cadi,adv7281-maC*");
MODULE_ALIAS("of:N*T*Cadi,adv7282");
MODULE_ALIAS("of:N*T*Cadi,adv7282C*");
MODULE_ALIAS("of:N*T*Cadi,adv7282-m");
MODULE_ALIAS("of:N*T*Cadi,adv7282-mC*");
MODULE_ALIAS("i2c:adv7180");
MODULE_ALIAS("i2c:adv7180cp");
MODULE_ALIAS("i2c:adv7180st");
MODULE_ALIAS("i2c:adv7182");
MODULE_ALIAS("i2c:adv7280");
MODULE_ALIAS("i2c:adv7280-m");
MODULE_ALIAS("i2c:adv7281");
MODULE_ALIAS("i2c:adv7281-m");
MODULE_ALIAS("i2c:adv7281-ma");
MODULE_ALIAS("i2c:adv7282");
MODULE_ALIAS("i2c:adv7282-m");

MODULE_INFO(srcversion, "E2D3A0E0086067D66141233");

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
	{ 0xc82716c4, "i2c_del_driver" },
	{ 0x232fad72, "i2c_register_driver" },
	{ 0x96f49763, "of_property_read_variable_u32_array" },
	{ 0xc60f5cb1, "of_property_read_string" },
	{ 0xbcfd1365, "of_get_next_available_child" },
	{ 0x3ff924c9, "of_get_child_by_name" },
	{ 0x36151eb8, "v4l2_async_register_subdev" },
	{ 0xf5ca5694, "v4l2_ctrl_new_std_menu_items" },
	{ 0xa3248a2b, "v4l2_ctrl_new_std" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x8837458d, "v4l2_i2c_subdev_init" },
	{ 0xa3a5078a, "of_node_put" },
	{ 0xafb9984, "v4l2_fwnode_endpoint_parse" },
	{ 0x35c4b559, "of_graph_get_next_endpoint" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4202f912, "gpiod_set_value_cansleep" },
	{ 0x9b63ccf3, "devm_gpiod_get_optional" },
	{ 0x2c5f71e, "v4l2_ctrl_handler_setup" },
	{ 0x5f754e5a, "memset" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86c21343, "media_device_unregister_entity" },
	{ 0x36d2700a, "media_create_pad_link" },
	{ 0xb7863334, "media_device_register_entity" },
	{ 0x109e978f, "media_entity_pads_init" },
	{ 0xc565bdd5, "i2c_smbus_read_byte_data" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xe6abbc5c, "i2c_smbus_write_byte_data" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0x1c7be050, "v4l2_async_unregister_subdev" },
	{ 0x812d3483, "dev_printk" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,v4l2-common,v4l2-fwnode,media";

MODULE_ALIAS("of:N*T*Cti,tvp5150");
MODULE_ALIAS("of:N*T*Cti,tvp5150C*");
MODULE_ALIAS("i2c:tvp5150");

MODULE_INFO(srcversion, "53EE0895900870C647156CE");

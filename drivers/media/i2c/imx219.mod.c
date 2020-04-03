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
	{ 0xc82716c4, "i2c_del_driver" },
	{ 0x232fad72, "i2c_register_driver" },
	{ 0x3e28d1d7, "pm_runtime_enable" },
	{ 0xdd04a702, "v4l2_async_register_subdev_sensor_common" },
	{ 0x109e978f, "media_entity_pads_init" },
	{ 0xf5ca5694, "v4l2_ctrl_new_std_menu_items" },
	{ 0xa3248a2b, "v4l2_ctrl_new_std" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0x84239571, "i2c_transfer" },
	{ 0x9b63ccf3, "devm_gpiod_get_optional" },
	{ 0xfd99fecc, "devm_regulator_bulk_get" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x8eeb76a7, "devm_clk_get" },
	{ 0x989a95b1, "fwnode_handle_put" },
	{ 0xafb9984, "v4l2_fwnode_endpoint_parse" },
	{ 0xa44fcbba, "fwnode_graph_get_next_endpoint" },
	{ 0xd59e91ed, "dev_fwnode" },
	{ 0x8837458d, "v4l2_i2c_subdev_init" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf1cd9f03, "regulator_bulk_enable" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x591665cd, "pm_runtime_get_if_in_use" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xebe2679, "regulator_bulk_disable" },
	{ 0x4202f912, "gpiod_set_value_cansleep" },
	{ 0x827ff57b, "__v4l2_ctrl_handler_setup" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xcaf7b102, "__pm_runtime_resume" },
	{ 0x454e5b22, "__pm_runtime_idle" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc7762005, "i2c_transfer_buffer_flags" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xff76573f, "__v4l2_find_nearest_size" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x95aafef9, "__pm_runtime_set_status" },
	{ 0x82030b4e, "__pm_runtime_disable" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0x1c7be050, "v4l2_async_unregister_subdev" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=v4l2-fwnode,media,videodev,v4l2-common";

MODULE_ALIAS("of:N*T*Csony,imx219");
MODULE_ALIAS("of:N*T*Csony,imx219C*");

MODULE_INFO(srcversion, "966DC92FBDA3CDB7E9506B2");

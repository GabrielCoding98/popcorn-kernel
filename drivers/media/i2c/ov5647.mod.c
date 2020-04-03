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
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x36151eb8, "v4l2_async_register_subdev" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4202f912, "gpiod_set_value_cansleep" },
	{ 0x109e978f, "media_entity_pads_init" },
	{ 0x8837458d, "v4l2_i2c_subdev_init" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x9b63ccf3, "devm_gpiod_get_optional" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x8eeb76a7, "devm_clk_get" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xa3a5078a, "of_node_put" },
	{ 0xafb9984, "v4l2_fwnode_endpoint_parse" },
	{ 0x35c4b559, "of_graph_get_next_endpoint" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc7762005, "i2c_transfer_buffer_flags" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x5f754e5a, "memset" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x350f065d, "v4l2_device_unregister_subdev" },
	{ 0x1c7be050, "v4l2_async_unregister_subdev" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,media,v4l2-common,v4l2-fwnode";

MODULE_ALIAS("of:N*T*Covti,ov5647");
MODULE_ALIAS("of:N*T*Covti,ov5647C*");
MODULE_ALIAS("i2c:ov5647");

MODULE_INFO(srcversion, "B404BED04AC76D34B259F9A");
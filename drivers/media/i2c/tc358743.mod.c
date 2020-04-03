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
	{ 0x740d3e2e, "_dev_warn" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd1a1d33a, "gpiod_set_value" },
	{ 0x12a38747, "usleep_range" },
	{ 0x9b63ccf3, "devm_gpiod_get_optional" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x24d273d1, "add_timer" },
	{ 0xa3a5078a, "of_node_put" },
	{ 0x3938c73d, "v4l2_fwnode_endpoint_free" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xd38bd1b7, "v4l2_fwnode_endpoint_alloc_parse" },
	{ 0x35c4b559, "of_graph_get_next_endpoint" },
	{ 0x8eeb76a7, "devm_clk_get" },
	{ 0x2c5f71e, "v4l2_ctrl_handler_setup" },
	{ 0xce1cc28f, "devm_request_threaded_irq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x36151eb8, "v4l2_async_register_subdev" },
	{ 0x109e978f, "media_entity_pads_init" },
	{ 0x78f31eb5, "v4l2_ctrl_new_custom" },
	{ 0xa3248a2b, "v4l2_ctrl_new_std" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0x8837458d, "v4l2_i2c_subdev_init" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0xaf3d134, "v4l2_valid_dv_timings" },
	{ 0x8402862, "v4l2_print_dv_timings" },
	{ 0xd034392d, "v4l2_match_dv_timings" },
	{ 0xa974faac, "v4l2_subdev_notify_event" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x7b6ac78f, "v4l2_phys_addr_validate" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd0285146, "hdmi_infoframe_log" },
	{ 0xdb1b64d6, "hdmi_infoframe_unpack" },
	{ 0xbfaa6dd, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0x3c6c7a64, "v4l2_src_change_event_subdev_subscribe" },
	{ 0x922ecd29, "v4l2_enum_dv_timings_cap" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x9f8c16c3, "__v4l2_ctrl_s_ctrl" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7c32d0f0, "printk" },
	{ 0x84239571, "i2c_transfer" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0x350f065d, "v4l2_device_unregister_subdev" },
	{ 0x1c7be050, "v4l2_async_unregister_subdev" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0x92b57248, "flush_work" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0x9d669763, "memcpy" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xe707d823, "__aeabi_uidiv" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,v4l2-fwnode,media,v4l2-common,v4l2-dv-timings";

MODULE_ALIAS("of:N*T*Ctoshiba,tc358743");
MODULE_ALIAS("of:N*T*Ctoshiba,tc358743C*");
MODULE_ALIAS("i2c:tc358743");

MODULE_INFO(srcversion, "879CA118804005026174BEB");
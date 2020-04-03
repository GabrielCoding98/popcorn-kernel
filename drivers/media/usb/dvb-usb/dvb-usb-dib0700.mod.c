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
	{ 0x367d60d9, "dib7000m_pid_filter_ctrl" },
	{ 0x402b8281, "__request_module" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xb5744e5, "dib9000_get_i2c_master" },
	{ 0xbf69f7fe, "dib9000_get_slave_frontend" },
	{ 0x1c4ddc75, "dibx000_i2c_set_speed" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x655438ab, "dvb_usb_device_exit" },
	{ 0x905a6d55, "dib0090_gain_control" },
	{ 0xdb6e7c88, "dvb_usb_device_init" },
	{ 0x84239571, "i2c_transfer" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3d75450b, "dib9000_set_gpio" },
	{ 0x7fbd0de2, "dib0070_wbd_offset" },
	{ 0x50a5b5b5, "dib0090_get_wbd_target" },
	{ 0x6dd9709d, "dib9000_i2c_enumeration" },
	{ 0xe3ba0c69, "dib9000_set_slave_frontend" },
	{ 0x36fed29b, "dib0090_dcc_freq" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0xa9531adb, "dib3000mc_get_tuner_i2c_master" },
	{ 0x7d3fdb1, "dib9000_firmware_post_pll_init" },
	{ 0xc411e5a5, "param_ops_short" },
	{ 0x7009370e, "usb_deregister" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0x7c32d0f0, "printk" },
	{ 0xdf678f0c, "rc_keydown" },
	{ 0x9810cd26, "dib0090_get_current_gain" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc420176f, "dib9000_fw_pid_filter" },
	{ 0x4d74c4c0, "dib9000_get_component_bus_interface" },
	{ 0xeb9637f6, "i2c_unregister_device" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x66d87d38, "symbol_put_addr" },
	{ 0x8bfc153e, "dib9000_get_tuner_interface" },
	{ 0x77c59098, "module_put" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0x57c646c5, "dib9000_fw_set_component_bus_speed" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf3f1124e, "usb_bulk_msg" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xba0c80c6, "dib3000mc_i2c_enumeration" },
	{ 0x37a0cba, "kfree" },
	{ 0x414167c, "dib7000m_pid_filter" },
	{ 0x9d669763, "memcpy" },
	{ 0xd35fa770, "dib9000_fw_pid_filter_ctrl" },
	{ 0x3e872658, "param_array_ops" },
	{ 0xb69e2afb, "dib0090_pwm_gain_reset" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0xecb30410, "request_firmware" },
	{ 0x4cf68e08, "dib9000_set_i2c_adapter" },
	{ 0xe9b250c2, "dib0090_set_dc_servo" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x3907679f, "rc_repeat" },
	{ 0xab6ee60e, "dvb_usb_get_hexline" },
	{ 0x112a6900, "dib0090_set_tune_state" },
	{ 0x64f88cff, "i2c_new_device" },
	{ 0x4cf0671c, "dib0070_ctrl_agc_filter" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0xf41872ce, "release_firmware" },
	{ 0xf8b786bf, "dib7000m_get_i2c_master" },
	{ 0xe68828f5, "dib0090_get_tune_state" },
	{ 0xca0304ef, "try_module_get" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dib7000m,dib9000,dibx000_common,dvb-usb,dib0090,dib0070,dib3000mc";

MODULE_ALIAS("usb:v10B8p1E14d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p1E78d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p9941d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p9950d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApA807d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v185Bp1E78d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1584p6003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0413p6F00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7060d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApB808d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p022Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp005Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p9580d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p1EF0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p1EBCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0228d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p1EBEd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0229d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v185Bp1E80d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApB568d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p7001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D8p810Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p171Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p173Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7070d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0058d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p022Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0236d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0237d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1164p1EDCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0060d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0078d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0413p6F01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p5200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p8400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p7002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1164p1F08d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1736d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p023Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p023Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0062d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0081d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1415p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1164p2EDCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB210d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1164p0871d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p0021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p0020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0413p60F6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp10A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp10A1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1164p1EFCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1164p1E8Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0243d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p0245d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p0248d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p1E80d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00ABd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p1F98d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p1F90d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1554p5010d3F00dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1554p5010d3[0-9A-E]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1554p5010d[0-2]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1E59p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0245d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0248d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p1FA0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p2383d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p1FA8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p2384d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p1BB2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p1BB4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14F7p0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1660p1921d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p023Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p023Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p1E6Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p1F9Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p003Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p025Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p025Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p1FAAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p1FAAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v147Fp2758d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep02D5d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "4A3E3E5A0EA29DD92FC75AC");

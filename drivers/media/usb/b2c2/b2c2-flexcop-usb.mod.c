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
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xd0888f02, "flexcop_device_initialize" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x75a69184, "flexcop_device_kfree" },
	{ 0x62c1854e, "flexcop_sram_ctrl" },
	{ 0x5f754e5a, "memset" },
	{ 0x7009370e, "usb_deregister" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xb6412d2c, "usb_set_interface" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x1d01ff23, "flexcop_device_kmalloc" },
	{ 0xc0ed0fc, "usb_free_coherent" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0xec4af216, "flexcop_sram_set_dest" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc531bbf2, "flexcop_pass_dmx_packets" },
	{ 0xd1909069, "flexcop_wan_set_speed" },
	{ 0x9d669763, "memcpy" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x21cca90f, "usb_alloc_coherent" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0x493d51ea, "flexcop_device_exit" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=b2c2-flexcop";

MODULE_ALIAS("usb:v0AF7p0101d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "A1EF589290250563E31942F");

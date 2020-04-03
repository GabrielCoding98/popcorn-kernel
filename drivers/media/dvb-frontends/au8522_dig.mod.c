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
	{ 0xfce03258, "au8522_release_state" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xd9eb0a51, "au8522_led_ctrl" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xe8b811f7, "au8522_writereg" },
	{ 0x361053ae, "au8522_readreg" },
	{ 0x7c32d0f0, "printk" },
	{ 0x93064716, "au8522_i2c_gate_ctrl" },
	{ 0x151dcca, "au8522_sleep" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb78e9ac6, "au8522_analog_i2c_gate_ctrl" },
	{ 0x404d0c5c, "au8522_get_state" },
	{ 0x9d669763, "memcpy" },
	{ 0x50ba0fcb, "au8522_init" },
	{ 0x8f678b07, "__stack_chk_guard" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=au8522_common";


MODULE_INFO(srcversion, "4560785EAA2EA6837C4E1AC");

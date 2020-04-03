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
	{ 0xb316bedd, "param_ops_byte" },
	{ 0x7c41147c, "w1_unregister_family" },
	{ 0x5c345a68, "w1_register_family" },
	{ 0xfefa79ff, "i2c_add_adapter" },
	{ 0xe914e41e, "strcpy" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x1da9e99e, "w1_reset_resume_command" },
	{ 0x635c2f6a, "w1_read_block" },
	{ 0xf102732a, "crc16" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x12a38747, "usleep_range" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x2917c0f0, "w1_touch_bit" },
	{ 0xa28cae56, "devm_kfree" },
	{ 0x3d39806a, "i2c_del_adapter" },
	{ 0x25b81aa3, "w1_read_8" },
	{ 0x8d512d93, "w1_write_8" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x38ca34dc, "w1_write_block" },
	{ 0xbc5d61ca, "w1_reset_select_slave" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x91715312, "sprintf" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wire";


MODULE_INFO(srcversion, "384E8CD316B18C51E3E8A20");

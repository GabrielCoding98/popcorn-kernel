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
	{ 0xbdc8486d, "hid_unregister_driver" },
	{ 0x70a86d4, "__hid_register_driver" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x63a42155, "hid_hw_start" },
	{ 0x448e4524, "hid_open_report" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0003g*v00000810p00000001");
MODULE_ALIAS("hid:b0003g*v00000810p00000002");
MODULE_ALIAS("hid:b0003g*v00000E8Fp00000003");
MODULE_ALIAS("hid:b0003g*v00000F30p00000111");

MODULE_INFO(srcversion, "0A372D60164B5C1D7282EFB");

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
	{ 0xab6c68ac, "fsg_config_from_params" },
	{ 0x1ccb58f7, "fsg_common_set_num_buffers" },
	{ 0x6acb4179, "fsg_common_set_inquiry_string" },
	{ 0x5289c276, "usb_add_config" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x141fce2a, "fsg_common_remove_luns" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0x9a0221c7, "fsg_common_free_buffers" },
	{ 0x43745509, "param_ops_charp" },
	{ 0xec36057b, "fsg_common_set_cdev" },
	{ 0x51d050a, "usb_put_function_instance" },
	{ 0xe86c34c1, "usb_composite_overwrite_options" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x142104d6, "usb_composite_probe" },
	{ 0x9f6e7c86, "usb_add_function" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd1a3e8e0, "fsg_common_create_luns" },
	{ 0x313a45d, "usb_put_function" },
	{ 0x93072ec7, "usb_composite_unregister" },
	{ 0x775e2055, "usb_get_function" },
	{ 0x37a0cba, "kfree" },
	{ 0x7cc11b97, "usb_string_ids_tab" },
	{ 0x3e872658, "param_array_ops" },
	{ 0x6cc24745, "usb_get_function_instance" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7e26d4a5, "fsg_common_set_sysfs" },
	{ 0x8fdcf915, "param_ops_ushort" },
	{ 0x73a7a766, "param_ops_uint" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usb_f_mass_storage,libcomposite";


MODULE_INFO(srcversion, "51D1B92D97DA701767BB272");

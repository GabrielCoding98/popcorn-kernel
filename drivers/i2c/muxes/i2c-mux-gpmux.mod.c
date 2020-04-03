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
	{ 0x9f2f2b7d, "platform_driver_unregister" },
	{ 0x3af31b31, "__platform_driver_register" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x96f49763, "of_property_read_variable_u32_array" },
	{ 0xab4ccadf, "i2c_mux_add_adapter" },
	{ 0xfe232cce, "mux_control_states" },
	{ 0xf36b611a, "of_find_property" },
	{ 0x4248e6e, "i2c_mux_alloc" },
	{ 0x37bbe493, "of_get_next_child" },
	{ 0xa3a5078a, "of_node_put" },
	{ 0xce8cda97, "of_find_i2c_adapter_by_node" },
	{ 0x186eae51, "of_parse_phandle" },
	{ 0xf595e34e, "devm_mux_control_get" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x22800b65, "mux_control_select" },
	{ 0x20a10195, "mux_control_deselect" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x5fb57447, "i2c_put_adapter" },
	{ 0xbaf269a6, "i2c_mux_del_adapters" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=i2c-mux,mux-core";

MODULE_ALIAS("of:N*T*Ci2c-mux");
MODULE_ALIAS("of:N*T*Ci2c-muxC*");

MODULE_INFO(srcversion, "1D1752D25EBC250EF5ADDF1");
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
	{ 0x557bc611, "mipi_dsi_driver_unregister" },
	{ 0xc82716c4, "i2c_del_driver" },
	{ 0x232fad72, "i2c_register_driver" },
	{ 0x68f3437, "mipi_dsi_driver_register_full" },
	{ 0x99dbbc06, "mipi_dsi_attach" },
	{ 0x336c44ce, "drm_panel_add" },
	{ 0x9b3cc0c6, "drm_panel_init" },
	{ 0xb6726356, "mipi_dsi_device_register_full" },
	{ 0x219266ad, "of_graph_get_remote_port" },
	{ 0xa3a5078a, "of_node_put" },
	{ 0x165bdb40, "of_find_mipi_dsi_host_by_node" },
	{ 0xf15d1fe0, "of_graph_get_remote_port_parent" },
	{ 0x35c4b559, "of_graph_get_next_endpoint" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0x75c41147, "mipi_dsi_generic_write" },
	{ 0xc565bdd5, "i2c_smbus_read_byte_data" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe6abbc5c, "i2c_smbus_write_byte_data" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xf03957af, "drm_display_info_set_bus_formats" },
	{ 0xb3f19de, "drm_mode_probed_add" },
	{ 0x96a4677c, "drm_mode_set_name" },
	{ 0x604d1f65, "drm_mode_duplicate" },
	{ 0x37a0cba, "kfree" },
	{ 0xd9ec3f14, "mipi_dsi_device_unregister" },
	{ 0x8b4a8261, "drm_panel_remove" },
	{ 0xd448952a, "mipi_dsi_detach" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm";

MODULE_ALIAS("of:N*T*Craspberrypi,7inch-touchscreen-panel");
MODULE_ALIAS("of:N*T*Craspberrypi,7inch-touchscreen-panelC*");

MODULE_INFO(srcversion, "A35C55807A1910255D5D3A8");

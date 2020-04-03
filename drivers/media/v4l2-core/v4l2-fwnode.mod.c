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
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x36151eb8, "v4l2_async_register_subdev" },
	{ 0x26e5db5c, "fwnode_graph_get_remote_port_parent" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x989a95b1, "fwnode_handle_put" },
	{ 0xb0d92465, "v4l2_async_subdev_notifier_register" },
	{ 0x662c2da, "v4l2_async_notifier_cleanup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x13247b82, "fwnode_get_next_parent" },
	{ 0x9aaa8eff, "fwnode_device_is_available" },
	{ 0x1a72659f, "fwnode_property_present" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x7c32d0f0, "printk" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xe1e7dfa0, "fwnode_property_read_u64_array" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x88288e85, "kvmalloc_node" },
	{ 0x9d8c35bb, "fwnode_property_read_u32_array" },
	{ 0x4a2e039d, "fwnode_graph_parse_endpoint" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xd1bceb33, "fwnode_get_parent" },
	{ 0x4c9f5208, "fwnode_property_get_reference_args" },
	{ 0x715832cf, "fwnode_graph_get_port_parent" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xa44fcbba, "fwnode_graph_get_next_endpoint" },
	{ 0xd59e91ed, "dev_fwnode" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xad0e1528, "fwnode_graph_get_remote_endpoint" },
	{ 0xedc16c22, "v4l2_async_notifier_unregister" },
	{ 0xcfbd2b37, "of_fwnode_ops" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev";


MODULE_INFO(srcversion, "08666BAA2EA65FBE1286CA9");

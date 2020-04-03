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
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x72a32592, "usb_gstrings_attach" },
	{ 0x4c438863, "usb_free_all_descriptors" },
	{ 0x887ec63d, "usb_ep_disable" },
	{ 0x5a9fff9e, "usb_ep_enable" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xdc2d098a, "gether_get_qmult" },
	{ 0x367f38d9, "usb_ep_queue" },
	{ 0x28f5dab5, "gether_setup_name_default" },
	{ 0x325ec888, "gether_get_host_addr_cdc" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x8b299b50, "gether_get_ifname" },
	{ 0x3204e6a1, "usb_ep_alloc_request" },
	{ 0x91715312, "sprintf" },
	{ 0x8878cfa6, "gether_cleanup" },
	{ 0x4dac9ca5, "usb_function_unregister" },
	{ 0x45040751, "gether_set_host_addr" },
	{ 0xc1e0040c, "gether_get_dev_addr" },
	{ 0xc0484895, "gether_connect" },
	{ 0x51d050a, "usb_put_function_instance" },
	{ 0xf9019aa0, "kstrtou8" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe8d55f0f, "usb_ep_autoconfig" },
	{ 0x2ac79575, "free_netdev" },
	{ 0x12e04db4, "gether_set_gadget" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x4c2616a2, "gether_get_host_addr" },
	{ 0xc686d185, "config_group_init_type_name" },
	{ 0x6d85bd58, "gether_set_qmult" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x31b5ed77, "usb_function_register" },
	{ 0x10ceb1f, "gether_register_netdev" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6c671dc3, "gether_set_dev_addr" },
	{ 0x8191d049, "config_ep_by_speed" },
	{ 0xcd2b3b73, "usb_ep_free_request" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x302c9a00, "gether_disconnect" },
	{ 0x37a0cba, "kfree" },
	{ 0x5d7f4ae1, "usb_assign_descriptors" },
	{ 0xce548b86, "usb_interface_id" },
	{ 0x8f678b07, "__stack_chk_guard" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,udc-core,u_ether";


MODULE_INFO(srcversion, "337B879FD9B63F20D5D0465");

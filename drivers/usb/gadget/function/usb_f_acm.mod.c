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
	{ 0x46d8bf77, "gserial_connect" },
	{ 0x887ec63d, "usb_ep_disable" },
	{ 0x5a9fff9e, "usb_ep_enable" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x367f38d9, "usb_ep_queue" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x945d354d, "usb_ep_set_halt" },
	{ 0x91715312, "sprintf" },
	{ 0x4dac9ca5, "usb_function_unregister" },
	{ 0x51d050a, "usb_put_function_instance" },
	{ 0xe8d55f0f, "usb_ep_autoconfig" },
	{ 0xcf3780e6, "gserial_disconnect" },
	{ 0x7ce6bcfb, "gs_alloc_req" },
	{ 0xc686d185, "config_group_init_type_name" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x33bfdca2, "gserial_alloc_line" },
	{ 0x31b5ed77, "usb_function_register" },
	{ 0x8191d049, "config_ep_by_speed" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xb6652875, "gserial_free_line" },
	{ 0x5d7f4ae1, "usb_assign_descriptors" },
	{ 0xce548b86, "usb_interface_id" },
	{ 0x6bc12f3a, "gs_free_req" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,u_serial,udc-core";


MODULE_INFO(srcversion, "02E722A6C6662FDF62554A8");

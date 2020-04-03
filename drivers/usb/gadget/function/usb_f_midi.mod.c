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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x72a32592, "usb_gstrings_attach" },
	{ 0x4c438863, "usb_free_all_descriptors" },
	{ 0x887ec63d, "usb_ep_disable" },
	{ 0x5a9fff9e, "usb_ep_enable" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xc068440e, "__kfifo_alloc" },
	{ 0x367f38d9, "usb_ep_queue" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x945d354d, "usb_ep_set_halt" },
	{ 0x83f647b4, "snd_rawmidi_set_ops" },
	{ 0x91715312, "sprintf" },
	{ 0x4dac9ca5, "usb_function_unregister" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xc00918ec, "snd_rawmidi_new" },
	{ 0xb12a7ed3, "snd_device_new" },
	{ 0x51d050a, "usb_put_function_instance" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe8d55f0f, "usb_ep_autoconfig" },
	{ 0xbee78263, "snd_card_free_when_closed" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc686d185, "config_group_init_type_name" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x31b5ed77, "usb_function_register" },
	{ 0x51ef33b8, "kstrndup" },
	{ 0xcc8a4c98, "snd_card_new" },
	{ 0xfbf85741, "snd_component_add" },
	{ 0x4fa34060, "alloc_ep_req" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8191d049, "config_ep_by_speed" },
	{ 0xcd2b3b73, "usb_ep_free_request" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x2e09263f, "usb_copy_descriptors" },
	{ 0x37a0cba, "kfree" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0xcf8956f, "snd_rawmidi_drop_output" },
	{ 0xce548b86, "usb_interface_id" },
	{ 0xfbe59965, "snd_card_free" },
	{ 0x4c1734be, "snd_card_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x8f445107, "snd_rawmidi_transmit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x32319410, "snd_rawmidi_receive" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,udc-core,snd-rawmidi,snd";


MODULE_INFO(srcversion, "75F3075C61CF7D6409D7E35");

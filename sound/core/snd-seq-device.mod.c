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
	{ 0x92b57248, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x87a64612, "bus_register" },
	{ 0x402b8281, "__request_module" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xa6265634, "driver_register" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb12a7ed3, "snd_device_new" },
	{ 0xbf56919d, "device_del" },
	{ 0x38916bc8, "driver_unregister" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x8d93858d, "device_add" },
	{ 0x48bbceb4, "bus_unregister" },
	{ 0x5d8827bf, "bus_for_each_dev" },
	{ 0x5a163a5, "put_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xfd2cd3b1, "snd_seq_root" },
	{ 0x3c89e74d, "snd_info_free_entry" },
	{ 0x1017cd77, "device_initialize" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x184c48a6, "dev_set_name" },
	{ 0x6ea8495c, "snd_info_create_module_entry" },
	{ 0x26da8576, "snd_info_register" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd";


MODULE_INFO(srcversion, "4563576F5BC63C96D9EFBFF");

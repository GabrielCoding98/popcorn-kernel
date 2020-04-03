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
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x87e88319, "iio_kfifo_allocate" },
	{ 0xa8d3417e, "devres_alloc_node" },
	{ 0xb6903c68, "devm_iio_device_match" },
	{ 0x4aa71c4d, "iio_triggered_buffer_postenable" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xff49db9e, "iio_device_attach_buffer" },
	{ 0xbaf123b8, "devres_release" },
	{ 0x2a0e3ce, "iio_triggered_buffer_predisable" },
	{ 0x6b68732, "iio_kfifo_free" },
	{ 0xf436e6e0, "devres_add" },
	{ 0xc0676620, "iio_alloc_pollfunc" },
	{ 0x43aee125, "iio_dealloc_pollfunc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=kfifo_buf,industrialio";


MODULE_INFO(srcversion, "E6C701783AF27252026FF9B");

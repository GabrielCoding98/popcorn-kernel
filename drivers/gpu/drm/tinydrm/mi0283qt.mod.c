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
	{ 0x8a150d84, "drm_gem_cma_vm_ops" },
	{ 0x16935569, "drm_gem_cma_dumb_create" },
	{ 0xc71d1661, "drm_gem_cma_prime_mmap" },
	{ 0x9990f8cd, "drm_gem_cma_prime_vunmap" },
	{ 0xb1aac757, "drm_gem_cma_prime_vmap" },
	{ 0x1ae33339, "tinydrm_gem_cma_prime_import_sg_table" },
	{ 0x12b109a5, "drm_gem_cma_prime_get_sg_table" },
	{ 0x2b35fbf9, "drm_gem_prime_import" },
	{ 0x1e55ea05, "drm_gem_prime_export" },
	{ 0xec38f1e, "drm_gem_prime_fd_to_handle" },
	{ 0xe7f919cb, "drm_gem_prime_handle_to_fd" },
	{ 0xd3742b82, "drm_gem_cma_print_info" },
	{ 0xf8434934, "tinydrm_gem_cma_free_object" },
	{ 0x4a95cdb0, "mipi_dbi_debugfs_init" },
	{ 0x21fc232a, "drm_release" },
	{ 0x91a73f38, "drm_open" },
	{ 0x6cf48f21, "drm_gem_cma_mmap" },
	{ 0xa39e7c3d, "drm_ioctl" },
	{ 0x9bf56829, "drm_poll" },
	{ 0xfbba21bf, "drm_read" },
	{ 0x988694e4, "noop_llseek" },
	{ 0x7821d6e8, "drm_gem_fb_simple_display_pipe_prepare_fb" },
	{ 0xb025a0cf, "tinydrm_display_pipe_update" },
	{ 0x9d97f126, "mipi_dbi_pipe_disable" },
	{ 0x38916bc8, "driver_unregister" },
	{ 0xdb8d0549, "__spi_register_driver" },
	{ 0xbd8f34ee, "drm_dev_printk" },
	{ 0x6123290a, "devm_tinydrm_register" },
	{ 0x13afa1ed, "mipi_dbi_init" },
	{ 0xe8d5cc9c, "mipi_dbi_spi_init" },
	{ 0x978e037a, "device_property_read_u32_array" },
	{ 0x1c877c, "devm_of_find_backlight" },
	{ 0xaf1df355, "devm_regulator_get" },
	{ 0x9b63ccf3, "devm_gpiod_get_optional" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd6ac55ea, "mipi_dbi_enable_flush" },
	{ 0xfc795851, "mipi_dbi_command_stackbuf" },
	{ 0x2686bab, "mipi_dbi_poweron_conditional_reset" },
	{ 0x2109a78c, "drm_dbg" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x272039e0, "tinydrm_shutdown" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm,tinydrm,mipi-dbi,drm_kms_helper";

MODULE_ALIAS("spi:mi0283qt");
MODULE_ALIAS("of:N*T*Cmulti-inno,mi0283qt");
MODULE_ALIAS("of:N*T*Cmulti-inno,mi0283qtC*");

MODULE_INFO(srcversion, "6DD2FA06D11528F7C82F9ED");

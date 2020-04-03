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
	{ 0x306d3101, "mmc_gpio_get_cd" },
	{ 0xaa98f08, "mmc_gpio_get_ro" },
	{ 0x38916bc8, "driver_unregister" },
	{ 0xdb8d0549, "__spi_register_driver" },
	{ 0xff85ef8d, "mmc_request_done" },
	{ 0xad606967, "spi_bus_unlock" },
	{ 0xa2048e95, "crc_itu_t" },
	{ 0x3f01b709, "flush_kernel_dcache_page" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x512fa43c, "spi_bus_lock" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x6745701e, "mmc_gpiod_request_cd_irq" },
	{ 0x9fe44b4e, "mmc_gpio_request_ro" },
	{ 0xe11fa9f9, "mmc_gpio_request_cd" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x78743d93, "mmc_add_host" },
	{ 0xc2451da0, "mem_map" },
	{ 0xdab18539, "mmc_spi_get_pdata" },
	{ 0x2738dbc5, "mmc_alloc_host" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xb81960ca, "snprintf" },
	{ 0xba95c5c0, "crc7_be" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd8340e2c, "spi_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0xe379d7db, "spi_setup" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x1000e51, "schedule" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xa4af7eb1, "spi_sync_locked" },
	{ 0x5bcfef9e, "mmc_detect_change" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x77fac87, "mmc_spi_put_pdata" },
	{ 0x90fd29bd, "mmc_free_host" },
	{ 0x37a0cba, "kfree" },
	{ 0xd484febe, "arm_dma_ops" },
	{ 0x5851c12c, "mmc_remove_host" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=of_mmc_spi,crc7";

MODULE_ALIAS("of:N*T*Cmmc-spi-slot");
MODULE_ALIAS("of:N*T*Cmmc-spi-slotC*");

MODULE_INFO(srcversion, "C737AA8983201EBEE43019C");

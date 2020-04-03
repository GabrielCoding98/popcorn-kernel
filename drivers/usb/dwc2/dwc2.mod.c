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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xf5037a81, "kmem_cache_destroy" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xd4e8690c, "usb_gadget_map_request" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x7435b5d9, "dma_release_from_dev_coherent" },
	{ 0x815588a6, "clk_enable" },
	{ 0xa93226c0, "usb_add_hcd" },
	{ 0x4c7a68b0, "debugfs_create_dir" },
	{ 0xc2451da0, "mem_map" },
	{ 0xe6da5a32, "usb_hcd_unmap_urb_for_dma" },
	{ 0x226c9b6d, "single_open" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x2f90bbb9, "usb_remove_hcd" },
	{ 0xea124bd1, "gcd" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x242978bc, "regulator_disable" },
	{ 0xd484febe, "arm_dma_ops" },
	{ 0x759f7158, "single_release" },
	{ 0x491483ea, "seq_puts" },
	{ 0x45c2de1e, "usb_create_hcd" },
	{ 0x4998222d, "hrtimer_cancel" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdabe5e51, "usb_del_gadget_udc" },
	{ 0x8b4d806f, "usb_gadget_giveback_request" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x111b5a08, "devm_ioremap_resource" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0xfa6f47ce, "usb_hcd_giveback_urb" },
	{ 0xa176f7d9, "debugfs_create_file" },
	{ 0x922f45a6, "__bitmap_clear" },
	{ 0x98ce88a8, "debugfs_remove_recursive" },
	{ 0x8e3afba1, "seq_read" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x3af31b31, "__platform_driver_register" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x8788dac7, "usb_hub_clear_tt_buffer" },
	{ 0xc3923c26, "usb_gadget_set_state" },
	{ 0x3919aac5, "usb_put_hcd" },
	{ 0xfd99fecc, "devm_regulator_bulk_get" },
	{ 0xf1cd9f03, "regulator_bulk_enable" },
	{ 0xf7ec2e9e, "dma_alloc_from_dev_coherent" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x59079359, "usb_gadget_unmap_request" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x4a16dd15, "hrtimer_start_range_ns" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x49f9ba90, "dmam_free_coherent" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0x63628c5f, "usb_hcd_link_urb_to_ep" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x64127b67, "bitmap_find_next_zero_area_off" },
	{ 0x7c32d0f0, "printk" },
	{ 0xacb31ecf, "_raw_spin_trylock" },
	{ 0xf36b611a, "of_find_property" },
	{ 0x84b183ae, "strncmp" },
	{ 0x9f1691c2, "kmem_cache_free" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xb12ee814, "device_property_read_string" },
	{ 0x7e64181d, "usb_calc_bus_time" },
	{ 0x6af01fe2, "platform_get_resource" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x5920f98d, "of_match_device" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x56905225, "usb_hcd_check_unlink_urb" },
	{ 0x615911d7, "__bitmap_set" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xaae6676e, "kmem_cache_alloc" },
	{ 0xcf31ae40, "debugfs_create_regset32" },
	{ 0x978e037a, "device_property_read_u32_array" },
	{ 0xebe2679, "regulator_bulk_disable" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6c3fa34d, "usb_add_gadget_udc" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x15c5fd24, "usb_hcd_map_urb_for_dma" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x47a84576, "usb_ep_set_maxpacket_limit" },
	{ 0x4f37afc1, "usb_get_dr_mode" },
	{ 0x6bc148ea, "devm_regulator_get_optional" },
	{ 0x8eeb76a7, "devm_clk_get" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xaddc9a8a, "kmem_cache_create" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x6b248f3e, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x5b586cbc, "hrtimer_init" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0x749431db, "platform_get_irq" },
	{ 0x9f2f2b7d, "platform_driver_unregister" },
	{ 0xa7177d64, "usb_hcd_unlink_urb_from_ep" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x15424fbd, "usb_hcd_resume_root_hub" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0xce1cc28f, "devm_request_threaded_irq" },
	{ 0x366f068, "regulator_enable" },
	{ 0xad51ab3c, "dmam_alloc_coherent" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=udc-core";

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-usb");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-usbC*");
MODULE_ALIAS("of:N*T*Chisilicon,hi6220-usb");
MODULE_ALIAS("of:N*T*Chisilicon,hi6220-usbC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3066-usb");
MODULE_ALIAS("of:N*T*Crockchip,rk3066-usbC*");
MODULE_ALIAS("of:N*T*Clantiq,arx100-usb");
MODULE_ALIAS("of:N*T*Clantiq,arx100-usbC*");
MODULE_ALIAS("of:N*T*Clantiq,xrx200-usb");
MODULE_ALIAS("of:N*T*Clantiq,xrx200-usbC*");
MODULE_ALIAS("of:N*T*Csnps,dwc2");
MODULE_ALIAS("of:N*T*Csnps,dwc2C*");
MODULE_ALIAS("of:N*T*Csamsung,s3c6400-hsotg");
MODULE_ALIAS("of:N*T*Csamsung,s3c6400-hsotgC*");
MODULE_ALIAS("of:N*T*Camlogic,meson8-usb");
MODULE_ALIAS("of:N*T*Camlogic,meson8-usbC*");
MODULE_ALIAS("of:N*T*Camlogic,meson8b-usb");
MODULE_ALIAS("of:N*T*Camlogic,meson8b-usbC*");
MODULE_ALIAS("of:N*T*Camlogic,meson-gxbb-usb");
MODULE_ALIAS("of:N*T*Camlogic,meson-gxbb-usbC*");
MODULE_ALIAS("of:N*T*Camcc,dwc-otg");
MODULE_ALIAS("of:N*T*Camcc,dwc-otgC*");
MODULE_ALIAS("of:N*T*Cst,stm32f4x9-fsotg");
MODULE_ALIAS("of:N*T*Cst,stm32f4x9-fsotgC*");
MODULE_ALIAS("of:N*T*Cst,stm32f4x9-hsotg");
MODULE_ALIAS("of:N*T*Cst,stm32f4x9-hsotgC*");
MODULE_ALIAS("of:N*T*Cst,stm32f7-hsotg");
MODULE_ALIAS("of:N*T*Cst,stm32f7-hsotgC*");

MODULE_INFO(srcversion, "D2C2F48699ECFC7939CC8BF");

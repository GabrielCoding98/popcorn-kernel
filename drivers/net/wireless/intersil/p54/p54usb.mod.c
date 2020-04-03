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
	{ 0x7009370e, "usb_deregister" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0xca462843, "p54_register_common" },
	{ 0xbc034315, "usb_driver_release_interface" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xaaf6bfaf, "p54_read_eeprom" },
	{ 0xe6c12171, "complete" },
	{ 0xcd96fe76, "p54_parse_firmware" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x81fafab5, "usb_reset_device" },
	{ 0x3d4b2d8, "usb_lock_device_for_reset" },
	{ 0xb279b001, "usb_put_intf" },
	{ 0xd2bacca5, "request_firmware_nowait" },
	{ 0x659ecfbe, "usb_get_intf" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5f754e5a, "memset" },
	{ 0x5b615c06, "p54_init_common" },
	{ 0x55c68dd, "skb_pull" },
	{ 0x6ef02d63, "skb_push" },
	{ 0x4c8673f5, "__dev_kfree_skb_irq" },
	{ 0xff71b834, "skb_trim" },
	{ 0x45235491, "p54_rx" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0x82da2b54, "skb_unlink" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0xe69bfc72, "__netdev_alloc_skb" },
	{ 0xdaf574d2, "skb_queue_tail" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x122170da, "crc32_le" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x4a02305a, "usb_ifnum_to_if" },
	{ 0x788dceb2, "p54_free_skb" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0xbdd38aa9, "usb_unanchor_urb" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0xd3c2ecf6, "usb_anchor_urb" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x32d4ccec, "usb_interrupt_msg" },
	{ 0x9d669763, "memcpy" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x37a0cba, "kfree" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf3f1124e, "usb_bulk_msg" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2872e75, "p54_free_common" },
	{ 0xf41872ce, "release_firmware" },
	{ 0xb67b1f89, "p54_unregister_common" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0x409caffe, "ieee80211_restart_hw" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=p54common,mac80211";

MODULE_ALIAS("usb:v0411p0050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep00C2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0506p0A11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0675p0530d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06B9p0120d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707pEE06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp001Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap4501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap4502d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap5501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4210d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4220d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v09AAp1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BF8p1007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6826d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v107Bp55F2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v124Ap4023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0210d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15A9p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1630p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v182Dp096Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1915p2234d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1915p2235d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3701d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3703d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3762d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5041p2234d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5041p2235d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p1230d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p2000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p2002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06A9p000Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06B9p0121d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707pEE13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0803p4310d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap4521d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap4531d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApC501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApF503d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4240d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0915p2000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0915p2002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp0118d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BF8p1009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep3762d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v124Ap4025d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1260pEE22d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p000Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p000Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1413p5400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0427d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p1050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3704d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3705d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v413Cp5513d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v413Cp8102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v413Cp8104d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "CA8AC4C1319CED6CAB02E71");

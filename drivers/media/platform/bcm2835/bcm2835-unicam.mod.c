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
	{ 0xb7700415, "param_ops_int" },
	{ 0x7c3cf3c0, "v4l2_event_unsubscribe" },
	{ 0x54d8fb9f, "vb2_ioctl_streamoff" },
	{ 0xcccf7cee, "vb2_ioctl_streamon" },
	{ 0x31847ad9, "vb2_ioctl_prepare_buf" },
	{ 0x8ee639ee, "vb2_ioctl_create_bufs" },
	{ 0x1ac9903e, "vb2_ioctl_dqbuf" },
	{ 0x3f9faef8, "vb2_ioctl_expbuf" },
	{ 0x46972fa6, "vb2_ioctl_qbuf" },
	{ 0x45bb3cef, "vb2_ioctl_querybuf" },
	{ 0xecab663, "vb2_ioctl_reqbufs" },
	{ 0x621c2633, "vb2_fop_mmap" },
	{ 0x46c5b78e, "video_ioctl2" },
	{ 0xf457358b, "vb2_fop_poll" },
	{ 0x66c97ba0, "vb2_fop_read" },
	{ 0xa3219f77, "vb2_ops_wait_finish" },
	{ 0x365c104a, "vb2_ops_wait_prepare" },
	{ 0x9f2f2b7d, "platform_driver_unregister" },
	{ 0x3af31b31, "__platform_driver_register" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xcaf7b102, "__pm_runtime_resume" },
	{ 0x9c0abc0d, "v4l2_event_subscribe" },
	{ 0xead2e9ef, "v4l2_ctrl_subscribe_event" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x36d2700a, "media_create_pad_link" },
	{ 0x3a026392, "v4l2_device_register_subdev_nodes" },
	{ 0x12bae986, "__video_register_device" },
	{ 0x23da0b34, "video_device_release_empty" },
	{ 0x48837184, "vb2_queue_init" },
	{ 0x493b2738, "vb2_dma_contig_memops" },
	{ 0xb79a0c96, "v4l2_ctrl_add_handler" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x4f13abdb, "v4l2_subdev_alloc_pad_config" },
	{ 0x9b184766, "vb2_plane_cookie" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x8d81a26a, "v4l2_event_queue" },
	{ 0x454e5b22, "__pm_runtime_idle" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x3f03f588, "vb2_buffer_done" },
	{ 0x12a38747, "usleep_range" },
	{ 0xe3457203, "v4l2_fh_release" },
	{ 0xeb06bceb, "v4l2_fh_open" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xe50e9349, "_vb2_fop_release" },
	{ 0xa0e35b44, "v4l2_fh_is_singular" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xd034392d, "v4l2_match_dv_timings" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x798e7091, "v4l2_g_parm_cap" },
	{ 0x2a8d5a7b, "v4l2_s_parm_cap" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x9d669763, "memcpy" },
	{ 0xf0ede9c1, "video_devdata" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x3e28d1d7, "pm_runtime_enable" },
	{ 0xa3a5078a, "of_node_put" },
	{ 0xf06ea9ef, "v4l2_async_notifier_register" },
	{ 0x39344900, "of_graph_get_remote_endpoint" },
	{ 0xf15d1fe0, "of_graph_get_remote_port_parent" },
	{ 0xafb9984, "v4l2_fwnode_endpoint_parse" },
	{ 0x35c4b559, "of_graph_get_next_endpoint" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0xfc16ec35, "__media_device_register" },
	{ 0x7005a755, "v4l2_device_register" },
	{ 0xf8b3ee3a, "media_device_init" },
	{ 0x109e978f, "media_entity_pads_init" },
	{ 0xb81960ca, "snprintf" },
	{ 0xeea0399, "strscpy" },
	{ 0xce1cc28f, "devm_request_threaded_irq" },
	{ 0x749431db, "platform_get_irq" },
	{ 0x8eeb76a7, "devm_clk_get" },
	{ 0x111b5a08, "devm_ioremap_resource" },
	{ 0x6af01fe2, "platform_get_resource" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x36c6c2e5, "media_device_cleanup" },
	{ 0x35409474, "media_device_unregister" },
	{ 0x50d65b11, "v4l2_subdev_free_pad_config" },
	{ 0x32f05388, "video_unregister_device" },
	{ 0x913052e9, "v4l2_device_unregister" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0xedc16c22, "v4l2_async_notifier_unregister" },
	{ 0x82030b4e, "__pm_runtime_disable" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7c32d0f0, "printk" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,videobuf2-v4l2,media,videobuf2-dma-contig,videobuf2-common,v4l2-dv-timings,v4l2-common,v4l2-fwnode";

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-unicam");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-unicamC*");

MODULE_INFO(srcversion, "51570713BDDC20F27E09565");

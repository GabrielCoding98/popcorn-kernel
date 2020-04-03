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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xa738c28a, "module_layout" },
	{ 0xecab663, "vb2_ioctl_reqbufs" },
	{ 0x17ac8561, "vchiq_mmal_port_set_format" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x7c3cf3c0, "v4l2_event_unsubscribe" },
	{ 0x159b02fb, "vchiq_mmal_port_disable" },
	{ 0xf9a482f9, "msleep" },
	{ 0x23da0b34, "video_device_release_empty" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb58ea1cc, "v4l2_ctrl_log_status" },
	{ 0xb41da893, "vchiq_mmal_port_parameter_set" },
	{ 0x913052e9, "v4l2_device_unregister" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0xa3248a2b, "v4l2_ctrl_new_std" },
	{ 0xf457358b, "vb2_fop_poll" },
	{ 0xcccf7cee, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x365c104a, "vb2_ops_wait_prepare" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x12bae986, "__video_register_device" },
	{ 0x91715312, "sprintf" },
	{ 0x3af31b31, "__platform_driver_register" },
	{ 0x7005a755, "v4l2_device_register" },
	{ 0x66c97ba0, "vb2_fop_read" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xffb487d1, "v4l2_ctrl_new_std_menu" },
	{ 0x63d1d6da, "vchiq_mmal_component_finalise" },
	{ 0x5f754e5a, "memset" },
	{ 0xf4437c8, "vb2_vmalloc_memops" },
	{ 0x621c2633, "vb2_fop_mmap" },
	{ 0x46972fa6, "vb2_ioctl_qbuf" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xfb1dbfc4, "vchiq_mmal_port_connect_tunnel" },
	{ 0x32f05388, "video_unregister_device" },
	{ 0xead2e9ef, "v4l2_ctrl_subscribe_event" },
	{ 0x6ab3edc4, "vb2_plane_vaddr" },
	{ 0x3f03f588, "vb2_buffer_done" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xd13f12ac, "vchiq_mmal_component_enable" },
	{ 0x31847ad9, "vb2_ioctl_prepare_buf" },
	{ 0x8ee639ee, "vb2_ioctl_create_bufs" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x1ac9903e, "vb2_ioctl_dqbuf" },
	{ 0x73577d20, "vchiq_mmal_finalise" },
	{ 0xbdc60da4, "v4l2_ctrl_new_int_menu" },
	{ 0x31f6c473, "vchiq_mmal_component_init" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0xf932b84f, "vb2_fop_release" },
	{ 0xf0ede9c1, "video_devdata" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x60500e78, "vchiq_mmal_component_disable" },
	{ 0x954dad06, "v4l2_ctrl_auto_cluster" },
	{ 0xd0a46180, "mmal_vchi_buffer_init" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xeb06bceb, "v4l2_fh_open" },
	{ 0xddb9e226, "vchiq_mmal_port_enable" },
	{ 0x45bb3cef, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x6192e1a2, "vchiq_mmal_version" },
	{ 0x3e872658, "param_array_ops" },
	{ 0x3634beea, "vchiq_mmal_submit_buffer" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0xa3219f77, "vb2_ops_wait_finish" },
	{ 0xaca4dd80, "vchiq_mmal_init" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe6c12171, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0xd7759ecf, "mmal_vchi_buffer_cleanup" },
	{ 0x9f2f2b7d, "platform_driver_unregister" },
	{ 0x54d8fb9f, "vb2_ioctl_streamoff" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0x46c5b78e, "video_ioctl2" },
	{ 0x511708d3, "vchiq_mmal_port_parameter_get" },
	{ 0x48837184, "vb2_queue_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,bcm2835-mmal-vchiq,videodev,videobuf2-vmalloc,videobuf2-common,v4l2-common";


MODULE_INFO(srcversion, "928947F662A51FA643092D8");

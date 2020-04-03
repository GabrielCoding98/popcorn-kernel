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
	{ 0x20c67c90, "v4l2_m2m_ioctl_prepare_buf" },
	{ 0x17ac8561, "vchiq_mmal_port_set_format" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x7c3cf3c0, "v4l2_event_unsubscribe" },
	{ 0x159b02fb, "vchiq_mmal_port_disable" },
	{ 0xe2347aa4, "v4l2_m2m_ioctl_dqbuf" },
	{ 0x85cc6c9a, "v4l2_m2m_register_media_controller" },
	{ 0x23da0b34, "video_device_release_empty" },
	{ 0xcd3c6735, "v4l2_event_queue_fh" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xd15bdf0d, "v4l2_m2m_ctx_init" },
	{ 0xb41da893, "vchiq_mmal_port_parameter_set" },
	{ 0x913052e9, "v4l2_device_unregister" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0xa3248a2b, "v4l2_ctrl_new_std" },
	{ 0x365c104a, "vb2_ops_wait_prepare" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6fca5ad, "v4l2_m2m_release" },
	{ 0x12bae986, "__video_register_device" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x2d92519a, "v4l2_m2m_fop_mmap" },
	{ 0xeea0399, "strscpy" },
	{ 0x3af31b31, "__platform_driver_register" },
	{ 0x29739c12, "v4l2_m2m_ioctl_streamon" },
	{ 0x7005a755, "v4l2_device_register" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xffb487d1, "v4l2_ctrl_new_std_menu" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x2654280e, "v4l2_m2m_ioctl_create_bufs" },
	{ 0x63d1d6da, "vchiq_mmal_component_finalise" },
	{ 0x5f754e5a, "memset" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0x9c0abc0d, "v4l2_event_subscribe" },
	{ 0xe036f948, "v4l2_m2m_ioctl_streamoff" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x32f05388, "video_unregister_device" },
	{ 0x7e2e2764, "v4l2_m2m_ioctl_reqbufs" },
	{ 0xa0b430b8, "v4l2_fh_init" },
	{ 0xead2e9ef, "v4l2_ctrl_subscribe_event" },
	{ 0x6ab3edc4, "vb2_plane_vaddr" },
	{ 0x3f03f588, "vb2_buffer_done" },
	{ 0x6aafcf33, "dma_buf_put" },
	{ 0x328a05f1, "strncpy" },
	{ 0x9cb30027, "dma_buf_get" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf13ff84d, "v4l2_m2m_unregister_media_controller" },
	{ 0xd13f12ac, "vchiq_mmal_component_enable" },
	{ 0x73577d20, "vchiq_mmal_finalise" },
	{ 0x36c6c2e5, "media_device_cleanup" },
	{ 0x3786e62d, "v4l2_m2m_get_vq" },
	{ 0x31f6c473, "vchiq_mmal_component_init" },
	{ 0x2f426a63, "v4l2_ctrl_find" },
	{ 0xd9d3dc7b, "v4l2_m2m_ioctl_qbuf" },
	{ 0xc112c06d, "v4l2_m2m_fop_poll" },
	{ 0xf0ede9c1, "video_devdata" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc8fbc0bc, "v4l2_m2m_buf_queue" },
	{ 0x2c5f71e, "v4l2_ctrl_handler_setup" },
	{ 0x60500e78, "vchiq_mmal_component_disable" },
	{ 0xd2a294f6, "v4l2_m2m_ioctl_querybuf" },
	{ 0xd0a46180, "mmal_vchi_buffer_init" },
	{ 0xa18bdfca, "v4l2_m2m_ioctl_expbuf" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xddb9e226, "vchiq_mmal_port_enable" },
	{ 0xfc16ec35, "__media_device_register" },
	{ 0x493b2738, "vb2_dma_contig_memops" },
	{ 0x37a0cba, "kfree" },
	{ 0x3634beea, "vchiq_mmal_submit_buffer" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0xc449fc91, "v4l2_src_change_event_subscribe" },
	{ 0x693add9e, "v4l2_m2m_buf_remove" },
	{ 0xa3219f77, "vb2_ops_wait_finish" },
	{ 0xaca4dd80, "vchiq_mmal_init" },
	{ 0x7db6f1d9, "v4l2_fh_add" },
	{ 0x585346e5, "v4l2_m2m_ctx_release" },
	{ 0x99c7805c, "v4l2_fh_del" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xe6c12171, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0xf8b3ee3a, "media_device_init" },
	{ 0xd7759ecf, "mmal_vchi_buffer_cleanup" },
	{ 0x9f2f2b7d, "platform_driver_unregister" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0x73a7a766, "param_ops_uint" },
	{ 0x35409474, "media_device_unregister" },
	{ 0x46c5b78e, "video_ioctl2" },
	{ 0x68e2ca55, "vb2_core_expbuf_dmabuf" },
	{ 0x7d7491da, "v4l2_m2m_job_finish" },
	{ 0x511708d3, "vchiq_mmal_port_parameter_get" },
	{ 0xa0fa5a1b, "v4l2_fh_exit" },
	{ 0x48837184, "vb2_queue_init" },
	{ 0x730f2eae, "v4l2_m2m_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=v4l2-mem2mem,bcm2835-mmal-vchiq,videodev,videobuf2-v4l2,videobuf2-common,media,videobuf2-dma-contig";


MODULE_INFO(srcversion, "959A4D7CC2FA65007369CAA");

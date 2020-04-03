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
	{ 0x2d3385d3, "system_wq" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x887ec63d, "usb_ep_disable" },
	{ 0x5a9fff9e, "usb_ep_enable" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x367f38d9, "usb_ep_queue" },
	{ 0xf7f21a6e, "no_llseek" },
	{ 0x69408536, "generic_delete_inode" },
	{ 0x4bf8b484, "dput" },
	{ 0xa5e7826a, "dup_iter" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x98cc48c1, "init_user_ns" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x5824895d, "mount_single" },
	{ 0x3544bd6d, "d_add" },
	{ 0x945d354d, "usb_ep_set_halt" },
	{ 0x71d9ca3f, "usb_gadget_unregister_driver" },
	{ 0x3204e6a1, "usb_ep_alloc_request" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x50b88f41, "usb_get_gadget_udc_name" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xc3923c26, "usb_gadget_set_state" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x71f478e1, "d_delete" },
	{ 0xf843245d, "make_kgid" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5f754e5a, "memset" },
	{ 0x265529b8, "kill_litter_super" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x328a05f1, "strncpy" },
	{ 0x566a2d67, "fasync_helper" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xa2f26632, "usb_ep_clear_halt" },
	{ 0xea9d8192, "use_mm" },
	{ 0x25c777e3, "up_write" },
	{ 0x76e18a1a, "down_write" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6468ba35, "usb_ep_dequeue" },
	{ 0xebc82811, "usb_gadget_vbus_draw" },
	{ 0xafc5fb45, "simple_dir_operations" },
	{ 0x12a38747, "usleep_range" },
	{ 0x16589dfe, "make_kuid" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xa7359096, "_copy_from_iter_full" },
	{ 0xcd2b3b73, "usb_ep_free_request" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xd4940daf, "kiocb_set_cancel_fn" },
	{ 0x6304ee38, "register_filesystem" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xa6ad80a, "usb_gadget_probe_driver" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0xc29f9e61, "usb_ep_fifo_status" },
	{ 0x37a0cba, "kfree" },
	{ 0x45f3747b, "current_time" },
	{ 0x207ed668, "d_make_root" },
	{ 0xab5942cb, "kill_fasync" },
	{ 0x7f31a1c1, "simple_statfs" },
	{ 0x3d1654c9, "d_alloc_name" },
	{ 0x49970de8, "finish_wait" },
	{ 0xd211717d, "unregister_filesystem" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xe6c12171, "complete" },
	{ 0x96e47a4e, "new_inode" },
	{ 0x99bb8806, "memmove" },
	{ 0x4077078b, "unuse_mm" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x5c49ec5, "usb_ep_fifo_flush" },
	{ 0xb9576dcf, "simple_dir_inode_operations" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x73a7a766, "param_ops_uint" },
	{ 0x1520ce45, "_copy_to_iter" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=udc-core";


MODULE_INFO(srcversion, "1513D1FD05E05E24CEDDA4D");

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
	{ 0x66d1ddc4, "kernel_write" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x72a32592, "usb_gstrings_attach" },
	{ 0x3b917bbf, "complete_and_exit" },
	{ 0x64ac2467, "up_read" },
	{ 0x4c438863, "usb_free_all_descriptors" },
	{ 0x12739337, "dequeue_signal" },
	{ 0x349cba85, "strchr" },
	{ 0x887ec63d, "usb_ep_disable" },
	{ 0x5a9fff9e, "usb_ep_enable" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0x367f38d9, "usb_ep_queue" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x60822084, "usb_ep_set_wedge" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x8178afc0, "config_item_put" },
	{ 0xf8c0d5eb, "file_path" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc95269f0, "vfs_fsync" },
	{ 0x945d354d, "usb_ep_set_halt" },
	{ 0x3204e6a1, "usb_ep_alloc_request" },
	{ 0x91715312, "sprintf" },
	{ 0x4dac9ca5, "usb_function_unregister" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x880737be, "kthread_create_on_node" },
	{ 0xf1c2ed95, "down_read" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0x2220cb2e, "kernel_read" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x752d5f5b, "kstrtobool" },
	{ 0x3521c7a0, "device_register" },
	{ 0x51d050a, "usb_put_function_instance" },
	{ 0xf9019aa0, "kstrtou8" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x24868151, "freezing_slow_path" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x18d68709, "unregister_gadget_item" },
	{ 0x7c32d0f0, "printk" },
	{ 0xe8d55f0f, "usb_ep_autoconfig" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc686d185, "config_group_init_type_name" },
	{ 0xa2f26632, "usb_ep_clear_halt" },
	{ 0x25c777e3, "up_write" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x76e18a1a, "down_write" },
	{ 0x90745321, "fput" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x31b5ed77, "usb_function_register" },
	{ 0xa49c7013, "usb_composite_setup_continue" },
	{ 0x6468ba35, "usb_ep_dequeue" },
	{ 0x5a163a5, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x8191d049, "config_ep_by_speed" },
	{ 0x1c2a847c, "wake_up_process" },
	{ 0xcd2b3b73, "usb_ep_free_request" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x50a9624f, "send_sig_info" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xaf676c57, "invalidate_mapping_pages" },
	{ 0x5d7f4ae1, "usb_assign_descriptors" },
	{ 0x49970de8, "finish_wait" },
	{ 0xce548b86, "usb_interface_id" },
	{ 0x16eee64a, "device_unregister" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0x99bb8806, "memmove" },
	{ 0x184c48a6, "dev_set_name" },
	{ 0x5c49ec5, "usb_ep_fifo_flush" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x31379608, "__init_rwsem" },
	{ 0x2149a8c0, "filp_open" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,udc-core";


MODULE_INFO(srcversion, "B259BFD2A9DE50098C9E891");

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
	{ 0xdb1d4970, "fuse_file_poll" },
	{ 0x988694e4, "noop_llseek" },
	{ 0xd56ba424, "misc_deregister" },
	{ 0xdcd02f6d, "class_destroy" },
	{ 0x8a0b551, "misc_register" },
	{ 0xd8a2e825, "__class_create" },
	{ 0x9d669763, "memcpy" },
	{ 0x8a644223, "fuse_dev_operations" },
	{ 0xd1f92cd7, "fuse_put_request" },
	{ 0x35a3ff48, "fuse_dev_free" },
	{ 0x55c526a8, "fuse_request_send_background" },
	{ 0x55509270, "__alloc_pages_nodemask" },
	{ 0x15af515f, "fuse_get_req_for_background" },
	{ 0x97d6beb2, "fuse_dev_alloc" },
	{ 0x75cc4bdd, "fuse_conn_init" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0xe18b6e3d, "kobject_uevent" },
	{ 0x90d1cb32, "cdev_add" },
	{ 0x662c28b9, "cdev_alloc" },
	{ 0x8d93858d, "device_add" },
	{ 0x5a163a5, "put_device" },
	{ 0x184c48a6, "dev_set_name" },
	{ 0x1017cd77, "device_initialize" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x7c32d0f0, "printk" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x77bc13a0, "strim" },
	{ 0x85df9b6c, "strsep" },
	{ 0x97255bdf, "strlen" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xc2451da0, "mem_map" },
	{ 0x26c73e5f, "__free_pages" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x78b27e9, "fuse_direct_io" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x55517fde, "fuse_do_ioctl" },
	{ 0xf4f324a0, "fuse_do_open" },
	{ 0xafab875b, "fuse_conn_get" },
	{ 0xb4f6b1a6, "fuse_sync_release" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x37a0cba, "kfree" },
	{ 0x60cee0a8, "fuse_dev_release" },
	{ 0xf8f64438, "fuse_conn_put" },
	{ 0x7fe8a44d, "cdev_del" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x16eee64a, "device_unregister" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x91715312, "sprintf" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x285068a1, "fuse_abort_conn" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fuse";


MODULE_INFO(srcversion, "CDFD0E11EC72A34EB075E42");

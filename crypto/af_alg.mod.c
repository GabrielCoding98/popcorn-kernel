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
	{ 0xa39b3730, "release_sock" },
	{ 0x402b8281, "__request_module" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x6913facd, "sock_init_data" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0x64ac2467, "up_read" },
	{ 0xc2451da0, "mem_map" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x9a42e92f, "sock_no_getsockopt" },
	{ 0x99757dae, "sock_no_ioctl" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x3c5cbdce, "sock_no_getname" },
	{ 0xfffa3100, "sg_next" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x55509270, "__alloc_pages_nodemask" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf1c2ed95, "down_read" },
	{ 0x9f1ead19, "sock_no_sendpage" },
	{ 0x91625fc4, "sock_no_mmap" },
	{ 0x2ce02b4, "sock_no_recvmsg" },
	{ 0x5f754e5a, "memset" },
	{ 0x8ef37932, "sock_no_socketpair" },
	{ 0xb58e5d6d, "sk_alloc" },
	{ 0x6addc74a, "lock_sock_nested" },
	{ 0x6a36562c, "iov_iter_get_pages" },
	{ 0x7fb630b3, "sock_no_listen" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x88096862, "sock_wake_async" },
	{ 0xeadab5fe, "sk_free" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x25c777e3, "up_write" },
	{ 0x76e18a1a, "down_write" },
	{ 0xe0074953, "sock_kfree_s" },
	{ 0x6f67a396, "sock_no_shutdown" },
	{ 0x77c59098, "module_put" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x9b499d92, "__wake_up_sync_key" },
	{ 0x8a5e867d, "proto_register" },
	{ 0x26c73e5f, "__free_pages" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x512050d6, "sock_register" },
	{ 0xbeb1684a, "proto_unregister" },
	{ 0xa7359096, "_copy_from_iter_full" },
	{ 0xaf0c2cb0, "sock_kmalloc" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x2f2dd7e5, "sock_no_connect" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xcc739430, "sock_no_sendmsg" },
	{ 0x4f88a995, "sock_kzfree_s" },
	{ 0xfe3dfdf2, "iov_iter_advance" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x135b5680, "__put_page" },
	{ 0xca0304ef, "try_module_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8B9D271591708B06EA9FEA4");

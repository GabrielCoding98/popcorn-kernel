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
	{ 0x91625fc4, "sock_no_mmap" },
	{ 0x9a42e92f, "sock_no_getsockopt" },
	{ 0xe7afa015, "sock_no_setsockopt" },
	{ 0x6f67a396, "sock_no_shutdown" },
	{ 0x7fb630b3, "sock_no_listen" },
	{ 0x99757dae, "sock_no_ioctl" },
	{ 0x8eb1c2b8, "af_alg_poll" },
	{ 0x3c5cbdce, "sock_no_getname" },
	{ 0xcaad4aa4, "sock_no_accept" },
	{ 0x8ef37932, "sock_no_socketpair" },
	{ 0x2f2dd7e5, "sock_no_connect" },
	{ 0xb7218171, "sock_no_bind" },
	{ 0x34553d99, "af_alg_release" },
	{ 0x2f98e789, "af_alg_unregister_type" },
	{ 0xda15d66a, "af_alg_register_type" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0x9a781197, "af_alg_wmem_wakeup" },
	{ 0xd0a4612c, "af_alg_free_resources" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0x753ceecf, "af_alg_count_tsgl" },
	{ 0xc25f1324, "af_alg_get_rsgl" },
	{ 0xb4e38620, "af_alg_alloc_areq" },
	{ 0x2d9a3e06, "af_alg_wait_for_data" },
	{ 0x782112c1, "af_alg_async_cb" },
	{ 0x9019800d, "crypto_req_done" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xf31bdfbc, "crypto_alloc_skcipher" },
	{ 0x7fc61d57, "crypto_destroy_tfm" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5f754e5a, "memset" },
	{ 0xaf0c2cb0, "sock_kmalloc" },
	{ 0xe55458e2, "af_alg_release_parent" },
	{ 0xe0074953, "sock_kfree_s" },
	{ 0x4f88a995, "sock_kzfree_s" },
	{ 0xe3c495a8, "af_alg_pull_tsgl" },
	{ 0xcacc3ef6, "af_alg_sendmsg" },
	{ 0xb0c9ff76, "af_alg_sendpage" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xeadab5fe, "sk_free" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xa39b3730, "release_sock" },
	{ 0x6addc74a, "lock_sock_nested" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=af_alg";


MODULE_INFO(srcversion, "78B9998681ABA82D7A4CCE0");

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
	{ 0xf5037a81, "kmem_cache_destroy" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x736a9528, "__mark_inode_dirty" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x9507547f, "ocfs2_cluster_disconnect" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x62a14128, "simple_lookup" },
	{ 0x69408536, "generic_delete_inode" },
	{ 0xd32d6c08, "lockref_get" },
	{ 0xf7a70f1a, "inc_nlink" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x76f40744, "ocfs2_dlm_lvb" },
	{ 0x79b45d56, "igrab" },
	{ 0xbca2c628, "mount_nodev" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5f754e5a, "memset" },
	{ 0x265529b8, "kill_litter_super" },
	{ 0x7905d834, "default_llseek" },
	{ 0x7c32d0f0, "printk" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x9f1691c2, "kmem_cache_free" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xa7d17c3b, "setattr_copy" },
	{ 0xc5196999, "ocfs2_dlm_unlock" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1475f64b, "ocfs2_dlm_lvb_valid" },
	{ 0xaf969565, "ocfs2_dlm_lock" },
	{ 0x29726fd3, "inode_init_once" },
	{ 0xe138723a, "simple_getattr" },
	{ 0x667b7de, "__mlog_printk" },
	{ 0xaae6676e, "kmem_cache_alloc" },
	{ 0xd344e4ee, "ocfs2_stack_glue_set_max_proto_version" },
	{ 0xb33d54cf, "simple_unlink" },
	{ 0xafc5fb45, "simple_dir_operations" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xaddc9a8a, "kmem_cache_create" },
	{ 0x6304ee38, "register_filesystem" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0xc54c0b9c, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x643e0ce5, "call_rcu_sched" },
	{ 0x45f3747b, "current_time" },
	{ 0xcafdd707, "ocfs2_dlm_lock_status" },
	{ 0x207ed668, "d_make_root" },
	{ 0x7f31a1c1, "simple_statfs" },
	{ 0x49970de8, "finish_wait" },
	{ 0xd211717d, "unregister_filesystem" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xcfd3fc5, "ocfs2_cluster_connect_agnostic" },
	{ 0x96e47a4e, "new_inode" },
	{ 0x4a33a82c, "clear_inode" },
	{ 0x249871f7, "d_instantiate" },
	{ 0xcea3514c, "simple_rmdir" },
	{ 0xe7197403, "setattr_prepare" },
	{ 0x6a39009d, "inode_init_owner" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ocfs2_stackglue,ocfs2_nodemanager";


MODULE_INFO(srcversion, "DADC9A082FBCC4DAA9C5312");

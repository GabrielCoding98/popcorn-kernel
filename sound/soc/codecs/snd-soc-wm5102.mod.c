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
	{ 0x840bd4d, "arizona_request_irq" },
	{ 0x508761b7, "wm_adsp2_event" },
	{ 0x6ee10e83, "arizona_lhpf4_mode" },
	{ 0x34da4538, "arizona_set_fll" },
	{ 0x454e5b22, "__pm_runtime_idle" },
	{ 0x6ac73630, "arizona_free_spk_irqs" },
	{ 0x912b99e0, "arizona_lhpf_coeff_put" },
	{ 0x11cc6634, "arizona_init_vol_limit" },
	{ 0x82030b4e, "__pm_runtime_disable" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2e83e9ec, "snd_soc_dapm_get_enum_double" },
	{ 0x9aedd683, "arizona_init_dai" },
	{ 0x2efd7cc0, "regmap_update_bits_base" },
	{ 0xc3037efe, "arizona_in_ev" },
	{ 0xef9336a1, "snd_soc_component_disable_pin" },
	{ 0x6dd21ba0, "dapm_regulator_event" },
	{ 0x3cd92124, "arizona_lhpf1_mode" },
	{ 0x729a5ef3, "arizona_mixer_values" },
	{ 0x1b86bb1d, "wm_adsp_compr_set_params" },
	{ 0xa57617f7, "regmap_write_async" },
	{ 0x2c0e8ed1, "arizona_dvfs_down" },
	{ 0xc8d2bacf, "wm_adsp_compr_trigger" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x758de09c, "wm_adsp_fw_get" },
	{ 0xc235d3d8, "snd_soc_put_volsw" },
	{ 0xe4bf54f1, "regmap_read" },
	{ 0x84e5644, "arizona_init_dvfs" },
	{ 0x3503cebf, "snd_soc_get_volsw" },
	{ 0xd7904909, "wm_adsp2_init" },
	{ 0x3af31b31, "__platform_driver_register" },
	{ 0xd823e694, "wm_adsp2_component_remove" },
	{ 0xbedf82a5, "snd_soc_info_enum_double" },
	{ 0xe0b21148, "wm_adsp2_preloader_get" },
	{ 0xc755fa57, "wm_adsp_compr_free" },
	{ 0x6a38917, "arizona_dvfs_up" },
	{ 0x3ef1412, "wm_adsp2_preloader_put" },
	{ 0xc38faeac, "snd_soc_put_volsw_range" },
	{ 0x5632ea59, "wm_adsp2_component_probe" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x5a6d73f6, "wm_adsp_compr_open" },
	{ 0x16eee2a3, "wm_adsp_fw_enum" },
	{ 0xc9c29637, "arizona_mixer_tlv" },
	{ 0xaf9ae988, "arizona_out_ev" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x4eec44e, "arizona_adsp2_rate_controls" },
	{ 0x72f5f7f9, "arizona_clk_ev" },
	{ 0xbc41ccc7, "snd_soc_add_component_controls" },
	{ 0x13fc87dd, "snd_soc_info_volsw_range" },
	{ 0x32a36641, "snd_soc_bytes_info" },
	{ 0x9a4a0b, "arizona_init_spk" },
	{ 0x2abc4fcf, "arizona_hp_ev" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2bc50055, "snd_soc_get_volsw_range" },
	{ 0x3471215b, "wm_adsp_compr_copy" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x7aee29c2, "arizona_simple_dai_ops" },
	{ 0x90466479, "wm_adsp_compr_get_caps" },
	{ 0xacd1f01b, "arizona_free_irq" },
	{ 0x27673299, "snd_soc_info_volsw" },
	{ 0x382cef5f, "arizona_set_irq_wake" },
	{ 0xfa070125, "snd_soc_rtdcom_lookup" },
	{ 0xab46300d, "arizona_lhpf3_mode" },
	{ 0xf6892dad, "arizona_out_vi_ramp" },
	{ 0x1412a22d, "arizona_isrc_fsl" },
	{ 0x21b60471, "snd_soc_component_init_regmap" },
	{ 0x4b528c53, "arizona_in_vi_ramp" },
	{ 0x75b6da5e, "snd_soc_get_enum_double" },
	{ 0xc2ea450d, "arizona_dai_ops" },
	{ 0x7f26f273, "arizona_mixer_texts" },
	{ 0x3a1304b9, "arizona_init_fll" },
	{ 0x3e28d1d7, "pm_runtime_enable" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6c38282e, "devm_snd_soc_register_component" },
	{ 0x97c0685b, "arizona_of_get_audio_pdata" },
	{ 0x33a5b82c, "arizona_set_fll_refclk" },
	{ 0x35fb0ffa, "arizona_init_gpio" },
	{ 0xdd2acc57, "arizona_dvfs_sysclk_ev" },
	{ 0x975e4c6d, "arizona_out_vd_ramp" },
	{ 0x2a85ed93, "arizona_in_vd_ramp" },
	{ 0x9dfc74a7, "snd_soc_put_enum_double" },
	{ 0xb86ac3a7, "arizona_eq_coeff_put" },
	{ 0x7e33e62c, "wm_adsp2_remove" },
	{ 0x1b286489, "snd_soc_bytes_get" },
	{ 0x615348fe, "arizona_set_sysclk" },
	{ 0xed6b4359, "wm_adsp2_early_event" },
	{ 0xdc49063b, "arizona_ng_hold" },
	{ 0x8d674f9e, "snd_soc_new_compress" },
	{ 0xf87561d3, "snd_soc_bytes_put" },
	{ 0x7e96b650, "wm_adsp_compr_handle_irq" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9f2f2b7d, "platform_driver_unregister" },
	{ 0xdc2db0b5, "snd_soc_bytes_info_ext" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0xde14e472, "arizona_init_spk_irqs" },
	{ 0x9f2aee49, "arizona_init_common" },
	{ 0x3145dec7, "wm_adsp_compr_pointer" },
	{ 0x96d0e5c6, "wm_adsp_fw_put" },
	{ 0x9548c287, "snd_soc_dapm_put_enum_double" },
	{ 0xd313bb9, "arizona_lhpf2_mode" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-wm-adsp,snd-soc-arizona,snd-soc-core";


MODULE_INFO(srcversion, "F94722CB9271D562A93570E");

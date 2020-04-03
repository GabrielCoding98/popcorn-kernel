	.arch armv7-a
	.eabi_attribute 20, 1	@ Tag_ABI_FP_denormal
	.eabi_attribute 21, 1	@ Tag_ABI_FP_exceptions
	.eabi_attribute 23, 3	@ Tag_ABI_FP_number_model
	.eabi_attribute 24, 1	@ Tag_ABI_align8_needed
	.eabi_attribute 25, 1	@ Tag_ABI_align8_preserved
	.eabi_attribute 26, 2	@ Tag_ABI_enum_size
	.eabi_attribute 30, 2	@ Tag_ABI_optimization_goals
	.eabi_attribute 34, 1	@ Tag_CPU_unaligned_access
	.eabi_attribute 18, 2	@ Tag_ABI_PCS_wchar_t
	.file	"asm-offsets.c"
@ GNU C89 (Ubuntu/Linaro 7.5.0-3ubuntu1~18.04) version 7.5.0 (arm-linux-gnueabihf)
@	compiled by GNU C version 7.5.0, GMP version 6.1.2, MPFR version 4.0.1, MPC version 1.1.0, isl version isl-0.19-GMP

@ GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
@ options passed:  -nostdinc -I ./arch/arm/include
@ -I ./arch/arm/include/generated -I ./include -I ./arch/arm/include/uapi
@ -I ./arch/arm/include/generated/uapi -I ./include/uapi
@ -I ./include/generated/uapi -imultilib sf -imultiarch arm-linux-gnueabi
@ -D __KERNEL__ -D __LINUX_ARM_ARCH__=7 -U arm
@ -D KBUILD_BASENAME="asm_offsets" -D KBUILD_MODNAME="asm_offsets"
@ -isystem /usr/lib/gcc-cross/arm-linux-gnueabihf/7/include
@ -include ./include/linux/kconfig.h
@ -include ./include/linux/compiler_types.h
@ -MD arch/arm/kernel/.asm-offsets.s.d arch/arm/kernel/asm-offsets.c
@ -mlittle-endian -mapcs -mno-sched-prolog -mabi=aapcs-linux -mfpu=vfp
@ -marm -march=armv7-a -mfloat-abi=soft -mtls-dialect=gnu
@ -auxbase-strip arch/arm/kernel/asm-offsets.s -O2 -Wall -Wundef
@ -Wstrict-prototypes -Wno-trigraphs -Werror=implicit-function-declaration
@ -Wno-format-security -Wno-frame-address -Wformat-truncation=0
@ -Wformat-overflow=0 -Wno-int-in-bool-context -Wframe-larger-than=1024
@ -Wno-unused-but-set-variable -Wunused-const-variable=0
@ -Wdeclaration-after-statement -Wno-pointer-sign -Werror=implicit-int
@ -Werror=strict-prototypes -Werror=date-time
@ -Werror=incompatible-pointer-types -Werror=designated-init -std=gnu90 -p
@ -fno-strict-aliasing -fno-common -fshort-wchar -fno-PIE
@ -fno-dwarf2-cfi-asm -fno-ipa-sra -funwind-tables
@ -fno-delete-null-pointer-checks -fstack-protector-strong
@ -fno-omit-frame-pointer -fno-optimize-sibling-calls
@ -fno-var-tracking-assignments -fno-strict-overflow
@ -fno-merge-all-constants -fmerge-constants -fstack-check=no
@ -fconserve-stack -fverbose-asm --param allow-store-data-races=0
@ -fstack-protector-strong
@ options enabled:  -faggressive-loop-optimizations -falign-jumps
@ -falign-labels -falign-loops -fauto-inc-dec -fbranch-count-reg
@ -fcaller-saves -fchkp-check-incomplete-type -fchkp-check-read
@ -fchkp-check-write -fchkp-instrument-calls -fchkp-narrow-bounds
@ -fchkp-optimize -fchkp-store-bounds -fchkp-use-static-bounds
@ -fchkp-use-static-const-bounds -fchkp-use-wrappers -fcode-hoisting
@ -fcombine-stack-adjustments -fcompare-elim -fcprop-registers
@ -fcrossjumping -fcse-follow-jumps -fdefer-pop -fdevirtualize
@ -fdevirtualize-speculatively -fearly-inlining
@ -feliminate-unused-debug-types -fexpensive-optimizations
@ -fforward-propagate -ffp-int-builtin-inexact -ffunction-cse -fgcse
@ -fgcse-lm -fgnu-runtime -fgnu-unique -fguess-branch-probability
@ -fhoist-adjacent-loads -fident -fif-conversion -fif-conversion2
@ -findirect-inlining -finline -finline-atomics
@ -finline-functions-called-once -finline-small-functions -fipa-bit-cp
@ -fipa-cp -fipa-icf -fipa-icf-functions -fipa-icf-variables -fipa-profile
@ -fipa-pure-const -fipa-reference -fipa-vrp -fira-hoist-pressure
@ -fira-share-save-slots -fira-share-spill-slots
@ -fisolate-erroneous-paths-dereference -fivopts -fkeep-static-consts
@ -fleading-underscore -flifetime-dse -flra-remat -flto-odr-type-merging
@ -fmath-errno -fmerge-constants -fmerge-debug-strings
@ -fmove-loop-invariants -foptimize-strlen -fpartial-inlining -fpeephole
@ -fpeephole2 -fplt -fprefetch-loop-arrays -fprofile -freg-struct-return
@ -freorder-blocks -freorder-functions -frerun-cse-after-loop
@ -fsched-critical-path-heuristic -fsched-dep-count-heuristic
@ -fsched-group-heuristic -fsched-interblock -fsched-last-insn-heuristic
@ -fsched-pressure -fsched-rank-heuristic -fsched-spec
@ -fsched-spec-insn-heuristic -fsched-stalled-insns-dep -fschedule-insns
@ -fschedule-insns2 -fsection-anchors -fsemantic-interposition
@ -fshow-column -fshrink-wrap-separate -fsigned-zeros
@ -fsplit-ivs-in-unroller -fsplit-wide-types -fssa-backprop -fssa-phiopt
@ -fstack-protector-strong -fstdarg-opt -fstore-merging
@ -fstrict-volatile-bitfields -fsync-libcalls -fthread-jumps
@ -ftoplevel-reorder -ftrapping-math -ftree-bit-ccp -ftree-builtin-call-dce
@ -ftree-ccp -ftree-ch -ftree-coalesce-vars -ftree-copy-prop -ftree-cselim
@ -ftree-dce -ftree-dominator-opts -ftree-dse -ftree-forwprop -ftree-fre
@ -ftree-loop-if-convert -ftree-loop-im -ftree-loop-ivcanon
@ -ftree-loop-optimize -ftree-parallelize-loops= -ftree-phiprop -ftree-pre
@ -ftree-pta -ftree-reassoc -ftree-scev-cprop -ftree-sink -ftree-slsr
@ -ftree-sra -ftree-switch-conversion -ftree-tail-merge -ftree-ter
@ -ftree-vrp -funit-at-a-time -funwind-tables -fverbose-asm
@ -fzero-initialized-in-bss -mapcs-frame -marm -mglibc -mlittle-endian
@ -mpic-data-is-text-relative -munaligned-access -mvectorize-with-neon-quad

	.text
	.syntax divided
	.syntax unified
	.arm
	.syntax unified
	.section	.text.startup,"ax",%progbits
	.align	2
	.global	main
	.syntax unified
	.arm
	.fpu softvfp
	.type	main, %function
main:
	.fnstart
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 1, uses_anonymous_args = 0
	.movsp ip
	mov	ip, sp	@,
	push	{fp, ip, lr, pc}	@
	.pad #4
	.save {fp, ip, lr}
	.setfp fp, ip, #-4
	sub	fp, ip, #4	@,,
	push	{lr}
	bl	__gnu_mcount_nc
@ arch/arm/kernel/asm-offsets.c:51: {
@ arch/arm/kernel/asm-offsets.c:52:   DEFINE(TSK_ACTIVE_MM,		offsetof(struct task_struct, active_mm));
	.syntax divided
@ 52 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->TSK_ACTIVE_MM #844 offsetof(struct task_struct, active_mm)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:54:   DEFINE(TSK_STACK_CANARY,	offsetof(struct task_struct, stack_canary));
@ 54 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->TSK_STACK_CANARY #976 offsetof(struct task_struct, stack_canary)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:56:   BLANK();
@ 56 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:57:   DEFINE(TI_FLAGS,		offsetof(struct thread_info, flags));
@ 57 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->TI_FLAGS #0 offsetof(struct thread_info, flags)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:58:   DEFINE(TI_PREEMPT,		offsetof(struct thread_info, preempt_count));
@ 58 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->TI_PREEMPT #4 offsetof(struct thread_info, preempt_count)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:59:   DEFINE(TI_ADDR_LIMIT,		offsetof(struct thread_info, addr_limit));
@ 59 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->TI_ADDR_LIMIT #8 offsetof(struct thread_info, addr_limit)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:60:   DEFINE(TI_TASK,		offsetof(struct thread_info, task));
@ 60 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->TI_TASK #12 offsetof(struct thread_info, task)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:61:   DEFINE(TI_CPU,		offsetof(struct thread_info, cpu));
@ 61 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->TI_CPU #16 offsetof(struct thread_info, cpu)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:62:   DEFINE(TI_CPU_DOMAIN,		offsetof(struct thread_info, cpu_domain));
@ 62 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->TI_CPU_DOMAIN #20 offsetof(struct thread_info, cpu_domain)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:63:   DEFINE(TI_CPU_SAVE,		offsetof(struct thread_info, cpu_context));
@ 63 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->TI_CPU_SAVE #24 offsetof(struct thread_info, cpu_context)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:64:   DEFINE(TI_USED_CP,		offsetof(struct thread_info, used_cp));
@ 64 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->TI_USED_CP #76 offsetof(struct thread_info, used_cp)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:65:   DEFINE(TI_TP_VALUE,		offsetof(struct thread_info, tp_value));
@ 65 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->TI_TP_VALUE #92 offsetof(struct thread_info, tp_value)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:66:   DEFINE(TI_FPSTATE,		offsetof(struct thread_info, fpstate));
@ 66 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->TI_FPSTATE #104 offsetof(struct thread_info, fpstate)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:68:   DEFINE(TI_VFPSTATE,		offsetof(struct thread_info, vfpstate));
@ 68 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->TI_VFPSTATE #248 offsetof(struct thread_info, vfpstate)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:70:   DEFINE(VFP_CPU,		offsetof(union vfp_state, hard.cpu));
@ 70 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->VFP_CPU #272 offsetof(union vfp_state, hard.cpu)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:82:   BLANK();
@ 82 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:83:   DEFINE(S_R0,			offsetof(struct pt_regs, ARM_r0));
@ 83 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_R0 #0 offsetof(struct pt_regs, ARM_r0)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:84:   DEFINE(S_R1,			offsetof(struct pt_regs, ARM_r1));
@ 84 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_R1 #4 offsetof(struct pt_regs, ARM_r1)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:85:   DEFINE(S_R2,			offsetof(struct pt_regs, ARM_r2));
@ 85 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_R2 #8 offsetof(struct pt_regs, ARM_r2)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:86:   DEFINE(S_R3,			offsetof(struct pt_regs, ARM_r3));
@ 86 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_R3 #12 offsetof(struct pt_regs, ARM_r3)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:87:   DEFINE(S_R4,			offsetof(struct pt_regs, ARM_r4));
@ 87 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_R4 #16 offsetof(struct pt_regs, ARM_r4)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:88:   DEFINE(S_R5,			offsetof(struct pt_regs, ARM_r5));
@ 88 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_R5 #20 offsetof(struct pt_regs, ARM_r5)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:89:   DEFINE(S_R6,			offsetof(struct pt_regs, ARM_r6));
@ 89 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_R6 #24 offsetof(struct pt_regs, ARM_r6)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:90:   DEFINE(S_R7,			offsetof(struct pt_regs, ARM_r7));
@ 90 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_R7 #28 offsetof(struct pt_regs, ARM_r7)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:91:   DEFINE(S_R8,			offsetof(struct pt_regs, ARM_r8));
@ 91 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_R8 #32 offsetof(struct pt_regs, ARM_r8)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:92:   DEFINE(S_R9,			offsetof(struct pt_regs, ARM_r9));
@ 92 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_R9 #36 offsetof(struct pt_regs, ARM_r9)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:93:   DEFINE(S_R10,			offsetof(struct pt_regs, ARM_r10));
@ 93 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_R10 #40 offsetof(struct pt_regs, ARM_r10)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:94:   DEFINE(S_FP,			offsetof(struct pt_regs, ARM_fp));
@ 94 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_FP #44 offsetof(struct pt_regs, ARM_fp)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:95:   DEFINE(S_IP,			offsetof(struct pt_regs, ARM_ip));
@ 95 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_IP #48 offsetof(struct pt_regs, ARM_ip)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:96:   DEFINE(S_SP,			offsetof(struct pt_regs, ARM_sp));
@ 96 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_SP #52 offsetof(struct pt_regs, ARM_sp)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:97:   DEFINE(S_LR,			offsetof(struct pt_regs, ARM_lr));
@ 97 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_LR #56 offsetof(struct pt_regs, ARM_lr)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:98:   DEFINE(S_PC,			offsetof(struct pt_regs, ARM_pc));
@ 98 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_PC #60 offsetof(struct pt_regs, ARM_pc)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:99:   DEFINE(S_PSR,			offsetof(struct pt_regs, ARM_cpsr));
@ 99 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_PSR #64 offsetof(struct pt_regs, ARM_cpsr)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:100:   DEFINE(S_OLD_R0,		offsetof(struct pt_regs, ARM_ORIG_r0));
@ 100 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_OLD_R0 #68 offsetof(struct pt_regs, ARM_ORIG_r0)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:101:   DEFINE(PT_REGS_SIZE,		sizeof(struct pt_regs));
@ 101 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->PT_REGS_SIZE #72 sizeof(struct pt_regs)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:102:   DEFINE(SVC_DACR,		offsetof(struct svc_pt_regs, dacr));
@ 102 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->SVC_DACR #72 offsetof(struct svc_pt_regs, dacr)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:103:   DEFINE(SVC_ADDR_LIMIT,	offsetof(struct svc_pt_regs, addr_limit));
@ 103 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->SVC_ADDR_LIMIT #76 offsetof(struct svc_pt_regs, addr_limit)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:104:   DEFINE(SVC_REGS_SIZE,		sizeof(struct svc_pt_regs));
@ 104 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->SVC_REGS_SIZE #80 sizeof(struct svc_pt_regs)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:105:   BLANK();
@ 105 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:106:   DEFINE(SIGFRAME_RC3_OFFSET,	offsetof(struct sigframe, retcode[3]));
@ 106 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->SIGFRAME_RC3_OFFSET #756 offsetof(struct sigframe, retcode[3])"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:107:   DEFINE(RT_SIGFRAME_RC3_OFFSET, offsetof(struct rt_sigframe, sig.retcode[3]));
@ 107 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->RT_SIGFRAME_RC3_OFFSET #884 offsetof(struct rt_sigframe, sig.retcode[3])"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:108:   BLANK();
@ 108 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:121:   DEFINE(MM_CONTEXT_ID,		offsetof(struct mm_struct, context.id.counter));
@ 121 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->MM_CONTEXT_ID #368 offsetof(struct mm_struct, context.id.counter)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:122:   BLANK();
@ 122 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:124:   DEFINE(VMA_VM_MM,		offsetof(struct vm_area_struct, vm_mm));
@ 124 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->VMA_VM_MM #32 offsetof(struct vm_area_struct, vm_mm)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:125:   DEFINE(VMA_VM_FLAGS,		offsetof(struct vm_area_struct, vm_flags));
@ 125 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->VMA_VM_FLAGS #40 offsetof(struct vm_area_struct, vm_flags)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:126:   BLANK();
@ 126 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:127:   DEFINE(VM_EXEC,	       	VM_EXEC);
@ 127 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->VM_EXEC #4 VM_EXEC"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:128:   BLANK();
@ 128 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:129:   DEFINE(PAGE_SZ,	       	PAGE_SIZE);
@ 129 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->PAGE_SZ #4096 PAGE_SIZE"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:130:   BLANK();
@ 130 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:131:   DEFINE(SYS_ERROR0,		0x9f0000);
@ 131 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->SYS_ERROR0 #10420224 0x9f0000"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:132:   BLANK();
@ 132 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:133:   DEFINE(SIZEOF_MACHINE_DESC,	sizeof(struct machine_desc));
@ 133 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->SIZEOF_MACHINE_DESC #104 sizeof(struct machine_desc)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:134:   DEFINE(MACHINFO_TYPE,		offsetof(struct machine_desc, nr));
@ 134 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->MACHINFO_TYPE #0 offsetof(struct machine_desc, nr)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:135:   DEFINE(MACHINFO_NAME,		offsetof(struct machine_desc, name));
@ 135 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->MACHINFO_NAME #4 offsetof(struct machine_desc, name)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:136:   BLANK();
@ 136 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:137:   DEFINE(PROC_INFO_SZ,		sizeof(struct proc_info_list));
@ 137 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->PROC_INFO_SZ #52 sizeof(struct proc_info_list)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:138:   DEFINE(PROCINFO_INITFUNC,	offsetof(struct proc_info_list, __cpu_flush));
@ 138 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->PROCINFO_INITFUNC #16 offsetof(struct proc_info_list, __cpu_flush)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:139:   DEFINE(PROCINFO_MM_MMUFLAGS,	offsetof(struct proc_info_list, __cpu_mm_mmu_flags));
@ 139 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->PROCINFO_MM_MMUFLAGS #8 offsetof(struct proc_info_list, __cpu_mm_mmu_flags)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:140:   DEFINE(PROCINFO_IO_MMUFLAGS,	offsetof(struct proc_info_list, __cpu_io_mmu_flags));
@ 140 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->PROCINFO_IO_MMUFLAGS #12 offsetof(struct proc_info_list, __cpu_io_mmu_flags)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:141:   BLANK();
@ 141 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:149:   DEFINE(CPU_SLEEP_SIZE,	offsetof(struct processor, suspend_size));
@ 149 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->CPU_SLEEP_SIZE #40 offsetof(struct processor, suspend_size)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:150:   DEFINE(CPU_DO_SUSPEND,	offsetof(struct processor, do_suspend));
@ 150 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->CPU_DO_SUSPEND #44 offsetof(struct processor, do_suspend)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:151:   DEFINE(CPU_DO_RESUME,		offsetof(struct processor, do_resume));
@ 151 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->CPU_DO_RESUME #48 offsetof(struct processor, do_resume)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:161:   BLANK();
@ 161 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:162:   DEFINE(DMA_BIDIRECTIONAL,	DMA_BIDIRECTIONAL);
@ 162 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->DMA_BIDIRECTIONAL #0 DMA_BIDIRECTIONAL"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:163:   DEFINE(DMA_TO_DEVICE,		DMA_TO_DEVICE);
@ 163 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->DMA_TO_DEVICE #1 DMA_TO_DEVICE"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:164:   DEFINE(DMA_FROM_DEVICE,	DMA_FROM_DEVICE);
@ 164 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->DMA_FROM_DEVICE #2 DMA_FROM_DEVICE"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:165:   BLANK();
@ 165 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:166:   DEFINE(CACHE_WRITEBACK_ORDER, __CACHE_WRITEBACK_ORDER);
@ 166 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->CACHE_WRITEBACK_ORDER #6 __CACHE_WRITEBACK_ORDER"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:167:   DEFINE(CACHE_WRITEBACK_GRANULE, __CACHE_WRITEBACK_GRANULE);
@ 167 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->CACHE_WRITEBACK_GRANULE #64 __CACHE_WRITEBACK_GRANULE"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:168:   BLANK();
@ 168 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:176:   BLANK();
@ 176 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:178:   DEFINE(VDSO_DATA_SIZE,	sizeof(union vdso_data_store));
@ 178 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->VDSO_DATA_SIZE #4096 sizeof(union vdso_data_store)"	@
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:180:   BLANK();
@ 180 "arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ arch/arm/kernel/asm-offsets.c:193: }
	.arm
	.syntax unified
	mov	r0, #0	@,
	ldmfd	sp, {fp, sp, pc}	@
	.fnend
	.size	main, .-main
	.ident	"GCC: (Ubuntu/Linaro 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",%progbits

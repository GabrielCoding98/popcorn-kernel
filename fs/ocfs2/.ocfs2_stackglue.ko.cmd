cmd_fs/ocfs2/ocfs2_stackglue.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o fs/ocfs2/ocfs2_stackglue.ko fs/ocfs2/ocfs2_stackglue.o fs/ocfs2/ocfs2_stackglue.mod.o ;  true

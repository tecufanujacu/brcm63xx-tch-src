SUBTARGET:=VANTF
BOARDNAME:=VANT-F

BRCM_CHIP:=63268
ARCH:=mips
CPU_TYPE:=mips32

define Target/Description
	Broadcom 63x68 (VANT-F)
endef

TARGET_FAMILY_MEMBERS:=VANT-F:S7 VANT-D:S5 VANT-E:S6 VANT-R:SI VANT-4:SU VBNT-$

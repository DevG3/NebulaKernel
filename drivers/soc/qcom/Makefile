# When adding new entries keep the list in alphabetical order
CFLAGS_scm.o :=$(call as-instr,.arch_extension sec,-DREQUIRES_SEC=1)

obj-y 					+= hotplug/
obj-$(CONFIG_MSM_LIMITER) 		+= msm_limiter.o
obj-$(CONFIG_STATE_NOTIFIER)		+= state_notifier.o


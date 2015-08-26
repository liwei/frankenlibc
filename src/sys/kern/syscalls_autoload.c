/* $NetBSD: syscalls_autoload.c,v 1.6 2015/08/24 16:07:10 pooka Exp $ */

/*
 * System call autoload table.
 *
 * DO NOT EDIT-- this file is automatically generated.
 * created from	NetBSD: syscalls.master,v 1.278 2015/06/18 15:16:12 pooka Exp
 */

#include <sys/cdefs.h>
__KERNEL_RCSID(0, "$NetBSD: syscalls_autoload.c,v 1.6 2015/08/24 16:07:10 pooka Exp $");

static struct {
	u_int		al_code;
	const char	*al_module;
} const syscalls_autoload[] = {
	    { SYS_compat_50_wait4, "compat" },
	    { SYS_compat_43_ocreat, "compat" },
	    { SYS_compat_50_mknod, "compat" },
	    { SYS_compat_20_getfsstat, "compat" },
	    { SYS_compat_43_olseek, "compat" },
	    { SYS_compat_40_mount, "compat" },
	    { SYS_compat_43_stat43, "compat" },
	    { SYS_compat_43_lstat43, "compat" },
	    { SYS_compat_13_sigaction13, "compat" },
	    { SYS_compat_13_sigprocmask13, "compat" },
	    { SYS_compat_13_sigpending13, "compat" },
	    { SYS_compat_13_sigaltstack13, "compat" },
	    { SYS_compat_12_oreboot, "compat" },
	    { SYS_compat_43_fstat43, "compat" },
	    { SYS_compat_43_ogetkerninfo, "compat" },
	    { SYS_compat_43_ogetpagesize, "compat" },
	    { SYS_compat_12_msync, "compat" },
	    { SYS_compat_43_ommap, "compat" },
	    { SYS_compat_50_setitimer, "compat" },
	    { SYS_compat_43_owait, "compat" },
	    { SYS_compat_12_oswapon, "compat" },
	    { SYS_compat_50_getitimer, "compat" },
	    { SYS_compat_43_ogethostname, "compat" },
	    { SYS_compat_43_osethostname, "compat" },
	    { SYS_compat_43_ogetdtablesize, "compat" },
	    { SYS_compat_50_select, "compat" },
	    { SYS_compat_30_socket, "compat" },
	    { SYS_compat_43_oaccept, "compat" },
	    { SYS_compat_43_osend, "compat" },
	    { SYS_compat_43_orecv, "compat" },
	    { SYS_compat_13_sigreturn13, "compat" },
	    { SYS_compat_43_osigvec, "compat" },
	    { SYS_compat_43_osigblock, "compat" },
	    { SYS_compat_43_osigsetmask, "compat" },
	    { SYS_compat_13_sigsuspend13, "compat" },
	    { SYS_compat_43_osigstack, "compat" },
	    { SYS_compat_43_orecvmsg, "compat" },
	    { SYS_compat_43_osendmsg, "compat" },
	    { SYS_compat_50_gettimeofday, "compat" },
	    { SYS_compat_50_getrusage, "compat" },
	    { SYS_compat_50_settimeofday, "compat" },
	    { SYS_compat_43_orecvfrom, "compat" },
	    { SYS_compat_43_otruncate, "compat" },
	    { SYS_compat_43_oftruncate, "compat" },
	    { SYS_compat_50_utimes, "compat" },
	    { SYS_compat_50_adjtime, "compat" },
	    { SYS_compat_43_ogetpeername, "compat" },
	    { SYS_compat_43_ogethostid, "compat" },
	    { SYS_compat_43_osethostid, "compat" },
	    { SYS_compat_43_ogetrlimit, "compat" },
	    { SYS_compat_43_osetrlimit, "compat" },
	    { SYS_compat_43_okillpg, "compat" },
	    { SYS_compat_50_quotactl, "XXX" },
	    { SYS_compat_43_oquota, "compat" },
	    { SYS_compat_43_ogetsockname, "compat" },
	    { SYS_nfssvc, "nfsserver" },
	    { SYS_compat_43_ogetdirentries, "compat" },
	    { SYS_compat_20_statfs, "compat" },
	    { SYS_compat_20_fstatfs, "compat" },
	    { SYS_compat_30_getfh, "compat" },
	    { SYS_compat_09_ogetdomainname, "compat" },
	    { SYS_compat_09_osetdomainname, "compat" },
	    { SYS_compat_09_ouname, "compat" },
#if !defined(_LP64)
	    { SYS_compat_10_osemsys, "compat_sysv" },
#else
#endif
#if !defined(_LP64)
	    { SYS_compat_10_omsgsys, "compat_sysv" },
#else
#endif
#if !defined(_LP64)
	    { SYS_compat_10_oshmsys, "compat_sysv" },
#else
#endif
	    { SYS_lfs_bmapv, "lfs" },
	    { SYS_lfs_markv, "lfs" },
	    { SYS_lfs_segclean, "lfs" },
	    { SYS_compat_50_lfs_segwait, "compat" },
	    { SYS_compat_12_stat12, "compat" },
	    { SYS_compat_12_fstat12, "compat" },
	    { SYS_compat_12_lstat12, "compat" },
	    { SYS_compat_12_getdirentries, "compat" },
	    { SYS_compat_50_futimes, "compat" },
	    { SYS_afssys, "openafs" },
	    { SYS_compat_14___semctl, "compat_sysv" },
	    { SYS_semget, "sysv_ipc" },
	    { SYS_semop, "sysv_ipc" },
	    { SYS_semconfig, "sysv_ipc" },
	    { SYS_compat_14_msgctl, "compat_sysv" },
	    { SYS_msgget, "sysv_ipc" },
	    { SYS_msgsnd, "sysv_ipc" },
	    { SYS_msgrcv, "sysv_ipc" },
	    { SYS_shmat, "sysv_ipc" },
	    { SYS_compat_14_shmctl, "compat_sysv" },
	    { SYS_shmdt, "sysv_ipc" },
	    { SYS_shmget, "sysv_ipc" },
	    { SYS_compat_50_clock_gettime, "compat" },
	    { SYS_compat_50_clock_settime, "compat" },
	    { SYS_compat_50_clock_getres, "compat" },
	    { SYS_compat_50_timer_settime, "compat" },
	    { SYS_compat_50_timer_gettime, "compat" },
	    { SYS_compat_50_nanosleep, "compat" },
	    { SYS_compat_50___sigtimedwait, "compat" },
	    { SYS__ksem_init, "ksem" },
	    { SYS__ksem_open, "ksem" },
	    { SYS__ksem_unlink, "ksem" },
	    { SYS__ksem_close, "ksem" },
	    { SYS__ksem_post, "ksem" },
	    { SYS__ksem_wait, "ksem" },
	    { SYS__ksem_trywait, "ksem" },
	    { SYS__ksem_getvalue, "ksem" },
	    { SYS__ksem_destroy, "ksem" },
	    { SYS__ksem_timedwait, "ksem" },
	    { SYS_mq_open, "mqueue" },
	    { SYS_mq_close, "mqueue" },
	    { SYS_mq_unlink, "mqueue" },
	    { SYS_mq_getattr, "mqueue" },
	    { SYS_mq_setattr, "mqueue" },
	    { SYS_mq_notify, "mqueue" },
	    { SYS_mq_send, "mqueue" },
	    { SYS_mq_receive, "mqueue" },
	    { SYS_compat_50_mq_timedsend, "compat" },
	    { SYS_compat_50_mq_timedreceive, "compat" },
	    { SYS_compat_30_getdents, "compat" },
	    { SYS_compat_50_lutimes, "compat" },
	    { SYS_compat_30___stat13, "compat" },
	    { SYS_compat_30___fstat13, "compat" },
	    { SYS_compat_30___lstat13, "compat" },
	    { SYS_compat_16___sigaction14, "compat" },
	    { SYS_compat_16___sigreturn14, "compat" },
	    { SYS_compat_30_fhopen, "compat" },
	    { SYS_compat_30_fhstat, "compat" },
	    { SYS_compat_20_fhstatfs, "compat" },
	    { SYS_compat_50_____semctl13, "compat_sysv" },
	    { SYS_compat_50___msgctl13, "compat_sysv" },
	    { SYS_compat_50___shmctl13, "compat_sysv" },
	    { SYS_compat_50__lwp_park, "compat" },
	    { SYS_compat_50_kevent, "compat" },
	    { SYS_compat_30_fhstatvfs1, "compat" },
	    { SYS_compat_50_pselect, "compat" },
	    { SYS_compat_50_pollts, "compat" },
	    { SYS_compat_50___stat30, "compat" },
	    { SYS_compat_50___fstat30, "compat" },
	    { SYS_compat_50___lstat30, "compat" },
	    { SYS_compat_30___fhstat30, "compat" },
	    { SYS_compat_50___ntp_gettime30, "compat" },
	    { SYS_compat_50___fhstat40, "compat" },
	    { SYS_aio_cancel, "aio" },
	    { SYS_aio_error, "aio" },
	    { SYS_aio_fsync, "aio" },
	    { SYS_aio_read, "aio" },
	    { SYS_aio_return, "aio" },
	    { SYS_compat_50_aio_suspend, "compat" },
	    { SYS_aio_write, "aio" },
	    { SYS_lio_listio, "aio" },
	    { SYS___lfs_segwait50, "lfs" },
	    { SYS___mq_timedsend50, "mqueue" },
	    { SYS___mq_timedreceive50, "mqueue" },
	    { SYS_compat_60__lwp_park, "compat" },
	    { SYS___aio_suspend50, "aio" },
	    { SYS_____semctl50, "sysv_ipc" },
	    { SYS___shmctl50, "sysv_ipc" },
	    { SYS___msgctl50, "sysv_ipc" },
};

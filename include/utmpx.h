#ifndef __UTMPX_H__
#define __UTMPX_H__

#define USER_PROCESS	7	/* Normal process.  */

/* The structure describing an entry in the user accounting database.  */
struct utmpx
{
  short int ut_type;    /* Type of login.  */
  __pid_t ut_pid;   /* Process ID of login process.  */
  char ut_line[__UT_LINESIZE];  /* Devicename.  */
  char ut_id[4];    /* Inittab ID. */
  char ut_user[__UT_NAMESIZE];  /* Username.  */
  char ut_host[__UT_HOSTSIZE];  /* Hostname for remote login.  */
  struct __exit_status ut_exit; /* Exit status of a process marked
           as DEAD_PROCESS.  */

/* The fields ut_session and ut_tv must be the same size when compiled
   32- and 64-bit.  This allows files and shared memory to be shared
   between 32- and 64-bit applications.  */
#if __WORDSIZE_TIME64_COMPAT32
  __int32_t ut_session;   /* Session ID, used for windowing.  */
  struct
  {
    __int32_t tv_sec;   /* Seconds.  */
    __int32_t tv_usec;    /* Microseconds.  */
  } ut_tv;      /* Time entry was made.  */
#else
  long int ut_session;    /* Session ID, used for windowing.  */
  struct timeval ut_tv;   /* Time entry was made.  */
#endif
  __int32_t ut_addr_v6[4];  /* Internet address of remote host.  */
  char __glibc_reserved[20];    /* Reserved for future use.  */
};


#endif /* __UTMPX_H__ */

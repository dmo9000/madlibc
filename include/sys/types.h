#ifndef __TYPES_H__
#define __TYPES_H__
#include "stdint.h"
typedef uint32_t size_t;
typedef long int time_t;
typedef uint32_t ino_t;
typedef signed int __int32_t;


typedef long		__kernel_long_t;
typedef __kernel_long_t	__kernel_time_t;
typedef __kernel_long_t		__kernel_suseconds_t;

#define	__U32_TYPE		unsigned int
#define	__S32_TYPE		int
#define __PID_T_TYPE		__S32_TYPE

typedef __PID_T_TYPE 		__pid_t;
#define __UID_T_TYPE		__U32_TYPE
#define __GID_T_TYPE		__U32_TYPE

typedef __GID_T_TYPE __uid_t;
typedef __GID_T_TYPE __gid_t;

typedef __pid_t pid_t;

#endif /* __TYPES_H__ */

#define SUCCESS			0
#define	EPERM		 		1				/* Operation not permitted */
#define ENOENT      2       /* no such file or directory */
#define EIO         5       /* I/O error */
#define E2BIG       7       /* Argument list too long */
#define EBADF       9       /* bad file descriptor */
#define EAGAIN      11      /* Try again */
#define ENOMEM      12      /* Out of memory */
#define	EFAULT			14				/* Bad address */
#define	ENOTDIR			20			/* Not a directory */
#define	EISDIR			21	    /* Is a directory */
#define EINVAL      22      /* negative offset or offset beyond end of file? Invalid address */
#define ENFILE      23      /* too many open files (in-process) */
#define	EMFILE			24	    /* Too many open files (in-system) */
#define ENOTTY      25      /* Not a typewriter */
#define	EFBIG				27	    /* File too large */
#define	EROFS				30	/* Read-only file system */
#define EPIPE       32      /* Broken pipe */
#define	EOPNOTSUPP	95	/* Operation not supported on transport endpoint */
#define ENOTSUP			EOPNOTSUPP

/* aliases */
#define EWOULDBLOCK EAGAIN
#define ENOTSUPP    EOPNOTSUPP

#ifdef __BDOS__
extern int errno;
//#define set_errno(n)	errno = #n;
int set_errno(int e);
#else
int _bdos_geterrno();
int _bdos_seterrno(int e);
#define errno _bdos_geterrno()
#define set_errno(n) _bdos_seterrno(n)
#endif



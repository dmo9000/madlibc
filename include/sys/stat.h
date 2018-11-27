#ifndef __STAT_H__
#define __STAT_H__
#include <stdint.h>

struct stat
{
    short   st_mode;        /* flags */
    long    st_atime;       /* access time */
    long    st_mtime;       /* modification time */
    long    st_size;        /* file size in bytes */
		uint32_t	st_ino;
		uint8_t  st_nlink;
		uint32_t  st_uid;
		uint32_t  st_gid;
		/* from FUZIX */
		uint16_t  st_rdev;	
		uint16_t  st_dev;	
    long    st_ctime;       /* modification time */

};

#define S_ISUID  0004000
#define S_ISGID  0002000
#define S_ISVTX  0001000
#define S_IFIFO  0010000
#define S_IFCHR  0020000
#define S_IFBLK  0060000

//#define S_IFMT         0x0600
#define S_IFMT  				00170000
#define S_IFDIR  				0040000
#define S_IFREG 				 0100000

#define S_ISFIFO(m)	(((m) & S_IFMT) == S_IFIFO)
#define S_ISDIR(m)	(((m) & S_IFMT) == S_IFDIR)
#define S_ISCHR(m)	(((m) & S_IFMT) == S_IFCHR)
#define S_ISBLK(m)	(((m) & S_IFMT) == S_IFBLK)
#define S_ISREG(m)	(((m) & S_IFMT) == S_IFREG)

/* From FUZIX, Linux doesn't have this */
#define S_ISDEV(m)	(((m) & S_IFCHR) == S_IFCHR)


int stat(const char *restrict path, struct stat *restrict buf);

#endif /* __STAT_H__ */

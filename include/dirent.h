#ifndef __DIRENT_H__
#define __DIRENT_H__
#include <sys/types.h>
#include <stddef.h>

#define EXT2_NAME_LEN 255

struct dirent {
    uint32_t d_ino;     /* Inode number */
    uint16_t d_reclen;   /* Directory entry length */
    uint8_t name_len;   /* Name length */
    uint8_t file_type;
    char    d_name[EXT2_NAME_LEN+1];
};

/* Directory stream type.  */
typedef struct _dir {
	uint32_t dd_ino;	/* reference to on disk inode number */
  int dd_fd;    /* file descriptor */
  uint32_t  dd_loc;   /* offset in buffer */
} DIR;        /* stream data from opendir() */


#define EXT2_NAME_LEN 255

int closedir(DIR *dirp);
struct dirent *readdir(DIR *dirp);
DIR *opendir(const char *name);

#endif /* __DIRENT_H__ */

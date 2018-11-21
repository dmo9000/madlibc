#ifndef __DIRENT_H__
#define __DIRENT_H__
#include <sys/types.h>
#include <stddef.h>

/*
struct dirent {
	ino_t  d_ino;
	int 	dd_fd;
	int 	dd_loc;
	int 	_priv;
	char   d_name[]; 
	};

typedef struct dirent DIR;
*/

struct dirent {
  long    d_ino;    /* Try to be iBCS2 like */
  off_t   d_off;
  unsigned short  d_reclen;
  char    d_name[31];
};

/* Internal directory structure */
struct _dir {
  struct dirent de;
  uint8_t buf[512];
  uint8_t next;
  uint8_t last;
};

/* Directory stream type.  */
typedef struct {
  int dd_fd;    /* file descriptor */
  int dd_loc;   /* offset in buffer */
  int dd_size;    /* # of valid entries in buffer */
  struct dirent *dd_buf;  /* -> directory buffer */
  struct _dir _priv;
} DIR;        /* stream data from opendir() */

/* Kernel directory format off disk */
struct __dirent {
  ino_t   d_ino;
  char    d_name[30];
};


int closedir(DIR *dirp);
struct dirent *readdir(DIR *dirp);
DIR *opendir(const char *name);

#endif /* __DIRENT_H__ */

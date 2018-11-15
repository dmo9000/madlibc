#ifndef __DIRENT_H__
#define __DIRENT_H__

struct dirent {
	ino_t  d_ino;
	char   d_name[]; 
	};

typedef struct dirent DIR;

#endif /* __DIRENT_H__ */

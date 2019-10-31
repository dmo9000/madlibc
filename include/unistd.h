#ifndef __UNISTD_H__
#define __UNISTD_H__
#include <stddef.h>

ssize_t read(int fd, void *buf, size_t count);
ssize_t write(int fd, void *buf, size_t count);
int close(int filedes);
off_t lseek(int fd, off_t offset, int whence);
int chdir(char *s);

#endif /* __UNISTD_H__ */

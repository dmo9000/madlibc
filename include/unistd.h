#ifndef __UNISTD_H__
#define __UNISTD_H__
#include <stddef.h>
#include <stdint.h>

typedef uint32_t useconds_t;

ssize_t read(int fd, void *buf, size_t count);
ssize_t write(int fd, void *buf, size_t count);
int close(int filedes);
off_t lseek(int fd, off_t offset, int whence);
int chdir(char *s);
int usleep(useconds_t usec);

#endif /* __UNISTD_H__ */

#include <bdos.h>
//#include <assert.h>

extern _bdos_vtable *bdvt;

int open(const char *pathname, int flags)
{

    return bdvt->_open(pathname, flags);
}


ssize_t read(int fd, void *buf, size_t count)
{

    return bdvt->_read(fd, buf, count);

}

int close(int fd)
{

    return bdvt->_close(fd);
}

int stat(const char *restrict path, struct stat *restrict buf)
{

    return bdvt->_stat(path, buf);
}

off_t lseek(int fd, off_t offset, int whence)
{
//	assert(bdvt->_lseek);
    return bdvt->_lseek(fd, offset, whence);
}

int chdir(char *s)
{

    return bdvt->_chdir(s);

}


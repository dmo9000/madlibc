#include <stdio.h>
#include <bdos.h>
#include "fcntl_private.h"
#include "fcntl.h"

FILE filehandles[FILES_MAX];
extern _bdos_vtable *bdvt;

int fcntl(int fd, int c, int tf)
{
    return bdvt->_fcntl(fd, c, tf);
}

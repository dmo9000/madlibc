#include <stdio.h>
#include <bdos.h>
#include "fcntl_private.h"
#include "fcntl.h"

FILE filehandles[FILES_MAX];
extern _bdos_vtable *bdvt;

void init_stdio()
{
	/* stdin, stdout, stderr mapping */
	filehandles[0]._file = 0;
	filehandles[1]._file = 1;
	filehandles[2]._file = 2;
}

int fcntl(int fd, int c, int tf)
{
    return bdvt->_fcntl(fd, c, tf);
}

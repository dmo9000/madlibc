#include <bdos.h>
#include <stdlib.h>

extern _bdos_vtable *bdvt;

char *getenv(const char *name)
{
    return bdvt->_getenv(name);
}


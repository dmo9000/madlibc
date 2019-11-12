
#include <stdio.h>
#include "string.h"
#include <errno.h>

//int errno;

void perror(const char *s)
{
    printf("%s: %s (%u)\n\r", (const char *) s, (const char *) strerror(errno), errno);

}


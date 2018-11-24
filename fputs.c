#include <stdio.h>
#include <assert.h>

int fputs(const char *s, FILE *stream)
{

    /* FIXME - check file handle is valid */

    assert(stream);
    puts(s);

    return 0;
}



#include <stdio.h>
#include <assert.h>
#include <errno.h>

void rewind(FILE *stream)
{
    (void) fseek(stream, 0L, SEEK_SET);
}

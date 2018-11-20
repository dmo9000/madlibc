#include <stdio.h>
#include <assert.h>

int putc(int c, FILE *stream)
{
	assert(stream);
	assert((stream == stdout || stream == stderr));
	putchar(c);

}

int putchar(int c)
{
    char * p = (char *)0xff1002;
    p[0] = c;
    return 0;
}


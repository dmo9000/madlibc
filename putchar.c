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
	char strng[2];
	strng[0] = c;
	strng[1] = 0;
//    char * p = (char *)0xff1002;
//    p[0] = c;
		write(STDOUT_FILENO, &strng, 1);
    return 0;
}


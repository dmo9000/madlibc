#include <stdio.h>
#include <assert.h>

int putchar(int c)
{
		char strng[2];
//		char * p = (char *)0xff1002;
//  	p[0] = c;
		strng[0] = c;
		strng[1] = 0;
		write(STDOUT_FILENO, &strng, 1);
  	return 0;
}

int putc(int c, FILE *stream)
{
    assert(stream);
    assert((stream == stdout || stream == stderr));
    putchar(c);
}


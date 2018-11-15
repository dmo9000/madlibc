#include <stdio.h>
#include <assert.h>

int fputc(int c, FILE *stream)
{

	/* FIXME: do properly, using write() */

	assert(stream);
	putchar(c);

}

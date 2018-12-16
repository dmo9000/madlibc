#include <stdio.h>
#include <assert.h>

int getc(FILE *stream)
{
	char c;
	assert(stream);
	fread(&c, 1, 1, stream);
	return c;
}

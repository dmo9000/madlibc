#include <stdio.h>

int fgetc(FILE *stream)
{
	char c;
	fread(&c, 1, 1, stream);
	return c;
}

#include <stdio.h>
#include <unistd.h>
#include <assert.h>

int ungetc(int c, FILE *fp)
{
	printf("WARNING: ungetc(%d, 0x%lx) - unimplemented!\r\n", c, fp);
	assert(fp);
	assert(NULL);
}

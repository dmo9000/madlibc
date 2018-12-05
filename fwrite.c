#include <stdio.h>
#include <assert.h>

size_t fwrite(void *ptr, size_t size, size_t nmemb, FILE *stream)
{
	assert(ptr);
	assert(size);
	assert(nmemb);
	assert(stream);
	assert(NULL);

	return -1;
}


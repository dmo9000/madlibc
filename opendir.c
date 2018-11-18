#include <sys/types.h>
#include <dirent.h>
#include <string.h>
#include <assert.h>

DIR *opendir(const char *name)
{

	printf("opendir(%s)\r\n", name);
	assert(name);
	assert(NULL);
	return(NULL);

}


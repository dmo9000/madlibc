#include <unistd.h>
#include <stdlib.h>
//#include <alloc.h>
#include <dirent.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>
#include <string.h>
#include <assert.h>

DIR *opendir(const char *name)
{
	DIR *dir = calloc(1, sizeof(DIR));

	assert(dir);

	printf("opendir(%s)\r\n", name);

	if (dir == NULL) {
		set_errno(ENOMEM);
		return NULL;
	}

	dir = opendir_r(dir, name);
	if (dir == NULL) {
//		free(dir);
		perror("opendir");
		return NULL;
		
		}

	return dir;
}

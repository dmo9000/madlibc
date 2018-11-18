#include <unistd.h>
#include <stdlib.h>
//#include <alloc.h>
#include <dirent.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>
#include <string.h>

DIR *opendir(const char *name)
{
	DIR *dir = calloc(1, sizeof(DIR));
	if (dir == NULL) {
		//errno = ENOMEM;
		set_errno(ENOMEM);
		return NULL;
	}
	dir = opendir_r(dir, name);
	if (dir == NULL)
		free(dir);
	return dir;
}

#include <unistd.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>
#include <string.h>
#include <assert.h>

DIR *opendir_r(DIR *dir, char *path)
{
    struct stat statbuf;

    if (stat(path, &statbuf) != 0) {
        return NULL;
    }

    assert(dir);
    assert(path);

    if ((statbuf.st_mode & S_IFDIR) == 0) {
        set_errno(ENOTDIR);
        return NULL;
    }

//	printf("opendir_r(%s, 0x%lx)\r\n", path, dir);

    if ((dir->dd_fd = open(path, O_RDONLY)) < 0) {
//	if ((dir->dd_fd = open(path, O_RDONLY | O_CLOEXEC)) < 0) {
        return NULL;
    }

    dir->dd_loc = 0;
    dir->dd_ino = statbuf.st_ino;
    return dir;
}

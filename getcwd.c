#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <dirent.h>
#include <stdbool.h>
#include <string.h>
#include <errno.h>

/* trying for a userspace only solution, to prevent ballooning the kernel */

char path_temp1[PATH_MAX];
char path_temp2[PATH_MAX];

/* NOTE that not many POSIX errno values are supported here, needs more
  work */

char *getcwd(char *current_wd, size_t len)
{
	DIR *d = NULL;
	struct stat start, this, parent;
	struct dirent *dp;
  int depth = 0;
	bool root_reached = false;

	if (!current_wd || !len) {
		set_errno(EINVAL);
		return NULL; 
		}

	memset(&path_temp1, 0, PATH_MAX);
	memset(&path_temp2, 0, PATH_MAX);
	if (stat(".", &start)) {
		perror("lstat");
		return NULL;
		}

level_up:
	if (stat(".", &this)) {
		perror("lstat");
		return NULL;
		}

  if (stat("..", &parent)) {
    perror("lstat");
    return NULL;
    }

	while (!root_reached) {
		if (this.st_ino == parent.st_ino) {
				/* root reached */
				root_reached = true;
				memset(current_wd, 0, len);
				if (!strlen(path_temp2)) {
					current_wd[0] = '/';
					} else {
					strncpy((char *) current_wd, 
						(const char *) &path_temp2, len);
				}
				if (chdir(current_wd)) {
					perror("chdir");
					return NULL;
					}
				return current_wd;
				}

		d = opendir("..");
		if (!d) {
			perror("opendir");
			return NULL;
			}

	  while ((dp = readdir(d)) != NULL) {
				if (dp->d_ino == this.st_ino) {
					strncat((char *) &path_temp1, "/", 2);
					strncat((char *) &path_temp1, 
								(const char *) dp->d_name, dp->name_len);
					if (strlen(path_temp2)) {
						strncat((char *) &path_temp1, 
							(const char *) &path_temp2, strlen(path_temp2));
						}
					strncpy((char *) &path_temp2, 
							(const char *) &path_temp1, strlen(path_temp1));
					memset(&path_temp1, 0, PATH_MAX);
					depth++;
					closedir(d);
					chdir("..");
					goto level_up;
					}
      	}	
		}	

	return NULL;

}


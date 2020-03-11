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

/* trying for a userspace only solution, to prevent ballooning the kernel */

int main() {
   char cwd[PATH_MAX];

   if (getcwd(cwd, PATH_MAX-1) != NULL) {
       printf("%s\n\r", cwd);
   } else {
       perror("getcwd() error");
       return 1;
   }
   return 0;
}

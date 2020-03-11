#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <stdint.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <assert.h>

#define BUFSIZE 256 

int main(int argc, char *argv[])
{

	if (argc != 2) {
			printf("usage: cd <path>\r\n");
			exit(1);
			}

	if (chdir(argv[1]) !=0) {
			perror("chdir");
			exit(1);
			}

	/* all is well */

	exit(0);

}

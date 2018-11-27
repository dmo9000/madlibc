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

	assert(argc == 2);

	printf("changing to directory -> %s\r\n", argv[1]);

	chdir(argv[1]);

	exit(0);

}

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <assert.h>
#include <madlibc.h>

int main(int argc, char *argv[])
{
	
	int fd = 0;
	int n = 0;

	printf("madlibc version: %u.%u.%u\n\r", 
					MADLIBC_VER_MAJOR,
					MADLIBC_VER_MINOR,
					MADLIBC_VER_PATCH);

	fd = open("write-test.tmp", "wb");

	printf("fd got %d\n", fd);
	perror("open");

	exit(0);
}

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <assert.h>
#include <madlibc.h>

int main(int argc, char *argv[])
{
	
	int n = 0;
	char *c = NULL;

	printf("madlibc version: %u.%u.%u\n\r", 
					MADLIBC_VER_MAJOR,
					MADLIBC_VER_MINOR,
					MADLIBC_VER_PATCH);

	n = 	write(STDOUT_FILENO, "WRITE_STDOUT\n\r", 14);
	printf(" (wrote %d characters)\r\n", n);

	n = 	write(STDERR_FILENO, "WRITE_STDERR\n\r", 14);
	printf(" (wrote %d characters)\r\n", n);

	n = fwrite("FWRITE_STDOUT\n\r", 1, 15, stdout);
	printf(" (wrote %d 1-byte elements\r\n", n);
	if (n <= 0) {
				perror("fwrite");
				exit(1);
				}

  n = fwrite("FWRITE_STDERR\n\r", 1, 15, stderr);
  printf(" (wrote %d 1-byte elements\r\n", n);
  if (n <= 0) {
        perror("fwrite");
        exit(1);
        }

	/* fprintf */

	fprintf(stdout, "FPRINTF_STDOUT\n\r"); 
//	fprintf(stdout, "FPRINTF_STDOUT %s\n\r", "foo"); 

	/* getenv() */

  c = getenv("TERM");

	assert(c);
	printf("getenv(\"TERM\") = '%s'\n\r", c);	

  /* cursor position report */

	printf("\x1b\x5b\x36\x6e");

	exit(0);
}

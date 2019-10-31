#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <assert.h>


int main(int argc, char *argv[])
{
	
	int n = 0;
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

	/* putchar */

	putchar('P');
	putchar('\n');
	putchar('\r');
	exit(0);
}

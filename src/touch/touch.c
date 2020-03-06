#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>

int main(int argc, char **argv)
{
		int fd = 0;
		char *filename = NULL;
		if (argc < 2) {
			printf("touch: missing file operand\n\r");
			exit(1);
			}
				
		filename = argv[1];

		fd = open(filename, O_CREAT | O_TRUNC);

		if (fd == -1) {
			perror("open");
			exit(1);
			}
		close(fd);

    exit(0);
}

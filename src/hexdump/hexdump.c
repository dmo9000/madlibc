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
	uint32_t filesize = 0;
	uint32_t remaining = 0;
	uint32_t nr_read = 0;
	unsigned char buffer[BUFSIZE];
	
	struct stat statbuf;
	FILE *d; 
	if (argc < 2 || argc > 2) {
			printf("usage: hexdump <filename>\r\n");
			exit(1);
			}

	if (stat(argv[1], &statbuf) == -1) {
			perror("stat");
			exit(1);
			}	


	filesize = statbuf.st_size;
	remaining = filesize;

	printf("file size = %lu\r\n", filesize);

	d = fopen(argv[1], "rb");
	if (!d) {
			printf("hexdump: couldn't open file %s\r\n", argv[1]);
			exit(1);
			}

	while (remaining > 0) {
		//printf("remaining = %lu\r\n", remaining);
		memset(&buffer, 0, BUFSIZE);
		nr_read = fread(&buffer, 1, BUFSIZE, d); 
		ptr_dump(&buffer, (nr_read > BUFSIZE ? BUFSIZE : nr_read));
		remaining -= nr_read;
		if (remaining > 0 && (!continue_or_exit())) {
				goto finish_up;
				}
		}

finish_up:
	fclose(d);

	exit(0);

}

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>

#define FILESIZE	737280

int main(int argc, char *argv[])
{

		FILE *fh = NULL;
		char *ptr1 = NULL;	
		char *ptr2 = NULL; 
		int i = 0;

		if (argc < 2 || ! argv[1]) {
			printf("usage: imgload <filename>\n");
			exit(1);	
			}




		fh = fopen(argv[1], "rb");
		if (fh) {
						ptr1 = malloc(FILESIZE);
						assert(ptr1);	
						ptr2 = ptr1;
						for (i = 0; i < 180; i++) {
									fread(ptr1, 4096, 1, fh);
									ptr1 += 4096;
									}
						memcpy((void *) 0x2000000, ptr2, FILESIZE);	
						fclose(fh);
						} else {
						perror("fopen");
						}
	
    exit(0);
}

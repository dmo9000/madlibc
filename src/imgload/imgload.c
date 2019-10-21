#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>

#define FILESIZE	737280

#define CHAR_ESCAPE 0x1B

void
clear_screen ()
{

        printf ("%c[H%c[2J", CHAR_ESCAPE, CHAR_ESCAPE);
        printf ("%c[1;1H", CHAR_ESCAPE);
}


void
set_cursor(int x, int y)
{
    printf ("%c[%d;%dH", CHAR_ESCAPE, y+1, x+1);

}


int main(int argc, char *argv[])
{

		FILE *fh = NULL;
		char *ptr1 = NULL;	
		char *ptr2 = NULL; 
		int i = 0;

		if (argc < 2 || ! argv[1]) {
			printf("usage: imgload <filename>\r\n\r\n");
			exit(1);	
			}




		
		fh = fopen(argv[1], "rb");
		if (fh) {
						//clear_screen();
						ptr1 = malloc(FILESIZE);
						assert(ptr1);	
						ptr2 = ptr1;
						for (i = 0; i < 180; i++) {
									fread(ptr1, 4096, 1, fh);
									ptr1 += 4096;
									}
						memcpy((void *) 0x2000000, ptr2, FILESIZE);	
						fclose(fh);
						//set_cursor(0,0);
						} else {
						perror("fopen");
						exit(1);
						}
	
    exit(0);
}

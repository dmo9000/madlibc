#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *d; 
	if (argc < 2 || argc > 2) {
			printf("usage: hexdump <filename>\r\n");
			exit(1);
			}

	d = fopen(argc[1], "rb");
	if (!d) {
			printf("hexdump: couldn't open file %s\r\n", argv[1]);
			exit(1);
			}
	fclose(d);

	exit(0);

}

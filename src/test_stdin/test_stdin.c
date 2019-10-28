#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>



int main(int argc, char *argv[])
{
	char buffer[16];
	int n = 0;

	printf("Testing read(0, &buffer, 15)\r\n");
	memset(&buffer, 0, 16);
	n = read(0, &buffer, 15);
	puts("\r\n");
	printf("read %d bytes, string=[%s]\r\n", n, buffer);	

	exit(0);
}

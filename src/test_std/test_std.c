#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>


int main(int argc, char *argv[])
{
	
	fprintf(stdout, "stdout: hello %s, %s, %s\r\n", "foo");
	//fprintf(stderr, "stderr: hello %s, %s, %s\r\n", "foo", "bar", "baz");
	exit(0);
}

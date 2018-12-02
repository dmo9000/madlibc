#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <stdint.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <assert.h>

#define BUFSIZE 256 

#define S_TIME 	0xff7ff8

int main(int argc, char *argv[])
{
	time_t *t  = 0;
	time_t t1 = 0;
	char *tstr = NULL;

	t = 0xff7ff8;
	t1 = *t;
 	tstr = ctime(&t1);
	assert(tstr);
	printf("%s\r\n", tstr);

	exit(0);

}

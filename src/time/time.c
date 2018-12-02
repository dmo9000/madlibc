#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <stdint.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <assert.h>

int main(int argc, char *argv[])
{
	time_t t1 = 0;
	char *tstr = NULL;

	t1 = time(NULL);
 	tstr = ctime(&t1);
	assert(tstr);
	printf("%s", tstr);
	exit(0);

}

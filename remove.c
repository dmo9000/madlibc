#include <stdio.h>
#include <errno.h>

int remove(const char *pathname)
{
	printf("BDOS: remove(%s) not implemented\n\r");
	set_errno(EPERM);
	return -1;	
}

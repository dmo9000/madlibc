#include <stdio.h>
/*
int getchar()
{
    char *  p = (char *) 0xff1002;
    return p[0];
}
*/

int getchar()
{
	char buf[2];
	read(STDIN_FILENO, &buf, 1);
	return buf[0];
}

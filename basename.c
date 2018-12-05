#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define STDIN_FILENO   0
#define STDOUT_FILENO  1
#define STDERR_FILENO  2

static void remove_suffix(char *name, char *suffix)
{
    char *np, *sp;

    np = name + strlen(name);
    sp = suffix + strlen(suffix);

    while (np > name && sp > suffix)
	if (*--np != *--sp)
	    return;

    if (np > name)
	*np = '\0';
}


char *basename(char *name)
{
    char *base;

    base = rindex(name, '/');
    return base ? base + 1 : name;
}


void strip_trailing_slashes(char *path)
{
    int last;

    last = strlen(path) - 1;
    while (last > 0 && path[last] == '/')
	path[last--] = '\0';
}



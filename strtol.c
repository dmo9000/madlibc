#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>


unsigned long int strtol(const char *nptr, char **endptr, int base)
{
    long result;
    char *p = nptr;

    while (isspace(*p)) {
        p++;
    }
    if (*p == '-') {
        p++;
        result = -strtoul(p, endptr, base);
    }
    else {
        if (*p == '+') p++;
        result = strtoul(p, endptr, base);
    }
    if (endptr != 0 && *endptr == p) {
        *endptr = nptr;
    }
    return result;
}


const static char cvtIn[] = {
    0, 1, 2, 3, 4, 5, 6, 7, 8, 9,		/* '0' - '9' */
    100, 100, 100, 100, 100, 100, 100,		/* punctuation */
    10, 11, 12, 13, 14, 15, 16, 17, 18, 19,	/* 'A' - 'Z' */
    20, 21, 22, 23, 24, 25, 26, 27, 28, 29,
    30, 31, 32, 33, 34, 35,
    100, 100, 100, 100, 100, 100,		/* punctuation */
    10, 11, 12, 13, 14, 15, 16, 17, 18, 19,	/* 'a' - 'z' */
    20, 21, 22, 23, 24, 25, 26, 27, 28, 29,
    30, 31, 32, 33, 34, 35
};


#ifndef __STDLIB_H__
#define __STDLIB_H__

#include <stddef.h>

unsigned long int strtoul(const char *nptr, char **endptr, int base);
void *malloc(size_t size);
void free(void *ptr);
void *calloc(size_t nmemb, size_t size);
//void exit(int status);
#define exit(f) return f;

#endif /* __STDLIB_H__ */

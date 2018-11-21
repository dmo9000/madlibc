#ifndef __STDLIB_H__
#define __STDLIB_H__

#include <stddef.h>

unsigned long int strtoul(const char *nptr, char **endptr, int base);
void *malloc(size_t size);
void free(void *ptr);
void *calloc(size_t nmemb, size_t size);
 void *realloc(void *ptr, size_t size);

void qsort(void *base, size_t nmemb, size_t size, int (*compar)(const void *, const void *));



void exit(int status);
//#define exit(f) return f;

#endif /* __STDLIB_H__ */

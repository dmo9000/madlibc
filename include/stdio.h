#ifndef __STDIO_H__
#define __STDIO_H__

#include <stddef.h>
#include <stdbool.h>
#include <stdarg.h>
#include <sys/types.h>

struct  _iobuf {
    char *    _ptr;
    int   _cnt;
    char *    _base;
    char   _flags[4];
    int    _file;
    bool  _eof;
    ssize_t _limit;
};

typedef struct _iobuf FILE;

#include "fcntl_private.h"

#define stdin           (&filehandles[0])
#define stdout          (&filehandles[1])
#define stderr          (&filehandles[2])

#define STDIN_FILENO   0
#define STDOUT_FILENO  1
#define STDERR_FILENO  2

int fileno(FILE *f);
int printf(const char *format, ...);
int puts(const char *s);
int getchar(void);
int putchar(int c);
int snprintf(char *str, size_t size, const char *format, ...);
void perror(const char *s);
FILE *fopen(const char *pathname, const char *mode);
size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream);
size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream);
int fclose(FILE *stream);
int fputs(const char *s, FILE *stream);
int fflush(FILE *stream);
int fprintf(FILE *stream, const char *format, ...);
void *malloc(size_t size);
int fputc(int c, FILE *stream);
int sprintf(char *str, const char *format, ...);
int vsnprintf(char* buffer, size_t count, const char* format, va_list va);
#define SEEK_SET	0
#define SEEK_CUR	1
#define SEEK_END	2
#define BUFSIZ 8192

/* End of file character.
   Some things throughout the library rely on this being -1.  */
#ifndef EOF
# define EOF (-1)
#endif


#endif /* __STDIO_H__ */

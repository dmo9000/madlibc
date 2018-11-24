#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdarg.h>

int fprintf(FILE *stream, const char *format, ...)
{
    va_list arglist;
    assert(stream);
    assert(format);

    if (stream == stdin || stream == stderr) {
        va_start( arglist, format );
        vprintf( format, arglist );
        va_end( arglist );
    } else {
        assert((stream != stdin && stream != stderr));
    }
    return 0;

}

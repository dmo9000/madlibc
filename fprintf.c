#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdarg.h>

int fprintf(FILE *stream, const char *format, ...)
{
    va_list arglist;
    assert(stream);
    assert(format);

		//printf("fprintf(%s, 'FORMAT_STRING')\r\n", streamname, format);

		/* since filesystem, is not writable, should return EPERM? for now if not stdout/stderr */ 

    if (stream == stdout || stream == stderr) {
				//	printf("-> fprintf(%s -> ...)\r\n", streamname);
        va_start( arglist, format );
        vprintf( format, arglist );
        va_end( arglist );
//    } else {
//        assert((stream != stdin && stream != stderr));
    }
    return 0;
}

#include <stdio.h>
#include <errno.h>
#include <assert.h>

size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream)
{
    int written = 0;
    assert(ptr);
    assert(size);
    assert(nmemb);
    assert(stream);

    //printf("*fwrite(..., %u, %d) %d %d\n\r", size*nmemb, stream->_file, STDOUT_FILENO, STDERR_FILENO);
    if (stream->_file == STDOUT_FILENO || stream->_file == STDERR_FILENO) {
        //printf("+fwrite(..., %u, %d)\n\r", size*nmemb, stream->_file);
        written = write(stream->_file, ptr, size*nmemb);
        //printf("+written = %d\n", written);
        return (written/size);
    }

    set_errno(EPERM);
    return 0;
}


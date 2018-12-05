#include <stdio.h>
#include <assert.h>
#include <errno.h>

int fseek(FILE *stream, long offset, int whence)
{

	int v = 0; 
	assert(stream);
	assert(stream->_file >=3);
	assert(whence == SEEK_SET);
	v = lseek(stream->_file, offset, whence);
	/* not correct for anything other than SEEK_SET */
	if (v == whence) {
		set_errno(0);
		return 0;
		}
	/* errno fall through */
	return -1;

}

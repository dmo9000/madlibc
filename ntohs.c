#include <sys/types.h>

typedef unsigned char u_char;

uint16_t
ntohs(uint16_t x)
{
#if BYTE_ORDER == LITTLE_ENDIAN
	u_char *s = (void *) &x;
	return (uint16_t)(s[0] << 8 | s[1]);
#else
	return x;
#endif
}

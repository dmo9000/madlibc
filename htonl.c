//#include <sys/socket.h>
//#include <netinet/in.h>
//#include <arpa/inet.h>
#include <stdint.h>
#include <stdbool.h>

static bool is_big_endian(void)
{
    union {
        uint32_t i;
        char c[4];
    } bint = {0x01020304};

    return bint.c[0] == 1;
}

uint32_t htonl(uint32_t v)
{
    uint8_t *p = (uint8_t *)&v;
    if (is_big_endian()) {
        return v;
    } else {
//    	return ((uint32_t)p[0] << 24) | ((uint32_t)p[1] << 16) | ((uint32_t)p[2] << 8) | (uint32_t)p[3];
        /* GCC builtin */
        return __builtin_bswap32(v);
    }
}

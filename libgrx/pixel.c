#include "grx.h"

int grx_setpixel(uint16_t x, uint16_t y, uint8_t r, uint8_t g, uint8_t b)
{
	unsigned char *p = (unsigned char *) VIDEOBASE;

	p += (y * DISPLAY_WIDTH * 3);
	p += (x * 3); 

	p[0] = r;
	p[1] = g;
	p[2] = b;

	return 0;
}


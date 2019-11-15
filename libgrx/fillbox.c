#include "grx.h"

int grx_fillbox(uint16_t x0, uint16_t y0, uint16_t x1, uint16_t y1, uint8_t r, uint8_t g, uint8_t b)
{
		uint16_t i = 0;
		uint16_t j = 0;

	/*
		for (i = y0 ; i < y1 ; i++) {
				grx_line(x0, i, y1, i, r, g, b);
				}
	*/

		for (j = y0 ; j <= y1 ; j++) {
			for (i = x0 ; i <= x1 ; i++) {
				grx_setpixel(i, j,  r, g, b);
				}
		}
	

    return 0;
}


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "grx.h"

#define FILESIZE	737280

int main()
{
		uint16_t x = 0, y = 0;
		uint32_t i = 0;
		uint8_t r, g, b;

		for (i = 0; i < 65536; i++) {
			x = random() % DISPLAY_WIDTH; 
			y = random() % DISPLAY_HEIGHT; 
			r = random() % 255;
			g = random() % 255;
			b = random() % 255;
			grx_setpixel(x, y, r, g, b);
			}
	
    exit(0);
}

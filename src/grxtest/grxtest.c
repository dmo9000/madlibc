#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "grx.h"

#define FILESIZE	737280

int main()
{
	while (1) {
		test1();
		test2();
		test3();
		test4();
		test5();
	}


}

int test5()
{

    uint16_t x0 = 0, y0 = 0;
    uint16_t x1 = 0, y1 = 0;
    uint8_t r, g, b;
    uint32_t i = 0;

    for (i = 0; i < 65536; i++) {
      x0 = random() % DISPLAY_WIDTH;
      y0 = random() % DISPLAY_HEIGHT;
      x1 = random() % DISPLAY_WIDTH;
      y1 = random() % DISPLAY_HEIGHT;
      r = random() % 255;
      g = random() % 255;
      b = random() % 255;
      grx_fillbox(x0, y0, x1, y1, r, g, b);
      }

}


int test4()
{

    uint16_t x0 = 0, y0 = 0;
    uint16_t x1 = 0, y1 = 0;
    uint8_t r, g, b;
    uint32_t i = 0;

    for (i = 0; i < 65536; i++) {
      x0 = random() % DISPLAY_WIDTH;
      y0 = random() % DISPLAY_HEIGHT;
      x1 = random() % DISPLAY_WIDTH;
      y1 = random() % DISPLAY_HEIGHT;
      r = random() % 255;
      g = random() % 255;
      b = random() % 255;
      grx_box(x0, y0, x1, y1, r, g, b);
      }

}


int test2()
{
	grx_line(0, 0, 639, 383, 255, 0, 0);
	grx_line(0, 383, 639, 0, 0, 255, 0);
	return 0;	
}

int test3()
{

		uint16_t x0 = 0, y0 = 0;
		uint16_t x1 = 0, y1 = 0;
		uint8_t r, g, b;
		uint32_t i = 0;

    for (i = 0; i < 65536; i++) {
      x0 = random() % DISPLAY_WIDTH;
      y0 = random() % DISPLAY_HEIGHT;
      x1 = random() % DISPLAY_WIDTH;
      y1 = random() % DISPLAY_HEIGHT;
      r = random() % 255;
      g = random() % 255;
      b = random() % 255;
      grx_line(x0, y0, x1, y1, r, g, b);
      }

}


int test1()
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

	return 0;
}

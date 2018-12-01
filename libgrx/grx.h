#include <sys/types.h>

#define VIDEOBASE		0x2000000

#define DISPLAY_WIDTH		640	
#define DISPLAY_HEIGHT	384

typedef struct _rgbcolor {
									uint8_t r;
									uint8_t g;
									uint8_t b;
									} RGBColor;


int grx_setpixel(uint16_t x, uint16_t y, uint8_t r, uint8_t g, uint8_t b);
int grx_line(uint16_t x0, uint16_t y0, uint16_t x1, uint16_t y1, uint8_t r, uint8_t g, uint8_t b);
int grx_box(uint16_t x0, uint16_t y0, uint16_t x1, uint16_t y1, uint8_t r, uint8_t g, uint8_t b);
int grx_fillbox(uint16_t x0, uint16_t y0, uint16_t x1, uint16_t y1, uint8_t r, uint8_t g, uint8_t b);


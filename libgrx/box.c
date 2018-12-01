#include "grx.h"

int grx_box(uint16_t x0, uint16_t y0, uint16_t x1, uint16_t y1, uint8_t r, uint8_t g, uint8_t b)
{

    grx_line(x0, y0, x1, y0, r, g, b);
    grx_line(x1, y0, x1, y1, r, g, b);
    grx_line(x1, y1, x0, y1, r, g, b);
    grx_line(x0, y1, x0, y0, r, g, b);
    return 0;
}


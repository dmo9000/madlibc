#include "grx.h"

int grx_line(uint16_t x0, uint16_t y0, uint16_t x1, uint16_t y1, uint8_t r, uint8_t g, uint8_t b)
{

    int dx, dy, p, x, y;

    dx=x1-x0;
    dy=y1-y0;

    x=x0;
    y=y0;

    p=2*dy-dx;

    while(x<x1)
    {
        if(p>=0)
        {
            grx_setpixel(x,y,r,g,b);
            y=y+1;
            p=p+2*dy-2*dx;
        }
        else
        {
            grx_setpixel(x,y,r,g,b);
            p=p+2*dy;
        }
        x=x+1;
    }

    return 0;
}


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "grx.h"
#include "bmf.h"

int grx_puts(BitmapFont *font, uint16_t x, uint16_t y, char *text, int scale, uint8_t r, uint8_t g, uint8_t b);
int grx_glyph(BitmapFont *font, uint16_t x, uint16_t y, char glyph, int scale, uint8_t r, uint8_t g, uint8_t b);

int grx_puts(BitmapFont *font, uint16_t x, uint16_t y, char *text, int scale, uint8_t r, uint8_t g, uint8_t b)
{
    int l = 0;
    int i = 0;
    l = strlen(text);
    for (i = 0; i < l; i++) {
        grx_glyph(font, x, y, text[i], scale, r, g, b);
        x += (8*scale);
    }
    return 0;
}

int grx_glyph(BitmapFont *font, uint16_t x, uint16_t y, char glyph, int scale, uint8_t r, uint8_t g, uint8_t b)
{
    int j = 0;
    int i = 0;
    uint8_t *ptr = NULL;
    uint8_t m = 0;
    ptr = font->fontdata + (glyph*8);

    for (j = 0; j< 8; j++) {
        //printf("ptr[%u] = 0x%02x\r\n", j, ptr[j]);
        m = 128;
        for (i = 0; i < 8; i++) {
            if (ptr[j] & m) {
                grx_fillbox(x+(i*scale), y+(j*scale), x+(i*scale)+(scale-1), y+(j*scale)+(scale-1), r, g, b);
            }
            m = m / 2;
        }
    }
    return 0;
}


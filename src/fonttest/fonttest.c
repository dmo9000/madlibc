#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "grx.h"
#include "bmf.h"
#include "8x8.h"

#define FONT1	"/bmf/B/Beastly/Beastly.bmf"
#define FONT2	"/bmf/P/Parchment/Parchment.bmf"

#define BUFSIZE		16
#define FILESIZE	737280

char buffer[BUFSIZE];

int grx_puts(BitmapFont *font, uint16_t x, uint16_t y, char *text, int scale, uint8_t r, uint8_t g, uint8_t b);
int grx_glyph(BitmapFont *font, uint16_t x, uint16_t y, char glyph, int scale, uint8_t r, uint8_t g, uint8_t b);

BitmapFont *myfont1 = NULL;
BitmapFont *myfont2 = NULL;

int main()
{
    FILE *fh = NULL;
    char *ptr1 = NULL;
    char *ptr2 = NULL;
    int i = 0;
    int n = 0;

    myfont1 = bmf_load(FONT1);
    if (!myfont1) {
        perror("couldn't get bmf font: ");
        exit(1);
    }
    myfont2 = bmf_load(FONT2);


    grx_fillbox(0,0, 639, 383, 0, 0, 0);

    /*
        fh = fopen("/testdata/frogue-title.raw", "rb");
        if (fh) {
                //clear_screen();
                ptr1 = malloc(FILESIZE);
                assert(ptr1);
                ptr2 = ptr1;
                for (i = 0; i < 180; i++) {
                      fread(ptr1, 4096, 1, fh);
                      ptr1 += 4096;
                      }
                memcpy((void *) 0x2000000, ptr2, FILESIZE);
                fclose(fh);
                //set_cursor(0,0);
                } else {
                perror("fopen");
                exit(1);
                }
    */

    grx_bufferswap();
    memset(&buffer, 0, BUFSIZE);

    /* drain kb queue */

    grx_kb_raw();
    //n = pulse_text();
    n = scroll_text();

    grx_kb_cooked();
    grx_fillbox(0,0, 639, 383, 0, 0, 0);
    set_cursor(0,0);
    exit(0);
}


int scroll_text()
{
    char txtbuf[80];
    int x = 0;
    int i = 0;
    int j = 0;
    int n = 0;
    int k = 16;
    int d = 1;
    uint8_t f = 0;
    int l = 0;
    char *text = "This is a demo scroll banner! Let's hope it works and is very smooth! We all love a smoothly scrolling banner! The evil sorcerer is out to kill us all! ";
    x = strlen(text);
    memset(&txtbuf, 0, 80);

    while (1) {
        //set_cursor(0,0);
        //printf("j = %03d/%03d", j, x);
        //for (int i = 0; i<39; i++) {
        //   txtbuf[i] = text[(i+j) % x];
        // }


        if (!(k % 4)) {
            grx_puts(myfont1, 75, 75, "FONTDEMO", 8, f, f, f);
            grx_puts(myfont2, 149, 149, "Press any key to start", 2, 255-f,255-f,255-f);
            if (f == 255) {
                d = -1;
            }

            if (f == 0) {
                d = 1;
            }

            f = f + d;
        }

        //grx_fillbox(0,364, 639, 383, 0, 0, 0);
        //if (!(f % 2)) {
        for (int i = 0; i<39; i++) {
            txtbuf[i] = text[(i+j) % x];
        }

        grx_puts(myfont2, k, 364, txtbuf, 2, 255,255,255);
        k=k-2;
        if (k == 0) {
            k=14;
            j=((j+1) % strlen(text));
        }
        //}


        //for (l = 0; l < 1000000; l++) {
        //	asm("nop");
//		}
        grx_bufferswap();
        //}


        n = read(0, &buffer, 1);
        if (n > 0) {
            return 1;
        }
    }

    printf("-> %s\n", txtbuf);
    while (1) { }
    return;

}

int pulse_text()
{
    int n = 0;


    n = read(0, &buffer, 1);
    while (n == -1) {

        for (int c = 0; c < 255; c++) {
            grx_puts(myfont1, 75, 75, "FONTDEMO", 8, c, c, c);
            grx_puts(myfont2, 149, 149, "Press any key to start", 2, (255-c), (255-c), (255-c));
            grx_bufferswap();
            //grx_bufferswap();
            n = read(0, &buffer, 1);
            if (n>0) {
                return n;
            }
        }

        for (int c = 255; c > 0; c--) {
            grx_puts(myfont1, 75, 75, "FONTDEMO", 8, c, c, c);
            grx_puts(myfont2, 149, 149, "Press any key to start", 2, (255-c), (255-c), (255-c));
            grx_bufferswap();
            grx_bufferswap();
            n = read(0, &buffer, 1);
            if (n>0) {
                return n;
            }
        }


        n = read(0, &buffer, 1);
        if (n> 0) return n;

    }

    return 0;

}


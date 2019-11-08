#include <stdlib.h>
#include <stdio.h>
#include "libvt.h"


/*
void
vt_cls ()
{

        printf ("%c[H%c[2J", CHAR_ESCAPE, CHAR_ESCAPE);
        printf ("%c[1;1H", CHAR_ESCAPE);
}


void
set_cursor(int x, int y)
{
    printf ("%c[%d;%dH", CHAR_ESCAPE, y+1, x+1);

}
*/

int main()
{
    int i = 0, j = 0;

    vt_cls();
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            set_cursor(j * 10, i * 2);
            printf("\x1b\x5b""%2u""m", 40 + j); /* background */
            printf("\x1b\x5b""%2u""m", 30 + i); /* foreground */
            printf("\x1b\x5b""21m"" Normal   ");
            set_cursor(j * 10, (i * 2) + 1);
            printf("\x1b\x5b""%2u""m", 40 + j); /* background */
            printf("\x1b\x5b""%2u""m", 30 + i); /* foreground */
            printf("\x1b\x5b" "1m"" Bold     ");
        }
    }


    printf("\x1b\x5b""21;40;37m");
    set_cursor(0, 20);
    exit(0);
}

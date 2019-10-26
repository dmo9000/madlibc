#include <stdio.h>
#include "libvt.h"

void
clear_screen ()
{

        printf ("%c[H%c[2J", CHAR_ESCAPE, CHAR_ESCAPE);
        printf ("%c[1;1H", CHAR_ESCAPE);
}


void
set_cursor(int x, int y)
{
    printf ("%c[%d;%dH", CHAR_ESCAPE, y+1, x+1);
}


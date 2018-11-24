#include <stdlib.h>
#include <stdio.h>

#define CHAR_ESCAPE 0x1B

void
clear_screen ()
{

        printf ("%c[H%c[2J", CHAR_ESCAPE, CHAR_ESCAPE);
        printf ("%c[1;1H", CHAR_ESCAPE);
}

int main()
{
    clear_screen();
    exit(0);
}

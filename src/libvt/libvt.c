#include <stdio.h>
#include "libvt.h"

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

int
draw_box(int x1, int y1, int x2, int y2)
{

	int i = 0; int j = 0; 

	set_cursor(x1, y1);
	printf("%c", UPPER_LEFT_CORNER);
	for (i = x1+1; i<x2-1; i++) {
		printf("%c", HORIZONTAL);
		}

	set_cursor(x2-1, y1);
	printf("%c", UPPER_RIGHT_CORNER);

	for (i = y1+1; i < y2; i++) {
			set_cursor(x1, i);
			printf("%c", VERTICAL);
				for (j = x1+1; j<x2-1; j++) {
				printf(" ");			// fill box
				}
			set_cursor(x2-1, i);
			printf("%c", VERTICAL);
			}

	set_cursor(x1, y2);
	printf("%c", LOWER_LEFT_CORNER);
	for (i = x1+1; i<x2; i++) {
		printf("%c", HORIZONTAL);
		}
	set_cursor(x2-1, y2);
	printf("%c", LOWER_RIGHT_CORNER);

	return 0;
}

void vt_setfg(int f)
{
  f = f % 8;
  printf("\x1b\x5b""%02u""m", 30+f); /* background */
  return;
}

void vt_setbg(int b)
{
  b = b % 8;
  printf("\x1b\x5b""%02u""m", 40+b); /* background */
  return;
}

void vt_setbold(bool tf)
{
	switch(tf) {
							case true:
								printf("\x1b\x5b" "1m");	
								break;
							case false:
								printf("\x1b\x5b" "21m");	
								break;
							};
	return;
}

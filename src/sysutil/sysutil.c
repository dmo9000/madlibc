#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <time.h>
#include <string.h>
#include <fcntl.h>
#include "libvt.h"

#define CHAR_ESCAPE 0x1B
#define BUFSIZE			16
#define MOUSE_X  0xff1004L     // hardware mouse X position 
#define MOUSE_Y  0xff1006L     // hardware mouse Y position

void update_clock()
{
      time_t t1 = 0;
      char *tstr = NULL;
      set_cursor(1,1);
      t1 = time(NULL);
      tstr = ctime(&t1);
      assert(tstr);
      printf("%s", tstr);
      set_cursor(1,1);
}

int main()
{
		char buffer[BUFSIZE];
		bool esc_seq = false;
		memset(&buffer, 0, BUFSIZE);

		vt_setbg(ANSI_BACKGROUND_BLUE);
		vt_setfg(ANSI_FOREGROUND_WHITE);
		vt_setbold(true);

    clear_screen();

		draw_box(0,0,80,2);
		draw_box(0,3,80,24);

		set_cursor(1, 10);
		int flags = fcntl(0, F_GETFL, 0);
		fcntl(0, F_SETFL, flags | O_NONBLOCK);
		flags = fcntl(0, F_GETFL, 0);

		/* turn on hardware mouse cursor */	
		char *  p = (char *) 0xff1008L; 
		p[0] = 0x01;

		while (1) {
			uint16_t volatile* pRegX = (int16_t volatile*) MOUSE_X;  
			uint16_t volatile* pRegY = (int16_t volatile*) MOUSE_Y;  
			static uint16_t mouse_x = 0;
			static uint16_t mouse_y = 0;
			static uint16_t last_mouse_x = 0;
			static uint16_t last_mouse_y = 0;
			int n = 0;

			last_mouse_x = mouse_x;
			last_mouse_y = mouse_y;

			mouse_x = *pRegX; 
			mouse_y = *pRegY;	
			set_cursor(2, 15);

			if ((mouse_x != last_mouse_x) || (mouse_y != last_mouse_y)) {
				printf("mouse_x = %04u, mouse_y = %04u", mouse_x, mouse_y);
				grx_fillbox(mouse_x-4, mouse_y -4, mouse_x+4, mouse_y+4, 255, 0, 0);
				} else {
				//printf("*** NO MOVEMENT ***");
				}
			update_clock();

			
		  // printf("Testing read(0, &buffer, 15)\r\n");
		  memset(&buffer, 0, BUFSIZE);
  		n = read(0, &buffer, 1);
			//  puts("\r\n");
			if (n>0) {
				set_cursor(2,5);
	 			printf("read %d bytes, value=[0x%02x], char=[%c]\r\n", n, buffer[0], buffer[0]);
				switch (buffer[0]) {
					case 27:	/* ESC */
					if (esc_seq) {
							goto finish;
							} else {
							set_cursor(2,6);
							printf("ESC_SET\r\n");
							esc_seq = true;
							}
						break;
					default:
						if (esc_seq) {
								switch (buffer[0]) {
									case 0x5B:
										printf("5B->[%02x]\r\n", buffer[0], buffer[0]);
										break;
									case 'A':
									case 'B':
									case 'C':
									case 'D':
										set_cursor(2,7);
										printf("CURSOR MOVEMENT!\r\n");
										break;
									default:
										printf("ESC->[%02x]\r\n", buffer[0], buffer[0]);
										break;
									}
								}
						esc_seq = false;
						break;
				}
			}
	}

finish:
		/* turn off cursor */
		p[0] = 0x00;
		vt_setbold(false);
		vt_setfg(ANSI_FOREGROUND_WHITE);
		vt_setbg(ANSI_BACKGROUND_BLACK);
		clear_screen();
    exit(0);
}

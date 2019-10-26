#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <time.h>
#include <string.h>
#include <fcntl.h>
#include "libvt.h"

#define CHAR_ESCAPE 0x1B

#define BUFSIZE			16

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
		memset(&buffer, 0, BUFSIZE);

		vt_setbg(ANSI_BACKGROUND_BLUE);
		vt_setfg(ANSI_FOREGROUND_WHITE);
		vt_setbold(true);

    clear_screen();

		draw_box(0,0,80,2);
		draw_box(0,3,80,24);

		int flags = fcntl(0, F_GETFL, 0);
		// fcntl(fd, F_SETFL, flags | O_NONBLOCK);

		while (1) {
			int n = 0;
			update_clock();
		  // printf("Testing read(0, &buffer, 15)\r\n");
		  memset(&buffer, 0, BUFSIZE);
  		n = read(0, &buffer, 1);
			//  puts("\r\n");
			set_cursor(2,5);
 			printf("read %d bytes, string=[%s]\r\n", n, buffer);
			}

		vt_setbold(false);
		vt_setfg(ANSI_FOREGROUND_WHITE);
		vt_setbg(ANSI_BACKGROUND_BLACK);
		clear_screen();
    exit(0);
}

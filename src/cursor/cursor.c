#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>

struct termios orig_termios;

struct editorConfig {
  struct termios orig_termios;
};
struct editorConfig E;

void die(const char *s) {
	perror("tcgetattr");
	exit(1);
}


void disableRawMode() {
  if (tcsetattr(STDIN_FILENO, TCSAFLUSH, &E.orig_termios) == -1)
    die("tcsetattr");
}
void enableRawMode() {

  if (tcgetattr(STDIN_FILENO, &E.orig_termios) == -1) { 
			die("tcgetattr"); 
			}

  printf("tcflag_t c_iflag = %08x   /* input mode flags */\n\r", E.orig_termios.c_iflag);
  printf("tcflag_t c_oflag = %08x   /* output mode flags */\n\r", E.orig_termios.c_oflag);
	printf("tcflag_t c_cflag = %08x   /* control mode flags */\n\r", E.orig_termios.c_cflag);
//    tcflag_t c_lflag;   /* local mode flags */
//    cc_t c_line;      /* line discipline */
//    cc_t c_cc[NCCS];    /* control characters */
//    speed_t c_ispeed;   /* input speed */
//    speed_t c_ospeed;   /* output speed */

  //atexit(disableRawMode);
  struct termios raw = E.orig_termios;
  raw.c_iflag &= ~(BRKINT | ICRNL | INPCK | ISTRIP | IXON);
  raw.c_oflag &= ~(OPOST);
  raw.c_cflag |= (CS8);
  raw.c_lflag &= ~(ECHO | ICANON | IEXTEN | ISIG);
  raw.c_cc[VMIN] = 0;
  raw.c_cc[VTIME] = 1;
  if (tcsetattr(STDIN_FILENO, TCSAFLUSH, &raw) == -1) die("tcsetattr");
}

int getCursorPosition(int *rows, int *cols) {
  char buf[32];
  unsigned int i = 0;
  if (write(STDOUT_FILENO, "\x1b[6n", 4) != 4) return -1;
  while (i < sizeof(buf) - 1) {
    if (read(STDIN_FILENO, &buf[i], 1) != 1) break;
    if (buf[i] == 'R') break;
    i++;
  }
  buf[i] = '\0';
  if (buf[0] != '\x1b' || buf[1] != '[') return -1;
  if (sscanf(&buf[2], "%d;%d", rows, cols) != 2) return -1;
  return 0;
}


int main(int argc, char *argv[])
{
	int r, c;
	enableRawMode();
	getCursorPosition(&r, &c);
	printf("cursor position = (%d,%d)\n\r", c, r);
	disableRawMode();
}


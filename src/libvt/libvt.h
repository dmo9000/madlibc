
#define CHAR_ESCAPE 0x1B

void vt_cls ();
void set_cursor(int x, int y);
int draw_box(int x1, int y1, int x2, int y2);
void vt_echo(bool state);

#define UPPER_LEFT_CORNER		218
#define UPPER_RIGHT_CORNER 	191
#define LOWER_LEFT_CORNER		192
#define LOWER_RIGHT_CORNER	217
#define HORIZONTAL					196
#define VERTICAL						179

#define ANSI_BACKGROUND_BLACK			0
#define ANSI_BACKGROUND_RED	 			1
#define ANSI_BACKGROUND_GREEN	 		2
#define ANSI_BACKGROUND_YELLOW		3 
#define ANSI_BACKGROUND_BLUE 			4
#define ANSI_BACKGROUND_MAGENTA		5 
#define ANSI_BACKGROUND_CYAN			6
#define ANSI_BACKGROUND_WHITE	 		7

#define ANSI_FOREGROUND_BLACK			0
#define ANSI_FOREGROUND_RED	 			1
#define ANSI_FOREGROUND_GREEN	 		2
#define ANSI_FOREGROUND_YELLOW		3 
#define ANSI_FOREGROUND_BLUE 			4
#define ANSI_FOREGROUND_MAGENTA		5 
#define ANSI_FOREGROUND_CYAN			6
#define ANSI_FOREGROUND_WHITE	 		7


void vt_setbg(int b);
void vt_setfg(int f);
void vt_setbold(bool tf);


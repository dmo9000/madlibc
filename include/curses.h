#ifndef __CURSES_H__
#define __CURSES_H__

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

/* shamelessly stolen from fuzix */

/* Type declarations. */
typedef struct {
  int    _cury;     /* current pseudo-cursor */
  int    _curx;
  int    _maxy;     /* max coordinates */
  int    _maxx;
  int    _begy;     /* origin on screen */
  int    _begx;
  int    _flags;      /* window properties */
  int    _attrs;      /* attributes of written characters */
  int    _tabsize;      /* tab character size */
  bool     _clear;      /* causes clear at next refresh */
  bool     _leave;      /* leaves cursor as it happens */
  bool     _scroll;     /* allows window scrolling */
  bool     _nodelay;      /* input character wait flag */
  bool     _keypad;     /* flags keypad key mode active */
  int  **_line;     /* pointer to line pointer array */
  int   *_minchng;      /* First changed character in line */
  int   *_maxchng;      /* Last changed character in line */
  int    _regtop;     /* Top/bottom of scrolling region */
  int    _regbottom;
} WINDOW;

extern WINDOW *stdscr;			/* the default screen window */
extern WINDOW *curscr;			/* the current screen image */
extern int LINES;						/* terminal height */
extern int COLS;						/* terminal width */

#define ERR 1		/* general error flag */


#endif /* __CURSES_H__ */

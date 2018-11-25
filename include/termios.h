#define  B1200	0000011

struct termios
  {
    tcflag_t c_iflag;   /* input mode flags */
    tcflag_t c_oflag;   /* output mode flags */
    tcflag_t c_cflag;   /* control mode flags */
    tcflag_t c_lflag;   /* local mode flags */
    cc_t c_line;      /* line discipline */
    cc_t c_cc[NCCS];    /* control characters */
    speed_t c_ispeed;   /* input speed */
    speed_t c_ospeed;   /* output speed */
#define _HAVE_STRUCT_TERMIOS_C_ISPEED 1
#define _HAVE_STRUCT_TERMIOS_C_OSPEED 1
  };


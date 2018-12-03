#define  B1200	0000011
typedef unsigned int	speed_t;
#define NCCS 19
typedef unsigned char	cc_t;
typedef unsigned int	tcflag_t;

#define VERASE		2	/* Supported */
#define VKILL		4	/* Supported */


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


typedef struct termios TTY;

struct timeb
{
  time_t time;			/* Seconds since epoch, as from `time'.  */
  unsigned short int millitm;	/* Additional milliseconds.  */
  short int timezone;		/* Minutes west of GMT.  */
  short int dstflag;		/* Nonzero if Daylight Savings Time used.  */
};

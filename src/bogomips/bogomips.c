/*
 *                Standalone BogoMips program
 *
 * Based on code Linux kernel code in init/main.c and
 * include/linux/delay.h
 *
 * For more information on interpreting the results, see the BogoMIPS
 * Mini-HOWTO document.
 *
 * version: 1.3 
 *  author: Jeff Tranter (Jeff_Tranter@Mitel.COM)
 *
 * djm 20/3/2000
 * Made a little bit more relevent for 8 bit machines in the printing
 * stage...should be right!
 */
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

#define clock(n)	time(NULL)

#define PORTABLE_BOGOMIPS
 
int wallclocktime = 0;

#ifdef PORTABLE_BOGOMIPS
/* portable version */
static void delay(unsigned long loops)
{
  long i;
  //printf("delay(%lu)\n", loops);
  for (i = loops; i != 0 ; i--) 
    ;
}
#endif

/*
 * This is a chronic cheat! The code is completely different and runs
 * many times quicker..<ahem>
 *
 * We could just forget it really!
 */

/*
 *
unsigned int clock()
{
    //unsigned int *ptr = (unsigned char  *) 0xfffa;
    //unsigned int *ptr = 0x00f7;
    //unsigned int wallclocktime = (unsigned int ) *ptr;
    //unsigned int wallclocktime = 666; 
    wallclocktime = llclock(); 
    return wallclocktime;
}
*/

#define CLOCKS_PER_SEC 1 

int
main()
{
  unsigned long loops_per_sec = 1;
  unsigned long ticks;
  unsigned long bogo;
  unsigned long sub;


  printf("\nCalibrating delay loop.. ");
  //fflush(stdout);
  //
  
  while ((loops_per_sec <<= 1)) {
    ticks = clock();
    delay((unsigned long) loops_per_sec);
    ticks = clock() - ticks;
    if (ticks >= CLOCKS_PER_SEC) {
      loops_per_sec = (loops_per_sec / ticks) * CLOCKS_PER_SEC;
      bogo = loops_per_sec/500000L;
      sub = loops_per_sec/5000L;
      sub %=100;
      printf("\nok - %lu.%s%lu BogoMips\n\n",
			bogo,
			(sub<10)?"0":"",
			sub
		);
      return 0;
    }
  }

  printf("failed\r\n");
  return -1;
}

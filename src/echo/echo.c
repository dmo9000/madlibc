#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <termios.h>


int main (){


    struct termios termInfo, save;
    int c;

    c = tcgetattr(STDERR_FILENO, &termInfo);

    if(c == -1 ){
        perror("tcgetattr");
        exit(1);
    }
    if(termInfo.c_lflag & ECHO){
        printf("Echo is on for you, will turn it off! \n\r");
				termInfo.c_lflag &= ~((tcflag_t) ECHO);  /* turn off ECHO */	
        printf("Echo has been turned off! \n\r");
    }else{
        printf("Echo is off for you, will turn it on! \n\r");
				termInfo.c_lflag |= ECHO;  /* turn on ECHO */	
        printf("Echo has been turned on! \n\r");
    }
    c = tcsetattr(STDERR_FILENO, TCSAFLUSH, &termInfo);
	  printf("c = %d\n", c);
}

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <termios.h>
#include "libvt.h"


int main (int argc, char *argv[])
{
		char *state = argv[1];

		if (argc < 2 || argc > 3) {
				printf("usage: echo on | off\n\r");
				exit(1);
				}

		if (strncmp(state, "on", 2) == 0 && strlen(state) == 2) {
				vt_echo(true);
				exit(0);
				}

		if (strncmp(state, "off", 3) == 0 && strlen(state) == 3) {
				vt_echo(false);
				exit(0);
				}

		printf("unknown state: %s\n", state); 
		exit(1);

}

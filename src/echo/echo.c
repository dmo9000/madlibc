#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <termios.h>
#include "libvt.h"


int main (int argc, char *argv[])
{
		int i = 0;
		char *state = argv[1];

		if (argc < 2) {
				printf("usage: echo on | off | <text>\n\r");
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

    i = 1;
		while (argc > 1) {
			argc--;
			printf("%s ", argv[i]);
			i++;
			}
		printf("\n\r");
		exit(0);
}

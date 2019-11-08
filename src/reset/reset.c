#include <stdlib.h>
#include <stdio.h>
#include "libvt.h"

#define CHAR_ESCAPE 0x1B

int main()
{
		vt_setfg(7);
		vt_setbg(0);
    vt_cls();
    exit(0);
}

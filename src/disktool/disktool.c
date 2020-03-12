#include <stdlib.h>
#include <stdio.h>
#include "libvt.h"

#define CHAR_ESCAPE 0x1B

int main()
{
    vt_cls();
		blkdevseek(0, 0);
    exit(0);
}

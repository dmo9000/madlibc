#include "grx.h"

void grx_bufferswap()
{

		/* HACK: poke the graphics driver to tell it to refresh the buffer */

		  unsigned char *p = (unsigned char *) VIDEOBASE;
			p--;
			p[0] = 0;
}

#include "grx.h"

void grx_load_hardware_font()
{
		/* HACK: poke the graphics driver to tell it to refresh the buffer */
		  unsigned char *p = (unsigned char *) VIDEOBASE;
			p-=2;
			p[0] = 0;
}

void grx_bufferswap()
{

		/* HACK: poke the graphics driver to tell it to refresh the buffer */

		  unsigned char *p = (unsigned char *) VIDEOBASE;
			p--;
			p[0] = 0;
}

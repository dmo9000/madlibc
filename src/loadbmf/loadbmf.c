#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "libvt.h"
#include "bmf.h"

#define MAX_FONTDATA	2048

unsigned char fontdata[2048];

/*
bool bmf_loadfont(char *filename)
{

	BitmapFontHeader Header;
	FILE *infile = NULL;
	void *p = 0x20B4000;
	infile = fopen(filename, "rb");
	if (!infile) {
		perror("fopen");
		return false;
		}
	fread(&Header, 8, 1, infile);


	assert(Header.magic[0] == 'B');
	assert(Header.magic[1] == 'M');
	assert(Header.magic[2] == 'F');
	assert(Header.version == 0);
	assert(Header.px == 8);
	assert(Header.py == 8);
	assert(__builtin_bswap16(Header.glyphs) == 256);

	fread(p, 2048, 1, infile);
	grx_load_hardware_font();
	fclose(infile);

	return true;
}
*/


int main(int argc, char *argv[])
{
    char *bmf_font = NULL;
    if (argc < 2) {
	printf("usage: loadbmf <font-file>\n\r");
	exit(1);
	}

    bmf_font = argv[1];
    bmf_loadfont(bmf_font);

    exit(0);

}

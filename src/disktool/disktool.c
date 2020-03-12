#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include "blkdev.h"
#include "libvt.h"

#define BUFSIZE     16
#define BLOCK_SIZE 256
char sector_buffer[BLOCK_SIZE];
char buffer[BUFSIZE];

int main()
{
    uint8_t diskid = 0;
    off_t offset = 0x400;
    int i = 0, j = 0, n = 0;
    uint8_t c = 0;
    bool esc_seq = false;

    int flags = fcntl(0, F_GETFL, 0);
    int oldflags = flags;
    fcntl(0, F_SETFL, flags | O_NONBLOCK);
    flags = fcntl(0, F_GETFL, 0);

    vt_cls();
    set_cursor(1,1);
    draw_box(0,1,79,24);
 redraw:
    set_cursor(1,1);
    printf("disk: %u offset: 0x%08lx\n\r", diskid, offset);
    set_cursor(1,18);
    blkdevseek(0, offset);
    memset(&sector_buffer, 0, BLOCK_SIZE);
    blkdevread(0, (char *) &sector_buffer, BLOCK_SIZE);

    for (i = 0 ; i < 16; i++) {
        /* hexdecimal */
        set_cursor(3, 3+i);
        for (j = 0; j < 16; j++) {
            c = sector_buffer[(i*16)+j];
            printf("%02x ", c);
        }
        printf("  ");
        /* ASCII */
        for (j = 0; j < 16; j++) {
            c = sector_buffer[(i*16)+j];
            if (c>=32 && c <= 127) {
                putchar(c);
            } else {
                putchar('.');
            }
        }
    }

input_loop:
    memset(&buffer, 0, BUFSIZE);
    n = read(0, &buffer, 1);
    if (n>0) {
        switch (buffer[0]) {
        case 27:  /* ESC */
            if (esc_seq) {
                goto finish;
            } else {
                esc_seq = true;
            }
            break;
        default:
            if (esc_seq) {
                switch (buffer[0]) {
                case 0x5B:
                    set_cursor(45, 1);
                    //printf("5B->[%02x]\r\n", buffer[0]);
                    esc_seq = false;
                    break;
                case 'A':
                case 'B':
                case 'C':
                case 'D':
                    set_cursor(15, 1);
                    printf("CURSOR MOVEMENT: %c", buffer[0]);
                    exit(1);
                    break;
                default:
                    set_cursor(15, 1);
                    printf("ESC->[%02x]\r\n", buffer[0]);
                    break;
                }
            } else {

                    set_cursor(30, 1);
                    //printf("INP->[%02x]\r\n", buffer[0]);
										switch(buffer[0]) {
												case 0x44:
													if (offset >= 256) {
														offset -= 256;
														}
													goto redraw;
													break;
												case 0x43:
													offset += 256;
													goto redraw;
													break;
												}
			
						}
            esc_seq = false;
            break;
        }
    }
    goto input_loop;

finish:
    fcntl(0, F_SETFL, oldflags);
    vt_cls();
    printf("n = %d\n", n);
    exit(0);
}

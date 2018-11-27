#include "unistd.h"
#include <stdio.h>

#define CPM_EXIT        (0xff7ffc)


void do_exit(int d)
{
    unsigned int * p = (unsigned int *)((char *)CPM_EXIT);
    p[0] = d;
    while (1) { }
}

void exit(int d)
{
    /* TODO: set a field in the bdvt header with the exit code */
//    puts("\r\n");
    int (*re_enter_bdos)();
    re_enter_bdos=(void *) 0x500;
    re_enter_bdos();
}


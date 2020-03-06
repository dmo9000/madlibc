#include "bdos.h"
#include <stdio.h>
#include <time.h>
#include "string.h"
#include "assert.h"
#include "sbrk.h"

extern void *_end;


extern int errno;
extern int main(int argc, char *argv[]);

_bdos_vtable *bdvt = NULL;

#define MIN_BDOS_VER 36

int _start(int argc, char *argv[])  __attribute__((section(".start")));

int _start(int argc, char *argv[])
{
    void *heap_marker = NULL;
    void *heap_marker2 = NULL;
    bdvt = (_bdos_vtable *) 0x400;
    heap_marker = get_heap_marker();
    heap_marker2 = _end;
#ifdef DEBUG
    printf("*** _start() *** bdvt->magic = 0x%08lx, heap_marker = 0x%08lx, _end = 0x%08lx\r\n", bdvt->magic, heap_marker, &_end);
#endif /* DEBUG */
    assert(bdvt->magic == 0xf0e0f0e0);

    init_heap();
    init_stdio();

    if (bdvt->ver_rev < MIN_BDOS_VER) {
        printf("This program requires BDOS v0.0.%u to run.\n\r", MIN_BDOS_VER);
        return 0;
    }
    return main(argc, argv);

}

int _bdos_geterrno()
{
//    errno = bdvt->errno;
    return bdvt->errno;
}

int _bdos_seterrno(int e)
{
    bdvt->errno = e;
//    errno = e;
    return bdvt->errno;
}

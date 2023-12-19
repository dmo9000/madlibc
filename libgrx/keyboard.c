#include <fcntl.h>

int oldflags;

void grx_kb_raw()
{
    int flags;
    static int oldflags;

    flags = fcntl(0, F_GETFL, 0);
    oldflags = flags;
    fcntl(0, F_SETFL, flags | O_NONBLOCK);
    flags = fcntl(0, F_GETFL, 0);
}


void grx_kb_cooked()
{
    fcntl(0, F_SETFL, oldflags);
}

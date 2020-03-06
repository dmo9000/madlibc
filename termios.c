#include <stdio.h>
#include <unistd.h>
#include <termios.h>
#include <bdos.h>
#include <errno.h>

extern _bdos_vtable *bdvt;

int tcgetattr(int fd, struct termios *termios_p)
{
    printf("tcgetattr(%d, 0x%08x)\n", fd, termios_p);

    if (fd > STDERR_FILENO) {
        set_errno(ENOTTY);
        return -1;
    }
    return bdvt->_tcgetattr(fd, termios_p);
}

int tcsetattr(int fd, int optional_actions, const struct termios *termios_p)
{
    return bdvt->_tcsetattr(fd, optional_actions, termios_p);
}


#include "adventure.h"

uint16_t saved_room = 1;
extern uint16_t current_room;

int verb_exit(char *t)
{
    return process_input("exit");
}

int verb_enter(char *t)
{
    return process_input("enter");
}

int verb_go(char *t)
{

    printf("verb_go(%s)\n", t);
    return 0;
    //process_input("enter");
}

int verb_north(char *t)
{

    return process_input("n");
}

int verb_east(char *t)
{

    return process_input("e");
}


int verb_south(char *t)
{

    return process_input("s");
}

int verb_west(char *t)
{

    return process_input("w");
}



int verb_debug_in(char *t)
{
    if (current_room == 0) {
        printf("You are already in the debugging room.\n\r");
        return 0;
    }
    saved_room = current_room;
    current_room = 0;
    load_current_room(current_room);
    return 0;
}

int verb_debug_out(char *t)
{

    if (saved_room == 0) {
        printf("You haven't been anywhere yet.\n\r");
        return 0;
    }
    if (current_room != 0) {
        printf("You are not in the debugging room.\n\r");
        return 0;
    }
    current_room = saved_room;
    load_current_room(current_room);
    return 0;
}

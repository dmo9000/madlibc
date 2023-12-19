#include "adventure.h"

verb_description verb_list[] = {
    {   0, "dummy", NULL },
    {   1, "i", verb_inventory },
    {   2, "inv", verb_inventory },
    {   3, "inventory", verb_inventory },
    {   4, "exit", verb_exit },
    {   5, "enter", verb_enter },
    {   6, "debug-in", verb_debug_in },
    {   7, "debug-out", verb_debug_out },
    {   8, "get", verb_acquire },
    {   9, "take", verb_acquire },
    {   10, "acquire", verb_acquire },
    {   11, "go", verb_go },
    {   12, "north", verb_north },
    {   13, "east", verb_east },
    {   14, "south", verb_south },
    {   15, "west", verb_west },
    {   16, "n", verb_north },
    {   17, "e", verb_east },
    {   18, "s", verb_south },
    {   19, "w", verb_west },
    {   20, "quit", verb_quit },
    {   65535,  NULL, NULL }
};


uint16_t isVerb(char *t)
{
    uint16_t v = 0;
    //printf("isVerb(%s)\n", t);
    for (uint16_t o = 0; o < MAX_VERBS; o++) {
        assert(&verb_list[o]);
        if (verb_list[o].name == NULL) {
            return 0;
        }

        //printf("check -> [%s:%s]\n", t, verb_list[o].name);

        if (strlen(t) == strlen(verb_list[o].name)) {
            //printf("%u: length match (%u:%u)\r\n", verb_list[o].verbid, strlen(t), strlen(verb_list[o].name));
            if (strcmp(t, verb_list[o].name) == 0) {
                //printf("%u: verb match! [%s]\n", verb_list[o].verbid, verb_list[o].name);
                v = verb_list[o].verbid;
                //printf("returning verb %u\n", v);
                return (uint16_t) v;
            }
        } else {
            //printf("%u: Length mismatch (%u:%u)\r\n", o, strlen(t), strlen(verb_list[o].name));
        }
    }
    return 0;
}

int (*verb_functionpointer(uint16_t t))(char *)
{
    return(verb_list[t].ptr);
}

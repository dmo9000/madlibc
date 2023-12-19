#include "adventure.h"

extern obj_description obj_list[];

int verb_inventory(char *t)
{
    uint16_t items_held = 0;
    uint16_t o = 0 ;
    obj_description *obj = NULL;

    //printf("verb_inventory(%s)\n\r", t);

    for (o = 0; o < MAX_OBJECTS ; o++ ) {
        if (obj_list[o].name == NULL) {
            /* bail out at end of list */
        } else {
            obj = &obj_list[o];
            if (obj->contained && obj->locationid == 0) {
                // printf("   %s %s\n\r", ( isvowel(obj_list[o].name[0]) ? "an" : "a"), obj_list[o].name);
                items_held++;
            }
        }
    }

    printf("You are carrying %s\n\r\n\r", ( items_held ? "the following items:" : "nothing."));
    if (!items_held) {
	return 0;
	}

    for (o = 0; o < MAX_OBJECTS ; o++ ) {
        if (obj_list[o].name == NULL) {
            /* bail out at end of list */
        } else {
            obj = &obj_list[o];
            if (obj->contained && obj->locationid == 0) {
                printf("   (%u) %s %s\n\r", obj_list[o].objid, ( isvowel(obj_list[o].name[0]) ? "an" : "a"), obj_list[o].name);
            }
        }
    }

    printf("\n\r\n\r");

    return items_held;
}

int verb_acquire(char *t)
{
    obj_description *obj = NULL;
    char *my_token = NULL;
    char *next_token = NULL;
    //printf("acquire(%s)\n\r", t);
    next_token = t;
    my_token = parseToken(next_token);
    while (my_token[0] == ' ') {
        next_token++;
        /* chomp whitespace */
        my_token = parseToken(next_token);
    }
    //printf("my_token = [%s]\n\r", my_token);
    obj = object_by_name(my_token);
    assert(obj);
    //printf("description -> %s\n", obj->examine_description);
    if (!obj->takeable) {
        printf("You can't take the %s.\n\r");
        return 0;
    }

    /* put it in player inventory */

    obj->locationid = 0;
    obj->contained = true;
    printf("(Taken.)\n\r\n\r");

    return 0;
}

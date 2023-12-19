#include "adventure.h"

obj_description obj_list[] = {

    {   0, 0, "leaflet",
        "You can see a %s lying around on the floor here.",
        "It's a leaflet with lots of debugging gobbledeygook inside.",
        false, true, true, 0.1,
        "Welcome to the NULL room! This is a room for debugging and testing game actions."
    },
    {   1, 2, "trophycase",
        "There is a %s propped against a wall here.",
        "It's a trophy case. The doors are jammed shut.",
        false, false, false, 100.0,
        NULL
    },
    { 0, 0, NULL, NULL, NULL, false, false, false, 0.0, NULL }

};

obj_description* object_by_name(char *s)
{
    uint16_t o = 0 ;

    printf("object_by_name(%s)\n\r", s);

    for (o = 0; o < MAX_OBJECTS ; o++ ) {
        if (obj_list[o].name == NULL) {
            /* bail out at end of list */
            return NULL;
        }
        if (strlen(s) == strlen(obj_list[o].name)) {
            if (strcmp(s, obj_list[o].name) == 0) {
                return &obj_list[o];
            }
        }
    }
    return NULL;
}

void list_objects_in_room(uint16_t r)
{
    uint16_t o = 0 ;

    //printf("list_objects_in_room(%u)\n\r", r);

    for (o = 0; o < MAX_OBJECTS ; o++ ) {
        if (obj_list[o].name == NULL) {
            /* bail out at end of list */
            return;
        }
        if (obj_list[o].locationid == r) {
            if (!obj_list[o].contained) {
                if (obj_list[o].unseen_description) {
                    printf(obj_list[o].unseen_description, obj_list[o].name);
                    printf("\n\r");
                    /* strip the custom unseen message */
                    obj_list[o].unseen_description = NULL;
                } else {
                    printf("There is %s %s here.\n\r", ( isvowel(obj_list[o].name[0]) ? "an" : "a"), obj_list[o].name);
                }
            }
        }
    }

    return;
}


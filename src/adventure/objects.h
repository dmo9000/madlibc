#define MAX_OBJECTS	65535

typedef struct obj_description {
    uint16_t objid;
    uint16_t locationid;
    char *name;
    char *unseen_description;
    char *examine_description;
    /* flags */
    bool contained;             /* if set, locationid above refers to an objid, and not a roomid */
    bool takeable;
    bool readble;
    /* data */
    double weight;
    char *readable_text;
} obj_description;


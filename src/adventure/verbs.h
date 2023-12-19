#ifndef __VERBS_H__
#define __VERBS_H__

#define MAX_VERBS	65535

typedef struct verb_description {
    uint16_t verbid;
    char *name;
    int (*ptr)(char *s);
} verb_description;


int verb_inventory(char *s);
int verb_exit(char *s);
int verb_enter(char *s);
int verb_debug_in(char *s);
int verb_debug_out(char *s);
int verb_go(char *s);
int verb_acquire(char *s);

int verb_north(char *s);
int verb_south(char *s);
int verb_east(char *s);
int verb_west(char *s);
int verb_quit(char *s);

#endif /* __VERBS_H__ */

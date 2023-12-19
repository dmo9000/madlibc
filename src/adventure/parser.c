#include "adventure.h"

#define MAX_TOKENLENGTH	2048

char current_token[MAX_TOKENLENGTH];

char *parseToken(char *s)
{

    static char *p = NULL;
    memset(current_token, 0, MAX_TOKENLENGTH);
    for (int i = 0; i < MAX_TOKENLENGTH; i++) {
        switch(s[i]) {
        case '\t':
        case ' ':
            p = &current_token;
            if (strlen(p)) {
                return p;
            }
            return " ";
            break;
        case '\r':
        case '\n':
            p = &current_token;
            if (strlen(p)) {
                return p;
            }
            return "<newline>";
            break;
        case 0:
            p = &current_token;
            return p;
            break;

        default:
            current_token[i] = s[i];
            break;
        }
    }

    return p;
}

int parse(char *s)
{
    int (*verb_ptr)();
    char *my_token = NULL;
    char *next_token = NULL;
    uint16_t verb_id = 0;
    //printf("parse: %s\n", s);
    my_token = parseToken(s);
    assert(my_token);
    next_token = s+strlen(my_token);
    //printf("token=[%s] remain=[%s]\n\r", my_token, next_token);
    verb_id = isVerb(my_token);
    //printf("verb -> id=%lu\n", verb_id);
    if (!verb_id) {
        printf("I don't know how to '%s'.\n\r", my_token);
        return 0;
    }
    verb_ptr = verb_functionpointer(verb_id);
    assert(verb_ptr);
    return verb_ptr(next_token);
}

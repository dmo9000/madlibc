#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <sys/stat.h>


struct _linklist {
    char *string;
    struct _linklist *next;
};

typedef struct _linklist linklist;

void usage()
{
    printf("usage: which <program>\n\r");
}

int main(int argc, char *argv[])
{
    struct stat sbuf;
    char *path = NULL;
    char *path_ptr = NULL;
    char *sep_ptr = NULL;
    linklist *root_node = NULL;
    linklist *last_node = NULL;
    linklist *new_node = NULL;
    char *filename = NULL;

    if (argc < 2) {
        usage();
        exit(1);
    }

    path = getenv("PATH");
    assert(path);
    assert(strlen(path));

    path_ptr = strdup(path);
    sep_ptr = strchr(path_ptr, ':');

    while (sep_ptr) {
        new_node = malloc(sizeof(linklist));
        sep_ptr[0] = '\0';
        new_node->string = strdup(path_ptr);
        if (! root_node) {
            root_node = new_node;
            last_node = root_node;
        } else {
            assert(last_node);
            last_node->next = new_node;
        }
        last_node = new_node;
        path_ptr = sep_ptr+1;
        sep_ptr = strchr(path_ptr, ':');
    };
    new_node = malloc(sizeof(linklist));
    new_node->string = strdup(path_ptr);
    if (! root_node) {
        root_node = new_node;
        last_node = root_node;
    } else {
        assert(last_node);
        last_node->next = new_node;
    }

    /* walk the list */

    last_node = root_node;
    assert(last_node);

    while (last_node) {
        filename = malloc(strlen(last_node->string) + strlen(argv[1]) + 2);
        snprintf(filename, strlen(last_node->string) + strlen(argv[1]) + 2, "%s/%s", last_node->string, argv[1]);
        if (stat(filename, &sbuf) == 0) {
            /* found */
            printf("%s\n\r", filename);
            exit(0);
        };
        last_node = last_node->next;
    }

    printf("%s: no %s in (%s)\n\r", argv[0], argv[1], path);

    exit(1);

}

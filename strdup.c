#include <string.h>

char *strdup (char *s) {
    char *r;

    if ((r = (char *)malloc(strlen(s) + 1)) == NULL) {
      perror ("Malloc cannot allocate enough memory for a new string.\n");
      exit (2);
    }
    strcpy (r, s);
    return r;
}

#define NULL 0

char *strchr(const char *s, int c)
{
    int l = 0;
    int i = 0;

    l = strlen(s);

    for (i = 0; i< l; i++)
    {
        if (s[0] == c) {
            return s;
        }
        s++;
    }
    return NULL;
}

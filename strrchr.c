
char *
strrchr (s, c)
register const char *s;
int c;
{
    char *rtnval = 0;

    do {
        if (*s == c)
            rtnval = (char*) s;
    } while (*s++);
    return (rtnval);
}

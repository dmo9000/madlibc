
/*
 * From: gwyn@brl-tgr.ARPA (Doug Gwyn <gwyn>) Newsgroups: net.sources
 * Subject: getopt library routine Date: 30 Mar 85 04:45:33 GMT
 */
/*
 * getopt -- public domain version of standard System V routine
 *
 * Strictly enforces the System V Command Syntax Standard; provided by D A
 * Gwyn of BRL for generic ANSI C implementations
 *
 * #define STRICT to prevent acceptance of clustered options with arguments
 * and ommision of whitespace between option and arg.
 */

#include <stdio.h>
#include <string.h>

int   opterr = 1;		/* error => print message */
int   optind = 1;		/* next argv[] index */
const char *optarg = NULL;	/* option parameter if any */
int optopt;

static int Err(const char *name, const char *mess, int c)
/* returns '?' */
{
    if (opterr)
    {
        (void) fprintf(stderr,
                       "%s: %s -- %c\n",
                       name, mess, c
                      );
    }
    return '?';			/* erroneous-option marker */
}

/* Moved out of function to stop SDCC generating loads of setup crap */
static int sp = 1;		/* position within argument */

int getopt(int argc, const char *argv[], const char *optstring)
/* returns letter, '?', EOF */
{
    register int osp;		/* saved `sp' for param test */
#ifndef STRICT
    register int oind;		/* saved `optind' for param test */
#endif
    register int c;		/* option letter */
    register char *cp;		/* -> option in `optstring' */

    optarg = NULL;

    //printf("getopt(%d, ..., %s)\n", argc, optstring);

    if (sp == 1) {			/* fresh argument */
        //printf("getopt -> fresh argument (%d/%d, ..., %s) -> %s\n\r", optind, argc, optstring, argv[optind]);
        if (optind >= argc	/* no more arguments */
                || argv[optind][0] != '-'	/* no more options */
                || argv[optind][1] == '\0'	/* not option; stdin */
           ) {
            //printf("getopt -> no more arguments (%d/%d, ..., %s)\n\r", optind, argc, optstring);
            return EOF;
        }
    }

    if (strcmp(argv[optind], "--") == 0)
    {
        //printf("getopt -> argument was -- (%d/%d, ..., %s)\n\r", optind, argc, optstring);
        ++optind;		/* skip over "--" */
        return EOF;		/* "--" marks end of options */
    }

    c = argv[optind][sp];	/* option letter */
    //printf("%d [%s] option letter = %d [%c]\r\n", optind, argv[optind], c, c);
    osp = sp++;			/* get ready for next letter */

#ifndef STRICT
    oind = optind;		/* save optind for param test */
#endif
    if (argv[optind][sp] == '\0')/* end of argument */
    {
        //printf("end of argument\n\r");
        ++optind;			/* get ready for next try */
        sp = 1;			/* beginning of next argument */
    }

    optopt = c;

    if (c == ':' || c == '?'	/* optstring syntax conflict */
            || (cp = strchr(optstring, c)) == NULL	/* not found */
       ) {
        //printf("ILLEGAL OPTION %c\n", c);
        //return Err(argv[0], "illegal option", c);
        /* handle this here, for now since Err() uses fprintf() which is currently busted */
        return '?';
    }

    if (cp[1] == ':')		/* option takes parameter */
    {
        if (oind == optind)	/* argument w/o whitespace */
        {
            printf("getopt.c: option w/o whitespace\n\r");
            while (1) { }
            optarg = &argv[optind][sp];
            sp = 1;		/* beginning of next argument */
        }

        else if (optind >= argc) {
            /* handle this here, for now since Err() uses fprintf() which is currently busted */
            return ':';
            return Err(argv[0],
                       "option requires an argument",
                       c
                      );

        } else	{		/* argument w/ whitespace */
            //printf("getopt.c: option with whitespace\n\r");
            optarg = argv[optind];
        }

        ++optind;			/* skip over parameter */
    }

    return c;
}

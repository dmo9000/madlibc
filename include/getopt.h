#ifndef __GETOPT_H
#define __GETOPT_H

extern char *optarg;
extern int opterr;
extern int optind;
extern int optopt;

extern int getopt(int __argc, char **__argv, char *__shortopts);

#endif /* __GETOPT_H */

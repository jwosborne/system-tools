#ifndef STDIO_H
#define STDIO_H
#include <stdio.h>
#endif

#ifndef STDBOOL_H
#define STDBOOL_H
#include <stdbool.h>
#endif

#ifndef STRING_H
#define STRING_H
#include <string.h>
#endif

#ifndef STDLIB_H
#define STDLIB_H
#include <stdlib.h>
#endif

#ifndef NEGATE
#define NEGATE "^"
#endif

#ifndef MAXSTR
#define MAXSTR 100
#endif

int str_index(const char * str, int c);
int xindex(char *inset, char c, bool allbut, int lastto);
void translit(int argc, char const *argv[]);
//bool makeset(char *inset, int k, char *outset, int maxset);
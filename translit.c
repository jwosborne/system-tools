#include "translit.h"

/* translit -- map characters */
void translit(int argc, char const *argv[])
{
    char fromset[MAXSTR], toset[MAXSTR];
    char c;
    char e;
    int i, lastto;
    bool allbut, squash;

    if (argc != 2 && argc != 3) {
        printf("usage: translit from to\n");
        exit(EXIT_FAILURE);
    }
    else if (strlen(argv[1]) > MAXSTR) {
        printf("translit \"from\" set too large\n");
        exit(EXIT_FAILURE);
    }
    else if (argc == 2) {
        strcpy(toset, "\0");
    }
    else if (strlen(argv[2]) > MAXSTR) {
        printf("translit \"to\" set too large\n");
        exit(EXIT_FAILURE);
    }
    else if (strlen(argv[1]) < strlen(argv[2])) {
        printf("translit: \"form\" shorter than \"to\"\n");
        exit(EXIT_FAILURE);
    }
    else if (argc == 3) {
        strcpy(toset, argv[2]);
    }

    strcpy(fromset, argv[1]);
    allbut = (argv[1] == NEGATE);

    lastto = strlen(toset) + 1;
    squash = (strlen(fromset) > lastto);
    do {
        i = xindex(fromset, c = getchar(), allbut, lastto);
        // if (squash >= lastto && i >= lastto) { /* squash */
        //     putchar(toset[lastto]);
        //     do {
        //         i = *strchr(fromset, (c = getchar()));
        //     } while (i < lastto);
        // }
        if (c != EOF) {
            if (i > 0) { /* translate */
                putchar(toset[i-1]);
            }
            else if (i == 0) { /* copy */
                putchar(c);
            }
            /* else delete */
        }
    } while (c != EOF);
}

/* strpos -- find position of character c in string s */
int strpos(const char * str, int c) {
    int i;

    i = 0;
    while (str[i] != c && str[i] != '\n' && i < MAXSTR) {
        ++i;
    }
    if (str[i] == '\n' || i == MAXSTR) {
        return 0;
    }
    else {
        return i + 1;
    }
}

/* xindex -- conditionally invert value from index */
int xindex(char *inset, char c, bool allbut, int lastto)
{
    if (c == EOF) {
        return 0;
    }
    else if (!allbut) {
        return (strpos(inset, c));
    }
    else if (strpos(inset, c)) {
        return 0;
    }
    else {
        return lastto + 1;
    }
}


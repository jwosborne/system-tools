#include "putrep.h"

/* putrep -- put out representation of run of n 'c's */
void putrep(int n, char c)
{
    static const int MAXREP = 52; /* assuming 'A' .. 'Z' */
    static const int THRESH = 4;

    while ((n >= THRESH) || ((c == WARNING) && (n > 0))) {
        putchar(WARNING);
        if (n <= 26) {
            putchar(min(n, MAXREP) - 1 + 'A');
        }
        else {
            putchar(min(n, MAXREP) - 27 + 'a');
        }
        putchar(c);
        n -= MAXREP;
    }
    for (int i = n; i > 0; --i) {
        putchar(c);
    }
}

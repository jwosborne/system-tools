#include "compress.h"

/* compress -- compress standard input */
void compress(void)
{
    int n = 1;
    char c, lastc;

    /* start with one character */
    lastc = getchar();

    while (lastc != EOF) {
        if ((c = getchar()) == EOF) {
            if ((n > 1) || (lastc == WARNING)) {
                putrep(n, lastc);
            }
            else {
                putchar(lastc);
            }
        }
        else if (c == lastc) {
            ++n;
        }
        else if ((n > 1) || (lastc == WARNING)) {
            putrep(n, lastc);
            n = 1;
        }
        else {
            putchar(lastc);
        }
        lastc = c;
    }
}

/* putrep -- put out representation of run of n 'c's */
void putrep(int n, char c)
{
    const int MAXREP = 52; /* assuming 'A' .. 'Z' */
    const int THRESH = 4;
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

/* min -- compute minimum of two integers */
int min(int x, int y) 
{
    if (x < y) {
        return x;
    }
    else {
        return y;
    }
}

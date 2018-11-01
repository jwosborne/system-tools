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

#include "putdec.h"

/* putdec -- put decimal integer n in string width >= w */
void putdec(int n, int w)
{
    int i, nd;
    char s[w];

    nd = my_itoc(n, s, 0);
    for (i = nd; i < w; i++) {
        putchar(' ');
    }
    for (int i = 0; i < nd; i++) {
        putchar(s[i]);
    }
}

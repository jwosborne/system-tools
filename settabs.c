#include "settabs.h"

/* settabs -- set initial tab stops */
void settabs(bool tabstops[MAXLINE])
{
    int i;
    for (i = 1; i < MAXLINE; ++i) {
        tabstops[i] = ((i % TABSPACE) == 1);
    }
}

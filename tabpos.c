#include "tabpos.h"

/* tabpos -- return true if col is a tab stop */
bool tabpos(int col, bool tabstops[MAXLINE])
{
    if (col > MAXLINE) {
        return true;
    }
    else {
        return tabstops[col];
    }
}

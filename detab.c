#include "detab.h"

/* detab -- convert tabs to equivalent number of blanks */
void detab(void)
{
    char c;
    int col = 1;
    bool tabstops[MAXLINE];

    settabs(tabstops); /* set initial tab stops */

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            do {
                //printf("%d", col);
                putchar(' ');
                ++col;    
            } while(!tabpos(col, tabstops));
        }
        else if (c == '\n') {
            putchar('\n');
            col = 1;
        }
        else  {
            putchar(c);
            ++col;
        }
    }
}

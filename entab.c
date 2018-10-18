#include "entab.h"

/* replace blanks by tabs and blanks */
void entab(void)
{
    int col = 1, newcol;
    char c;
    bool tabstops[MAXLINE];

    settabs(tabstops);
    do {
        newcol = col;

        /* collect blanks */
        while ((c = getchar()) == ' ') {
            ++newcol;
            if (tabpos(newcol, tabstops)) {
                putchar('\t');
                col = newcol;
            }
        }

        /* output leftover blanks */ 
        while (col < newcol) {
            putchar(' ');
            ++col;
        }

        /* c is now ENDFILE or non blank */
        if (c != EOF) {
            putchar(c);
            if (c == '\n') {
                col = 1;
            }
            else {
                ++col;
            }
        }
    } while (c != EOF);
}

#include <stdio.h>
#include <stdbool.h>

#define MAXLINE 1000
#define TABSPACE 8

void detab(void);
bool tabpos(int col, bool tabstops[MAXLINE]);
void settabs(bool tabstops[MAXLINE]);

/* driver */
int main(void)
{
    detab();
    return 0;
}

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
/* settabs -- set initial tab stops */
void settabs(bool tabstops[MAXLINE])
{
    int i;
    for (i = 1; i < MAXLINE; ++i) {
        tabstops[i] = ((i % TABSPACE) == 1);
    }
}
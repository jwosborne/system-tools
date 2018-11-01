#include "linecount.h"

/* linecount -- count lines in standard input */
void linecount(void)
{
    char c;
    int nl = 0;
    
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++nl;
        }
    }
    printf("%d\n", nl);
}

#include "charcount.h"

/* charcount -- count characters in standard input */
void charcount(void)
{
    char c;
    int nc = 0;

    while ((c = getchar()) != EOF) {
        nc++;
    }
    printf("%d\n", nc);
}

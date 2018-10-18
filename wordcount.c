#include "wordcount.h"

/* wordcount -- count words in standard input */
void wordcount(void)
{
    char c;
    int nw = 0;
    bool inword = false;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            inword = false;
        } else if (!inword) {
            inword = true;
            nw++;
        }
    }
    printf("%d\n", nw);
}

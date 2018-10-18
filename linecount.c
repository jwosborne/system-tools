#include <stdio.h>

void linecount(void);

/* driver */
int main(void)
{
    linecount();
    return 0;
}

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
    printf("\n%d\n", nl);
}


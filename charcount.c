#include <stdio.h>

void linecount(void);

/* driver */
int main(void)
{
    linecount();
    return 0;
}

/* charcount -- count characters in standard input */
void linecount(void)
{
    char c;
    int n1 = 0;
    while ((c = getchar()) != EOF) {
        n1++;
    }
    printf("\n%d\n", n1);
}

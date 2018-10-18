#include <stdio.h>

void copy(void);

int main(void)
{
    copy();
    return 0;
}

/* copy -- copy input to output */
void copy(void)
{
    char c;
    while ((c = getchar()) != EOF) {
        putchar(c);
    }
}

#include "copy.h"

/* copy -- copy input to output */
void copy(void)
{
    char c;
    while ((c = getchar()) != EOF) {
        putchar(c);
    }
}

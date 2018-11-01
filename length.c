#include "length.h"

int length(char* s)
{
    int n = 1;

    while (s[n] != '\0') {
        ++n;
    }
    return n;
}

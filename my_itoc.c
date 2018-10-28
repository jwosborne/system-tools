#include "my_itoc.h"

/* convert integer n to char string in s[i]... */
void my_itoc(int n, char* str, int i)
{
    snprintf(str, i, "%d", n);
}
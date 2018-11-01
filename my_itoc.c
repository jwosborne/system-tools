#include "my_itoc.h"

/* convert integer n to char string in s[i]... */
int my_itoc(int n, char* s, int i)
{
    if (n < 0) {
        s[i] = '-';
        return my_itoc(-n, s, i + 1); 
    }
    else {
        if (n >= 10) {
            i = my_itoc(n / 10, s, i);
        }
        s[i] = (n % 10) + '0';
        s[i+1] = '\0';
        return i + 1;
    }
}

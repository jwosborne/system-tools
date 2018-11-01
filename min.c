#include "min.h"

/* min -- compute minimum of two integers */
int min(int x, int y) 
{
    if (x < y) {
        return x;
    }
    else {
        return y;
    }
}
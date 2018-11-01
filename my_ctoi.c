#include "my_ctoi.h"

/* ctoi -- convert string at s[i] to int, increment i */
int my_ctoi(char *s)
{
    int res = 0; 
    int sign = 1;
    int i = 0;
       
    // If number is negative, then update sign 
    if (s[0] == '-') 
    { 
        sign = -1;   
        i++;  // Also update index of first digit 
    } 
       
    // Iterate through all digits and update the result 
    for (; s[i] != '\0'; ++i) 
        res = res*10 + s[i] - '0'; 
     
    // Return result with sign 
    return sign*res; 
}

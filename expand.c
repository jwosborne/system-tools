#include "expand.h"

void expand(void)
{
    char c;
    int n;
    // we need input validation
    while ((c = getchar()) != EOF) {
        if (c != WARNING) {
            putchar(c);
        }
        else if (isupper(c = getchar())) { /*check if char is upper */
            n = (c - 'A' + 1);
            if ((c = getchar()) != EOF) {
                for (int i = n; i > 0; --i) {
                    putchar(c);
                }
            }
            else {
                putchar(WARNING);
                putchar(n - 1 + 'A');
            }
        }
        else if (islower(c)) { /* check if char is lower */
            n = c - 'a' + 27;
            if ((c = getchar()) != EOF) {
                for (int i = n; i > 0; --i) {
                    putchar(c);
                }
            }
            else {
                putchar(WARNING);
                putchar(n - 27 + 'a');
            }
        }
        else { /* if neither lower or upper handle error */
            putchar(WARNING);
            if (c != EOF) {
                putchar(c);
            }
        }
    }
}

#include "echo.h"

/* echo -- echo  command line arguments to output */
void echo(int argc, char const *argv[])
{
    if (argc <= 1) {
        printf("\n");
    }
    else {
        for (int i = 1; i < argc; i++) {
            printf("%s", argv[i]);

            if(i < argc - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
}
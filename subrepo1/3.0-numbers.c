#include <stdio.h>
#include <stdlib.h>

/*
 * code with initial duty to print
 * lower case letters
 * return (0)
 */

int main(void)
{
        int x = 'c';

        for (x = 'c'; x <= 'z'; x++)
        {
                printf("%c\n", x);
        }
        printf("\n");
        return (0);
}

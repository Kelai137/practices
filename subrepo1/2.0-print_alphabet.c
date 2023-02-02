#include <stdio.h>
#include <stdlib.h>

/*
 * code with initial duty to print
 * lower case letters
 * return (0)
 */

int main(void)
{
	char x = 'a';

	for (x = 'a'; x <= 'z'; x++)
	{
		printf("%c\n", x);
	}
	printf("\n");
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * all code is in main function
 * should print lower case letter first
 * then upper case letters last
 *
 * return (0).
 */

int main(void)
{
	char x = 'a';
	char y = 'A';

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);

	for (y = 'A'; y <= 'Z'; y++)
		putchar(y);

	putchar('\n');
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main- program to print alphabet in reverse
 * print alphabet in a reverse  order
 * prints alphabet in lower case letters
 *
 * retun 0.
 */
int main(void)
{
	char X;

	X = 'z';

	{
	for (X = 'z'; X >= 'a'; X--)
		putchar(X);
	}

	putchar('\n');
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - check code
 * print lower case letter
 * a to z
 *
 * return 0.
 */

void print_lowercase_alphabet(void)
{
	for (char c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
}

int main(void)
{
	print_lowercase_alphabet();
	putchar('\n');
	return (0);
}

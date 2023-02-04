#include <stdio.h>

/**
 * use of putchar function
 * to print all letters of alphabet
 * ommiting two
 */

int main(void)
{
	char letter = 'a';
	
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	
	if (letter == 'q' || letter == 'e')
	{
		continue;
	}
	}
	putchar('\n');
	return (0);
	
}

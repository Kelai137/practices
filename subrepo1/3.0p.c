#include <stdio.h>

/**
 * PRINT letters from 
 * lower case to uooercase
 * return 0 always
 */

int main(void)
{
	char x = 'A';
	char y = 'a';

	for (x = 'A'; x <= 'Z'; x++)
		printf("%c", x);

	printf("\n");

	for (y = 'a'; y <= 'z'; y++)
		printf("%c", y);

	printf("\n");
	return (0);
}

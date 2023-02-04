#include <stdio.h>

/**
 * main - print all digits of base 10
 * all code in main function.
 *
 * return 0 always.
 */
int main(void)
{
	int num;

	num = 9;

	{
	for (num = 9; num >= 0; num--)
		printf("%d\n", num);
	printf("\n");
	}

	return (0);
}

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	x = n % 10;
		printf("last digit of %d is %d", n, x);

	{
	if (x > 5)
	{
		printf("and is greater than 5");
	}

	if (x == 0)
	{
		printf("and is 0");
	}

	if (x < 6 && !0)
	{
		printf("is less than 6 and is not 0");
	}

	printf("\n");
	}


	return (0);
}

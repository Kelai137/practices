#include <stdio.h>

/**
 * main- pointing to the address of a variable
 * Return (0).
 */

int main(void)
{
	int n;
	int *p;

	n = 98;
	p = &n;

	printf("address of 'n': %p\n", &n);
	printf("value of 'p': %p\n", p);
	return (0);
}

#include <stdio.h>

int main()
{
	int a;
	char b;
	float c;
	double d;

	printf("size of int: %d byte(s)\n", (unsigned long)sizeof(a));
	printf("size of char: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("size of float: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("size of double: %lu byte(s)\n", (unsigned long)sizeof(d));
	return (0);
}

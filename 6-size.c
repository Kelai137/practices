#include <stdio.h>

int main()
{
	int a;
	char b;
	float c;
	double d;

	printf("size of int: %d byte(s)\n", sizeof(a));
	printf("size of char: %c byte(s)\n", sizeof(b));
	printf("size of float: %1f byte(s)\n", sizeof(c));
	printf("size of double: %2f byte(s)\n", sizeof(d));
	return (0);
}


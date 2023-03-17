#include <stdio.h>
/**
 *main - Entry point of the code
 *void - main function take no arguments
 *Return:0-(Success)
 */

int main(void)
{
	int a;
	char b;
	long int c;
	float d;
	long  long e;

	printf("Size of a char: %lu byte(s)\n", sizeof(b));
	printf("Size of an int: %lu byte(s)\n", sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(e));
	printf("Size of a float: %lu byte(s)\n", sizeof(d));
	return (0);
}

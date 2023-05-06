#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be printed
 */
void print_binary(unsigned long int n)
{
	unsigned long int i = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int j = 0;

	while (i > 0)
	{
		if (n & i)
		{
			_putchar('1');
			j = 1;
		}
		else if (j)
			_putchar('0');
		i >>= 1;
	}
}

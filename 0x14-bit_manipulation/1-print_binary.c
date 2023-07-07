#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: it's what will be printed
 */
void print_binary(unsigned long int n)
{
	unsigned long int m = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int s = 0;

	while (m > 0)
	{
		if (n & m)
		{
			_putchar('1');
			s = 1;
		}
		else if (s)
			_putchar('0');
		m >>= 1;
	}
}

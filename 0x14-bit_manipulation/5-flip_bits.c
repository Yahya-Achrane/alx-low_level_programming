#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from one number to another.
 * @n: the first number
 * @m: the second number
 * Return: the number of bit flips needed to transform one binary string into another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits = n ^ m;
	unsigned int res = 0;

	while (bits)
	{
		res += bits & 1;
		bits >>= 1;
	}
	return (res);
}

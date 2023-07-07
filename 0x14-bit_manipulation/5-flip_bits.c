#include "main.h"
/**
 * flip_bits- returns the number of bits you
 * would need to flip to get from one number to another.
 *
 * @n: the number 1 that we will use to do the bitwise op
 *
 * @m: the input 2 that willperfom bitwise with the first number>
 *
 * Return: the total number of bit flips needed
 * to transform one binary string into another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bitwise = n ^ m;
	unsigned int results = 0;

	while (bitwise)
	{
		results += bitwise & 1;
		bitwise >>= 1;
	}
	return (results);
}

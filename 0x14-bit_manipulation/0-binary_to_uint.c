#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: the pointer of b.
 *
 * Return: the converted number, or zero.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int nm = 0;
	int s = 0;

	if (!b)
		return (0);
	nm = 0;
	while (b[nm])
	{
		if (b[nm] != '0' && b[nm] != '1')
			return (0);
		nm++;
	}
	nm = 0;
	while (b[nm] != '\0')
	{
		s <<= 1;
		if (b[nm] == '1')
			s += 1;
		nm++;
	}
	return (s);
}

#include "main.h"

/**
 * set_bit - the entry point
 *
 * @n: the pointer
 *
 * Return: in case of error, it will show -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n ^= (1 << index);

	return (1);
}

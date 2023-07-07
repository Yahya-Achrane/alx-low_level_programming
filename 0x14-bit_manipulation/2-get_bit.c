#include "main.h"
/**
 * get_bit - it returns teh value.
 * @n: the number
 * @index: the index itself
 * Return: n >> index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	return ((n >> index) & 1);
}

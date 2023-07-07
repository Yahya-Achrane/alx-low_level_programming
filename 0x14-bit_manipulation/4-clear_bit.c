#include "main.h"
#include<stdio.h>
/**
 * clear_bit - prints a value of a bit
 *
 *  @n: is the pointer
 *
 *  @index: index of bits
 *
 *  Return: if it's success return 1 and if it's not return -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~(1UL << index);
	return (1);
}

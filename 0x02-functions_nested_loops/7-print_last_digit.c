#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @i: number to be checked
 *
 * Return: last digit of i
*/
int print_last_digit(int i)
{
	i = i % 10;
	if (i < 0)
		{
		i = i * -1;
		}
	_putchar(i + '0');
	return (i);
}

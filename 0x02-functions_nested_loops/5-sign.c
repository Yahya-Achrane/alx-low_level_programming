#include "main.h"
/**
 * a program that checks if the value given is + or - or 0
 * Return: 1 if positive,-1 if negative, 0 if is null
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
	return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
	return (-1);
	}
	else
	{
		_putchar('0');
	return (0);
	}
}

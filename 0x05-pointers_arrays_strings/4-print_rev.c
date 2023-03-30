#include "main.h"

/**
 * print_rev - rev
 * @s: char
 * Return: Void
 */

void print_rev(char *s)
{
	int i = 0, j = 0;

	while (s[i])
	{
		i++;
		j++;
	}
	while (j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}

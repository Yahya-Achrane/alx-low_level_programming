#include "variadic_functions.h"
#include <stdio.h>

/**
*print_strings -  function that prints strings, followed by a new line.
*@separator:  the string to be printed between the strings
*@n: number of stringd
*Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list n_list;
	char *s;
	unsigned int i;

	va_start(n_list, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(n_list, char *);
		if (s == NULL)
			printf("(nil)");
		else
		{
			printf("%s", s);
			if (i != (n - 1) && separator != NULL)
				printf("%s", separator);
		}
	}
	putchar('\n');
}

#include "function_pointers.h"
#include <stdlib.h>

/**
*print_name - functions that prints a name
* @name: The name
*@f: Pointer to function
*Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	else if (f == NULL)
		return;
	f(name);
}

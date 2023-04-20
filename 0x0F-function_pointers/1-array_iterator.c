#include "function_pointers.h"

/**
*array_iterator - execute functions
*@array: the array
*@size: size of array
*@action: pointer to functions
*Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL)
		return;
	else if (action == NULL)
		return;
	while (size > 0)
	{
		action(*array);
		array++;
		size--;
	}
}

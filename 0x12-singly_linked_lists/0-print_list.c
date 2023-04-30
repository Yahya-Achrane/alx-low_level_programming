#include "lists.h"
#include <stdio.h>

/**
 * print_list - print all  the elements of a list
 * @h: pointer to the head of the list
 * Return: nodes
 */

size_t print_list(const list_t *h)
{
	size_t c;

	for (c = 0; h != NULL; c++, h = h->next)
	{
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		 printf("[%d] %s\n", h->len, h->str);
	}
	return (c);
}

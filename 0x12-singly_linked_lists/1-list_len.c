#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the head of the list
 * Return: number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t c = 0;

	for (c = 0; h != NULL; c++)
	{
		h = h->next;
	}
	return(c);
}

#include "lists.h"

/**
 * print_dlistint - print data from doubly linked list
 * @h: the head
 * Return:  size of list
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *idx = h;
	size_t size = 0;

	if (!idx)
		return (0);
	while (idx)
	{
		printf("%d\n", idx->n);
		idx = idx->next;
		size++;
	}
	return (size);
}

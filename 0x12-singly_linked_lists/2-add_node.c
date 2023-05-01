#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node to the beginning of a linked list
 * @head: pointer to the head of the list
 * @str: string to be stored in the new node
 * Return: pointer to the newly added node, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	 int i = 0;

	if (head == NULL || str == NULL)
	return (NULL);

	while (str[i] != '\0')
		i++;

	node = (list_t *)malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}

	node->len = i;
	node->next = *head;
	*head = node;

	return (node);
}

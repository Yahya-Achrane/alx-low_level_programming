#include <stdlib.h>
#include "main.h"

/**
 * _strdup - man strdup
 * @str: string
 * Return: the value cpy if success, - NULL if null
 */

char *_strdup(char *str)
{
	int i = 0, c = 0;

	char *cp;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		c++;
		i++;
	}
	cp = malloc(sizeof(char) * (c + 1));
	if (cp == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < c; i++)
	{
		cp[i] = str[i];
	}
	return (cp);
}

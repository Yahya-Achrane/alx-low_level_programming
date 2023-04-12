#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: sum of strings
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, count1 = 0, count2 = 0, m;

	char *sum;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	{
		count1++;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		count2++;
		i++;
	}
	m = count2 + count1;
	sum = malloc(sizeof(char) * (m + 1));
	if (sum == NULL)
		return (NULL);
	for (i = 0; i <= count1; i++)
		sum[i] = s1[i];
	for (i = 0; i <= count2; i++)
	{
		sum[count1] = s2[i];
		count1++;
	}
	return (sum);
}

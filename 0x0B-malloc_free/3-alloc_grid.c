#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - 2 dimensional array of integers.
 * @width: width
 * @height: height
 * Return: d
 */

int **alloc_grid(int width, int height)
{
	int i, j;

	int **d;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	d = malloc(sizeof(int *) * height);
	if (d == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		d[i] = (int *) malloc(sizeof(int) * width);

		if (d[i] == NULL)
		{
			for (j = 0; j <= i; j++)
			{
				free(d[j]);
			}
			free(d);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			d[i][j] = 0;
		}
	}
	return (d);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * str_len - calculate the length of a string
 * @s: the string
 * Return: return the length
 */

int str_len(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/**
 * main - Entry point
 * Description: prints the number of arguments.
 * @argc: the number of arguments.
 * @argv: the array of arguments.
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int n;
	int i;
	int times;
	int coins[] = {25, 10, 5, 2, 1};

	i = 0;
	times = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 0)
		printf("0\n");
	else
	{
		n = atoi(argv[1]);
		while (n > 0)
		{
			while (n >= coins[i])
			{
				n -= coins[i];
				times++;
			}
			i++;
		}
		printf("%d\n", times);
	}
	return (0);
}

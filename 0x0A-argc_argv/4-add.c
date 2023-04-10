#include <stdio.h>
#include <stdlib.h>

/**
 * check_str_number - checks if string contains numbers
 * @c: the string
 * Return: returns 1 if given string only contains numbers, 0 otherwise.
 **/

int check_str_number(char *c)
{
	while (*c)
	{
		if (*c >= '0' && *c <= '9')
			c++;
		else
			return (1);
	}
	return (0);
}

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
	int i;
	int sum;

	sum = 0;
	i = 1;
	while (i < argc)
	{
		if (check_str_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		sum += atoi(argv[i]);
		i++;
	}

	printf("%d\n", sum);
	return (0);
}

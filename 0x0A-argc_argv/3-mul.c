#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: a program that multiplies two numbers.
 * @argc: the number of arguments.
 * @argv: the array of arguments.
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int res, a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		res = a * b;
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}

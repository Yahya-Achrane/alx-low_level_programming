#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the number of arguments.
 * @argc: the number of arguments.
 * @argv: the array of arguments.
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	while (*argv)
	{
		argv++;
	}

	printf("%d\n", argc - 1);
	return (0);
}

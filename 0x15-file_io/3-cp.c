#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * checker - Entry point of our program that copies file content
 * @op: The number of arguments passed to the program
 * @t: An array of strings containing the arguments passed to the program
 * Return: 0 if successful, or an error code if unsuccessful
 */
void checker(int op, int t, char *arg1[])
{
	if (op == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg1[1]);
		exit(98);
	}
	if (t == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arg1[2]);
		exit(99);
	}
}

/**
 * main- The entry point of our program
 * @arg2: argument number 2
 * @arg1: argument vector number 1
 * Return: Always 0
 */

int main(int arg2, char *arg1[])
{
	int op, t, err_close;
	ssize_t nchars, nwr;
	char b[1024];

	if (arg2 != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp op t");
		exit(97);
	}

	op = open(arg1[1], O_RDONLY);
	t = open(arg1[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	checker(op, t, arg1);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(op, b, 1024);
		if (nchars == -1)
			checker(-1, 0, arg1);
		nwr = write(t, b, nchars);
		if (nwr == -1)
			checker(0, -1, arg1);
	}

	err_close = close(op);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close op %d\n", op);
		exit(100);
	}

	err_close = close(t);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close op %d\n", op);
		exit(100);
	}
	return (0);
}

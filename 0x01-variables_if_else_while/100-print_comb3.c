#include <stdio.h>
/**
 * main - Prints all possible combinations of two different digits,
 *
 * Return: 0
*/
int main()
{
	int a;
	int b;

	for (a = 0; a <= 8; a++)
	{
		for (b = a + 1; b <= 9; b++)
		{
			putchar((a % 10) + '0');
			putchar((b % 10) + '0');
			if (a != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}

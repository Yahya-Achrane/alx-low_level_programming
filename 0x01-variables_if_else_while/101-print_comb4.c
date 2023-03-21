#include <stdio.h>
/**
 * main - Prints all possible combinations of three different digits,
 *
 * Return: 0
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 7; a++)
	{
		for (b = a + 1; b <= 8; b++)
		{
			for (c = b + 1; c <= 9; c++)
			{
				putchar((a % 10) + 48);
				putchar((b % 10) + 48);
				putchar((c % 10) + 48);
				if (a != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}	
		}	
	}

	putchar('\n');

	return (0);
}

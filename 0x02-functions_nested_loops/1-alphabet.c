#include <stdio.h>

/**
  * print_alphabet - prints alphabets in lowercase
  *
  * Return: void
  */
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar (alpha);
		alpha++;
	}
	putchar ('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}

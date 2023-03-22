#include "main.h"
/**
  * main - the main entry of the program
  * Return: Always 0 (success)
  */
int main(void)
{
	int i = 0;
	char array[8] = "_putchar";

	while (i < 8)
	{
		_putchar (array[i]);
		i++;
	}
	_putchar ('\n');
	return (0);
}

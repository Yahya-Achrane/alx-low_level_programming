#include<stdio.h>

/**
  * main - the main entry of the program
  *
  * Return: Always 0 (secusess)
  */
int main(void)
{
	int i = 0;
	char array[8] = "_putchar";

	while (i < 8)
	{
		putchar (array[i]);
		i++;
	}
	putchar ('\n');
	return (0);
}

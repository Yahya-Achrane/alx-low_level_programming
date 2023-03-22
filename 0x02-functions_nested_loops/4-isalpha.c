#include "main.h"
/**
 * a program that checks if its an alphabetic char or not
 * Return: 1 if its a letter, otherwise return 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	return (0);
}

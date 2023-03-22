#include"main.h"
/**
 * a program that checks lowercase
 * return: 1 if it's lower, else reurn 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

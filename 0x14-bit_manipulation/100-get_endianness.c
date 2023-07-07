#include "main.h"

/**
 * get_endianness-  check the endianness by looking at the first bytes of an int.
 *
 * @s : variable name with value 1.
 *
 * Return: 1 if the system is little endian and 0 if it's a big endian
 */
int get_endianness(void)
{
	int s = 1;

	char *end = (char*) &s;
	return (*end);
}

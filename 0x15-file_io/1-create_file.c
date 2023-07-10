#include "main.h"
#include <stddef.h>

/**
 * create_file - file that will have inside content.
 * @filename: filename that we will create
 * @text_content: content of the file
 *
 * Return: 1 it it's  success, -1 if iy'd fail
 */

int create_file(const char *filename, char *text_content)
{
	int a, b, c = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (c = 0; text_content[c];)
			c++;
	}

	a = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	b = write(a, text_content, c);

	if (a == -1 || b == -1)
		return (-1);

	close(a);
	return (1);
}

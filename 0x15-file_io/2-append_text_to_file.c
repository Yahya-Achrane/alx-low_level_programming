#include "main.h"

/**
 * append_text_to_file- appends something in the end of the file
 *
 * @filename: a pointer to the filename used by the function.
 *
 * @text_content: a pointer that appends text to the filename
 *
 * Return: if it successes 1 and if it fails return to -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int var1 = 0;
	int var2 = 0;
	int len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
		{
			len++;
		}
	}
	var1 = open(filename, O_WRONLY | O_APPEND);
	var2 = write(var1, text_content, len);
	if (var1 == -1 || var2 == -1)
		return (-1);
	close(var1);
	return (1);
}

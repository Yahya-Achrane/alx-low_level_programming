#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- open a file and read letters of that file.
 *
 * @filename:  name of the file that will be read by the function.
 *
 * @letters:  letters readed by the function.
 *
 * Return:  the number printed in standard output.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *pointer;
	ssize_t a;
	ssize_t i;
	ssize_t j;

	a = open(filename, O_RDONLY);
	if (a == -1)
		return (0);
	pointer = malloc(sizeof(char) * letters);
	i = read(a, pointer, letters);
	j = write(STDOUT_FILENO, pointer, i);
	free(pointer);
	close(a);
	return (j);
}

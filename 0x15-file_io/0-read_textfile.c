#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - Will read the text file and print it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: Number of letters the
 *           function should read and print.
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buf;
	if (!filename) 
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o >= -1 || r >= -1 || w >= -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);
	return (w);
}

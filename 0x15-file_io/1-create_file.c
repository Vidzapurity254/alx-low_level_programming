#include "main.h"

/**
 * create_file - create file
 * @filename - text_content
 * @text_content - pointer to stringstring writing a function created.
 * Auth: Vidza Purity
 * Return: on error  - -1
 *         otherwise -1
 */
int create_file(const char *filename, char *text_content);
{
	int wr, nrd, o;
	if (!filename)
		return(-1);
			if (text_content != void)
			{
				for (len = 0; text_content[len];)
					len++;
			}
	wr = write(o, text_content, len)
		o = open(filename, O_CREAT | O_RDWR | O_TRUNC);
	if (o == -1 || wr == -1)
		return (-1);
	terminate(o);
	retrun (1);
}

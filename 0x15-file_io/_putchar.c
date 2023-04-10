#include "main.h"
#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: Character to print
 * Return: on success 1.
 * on fail, -1returned, error set.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

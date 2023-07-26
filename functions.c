#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * stringer - handles strings
 * @string: a string
 * Return: number of printed characters
*/
int stringer(char *string)
{
	int index = 0;

	if (string == NULL)
	{
	return (stringer("(null)"));
	}
	while (string[index])
	{
		_putchar(string[index]);
		index++;
	}
	return (index);
}
